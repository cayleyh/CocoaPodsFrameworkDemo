//
//  LMGClient.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-19.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "LMGDataProvider.h"
#import "LMGRedemptionController.h"
#import "LMGCancellable.h"
#import "LMGDebugLoggerLevel.h"
#import <UIKit/UIViewController.h>

@class LMGClientConfiguration;
@class LMGDebugLogger;
@class LMGAnalyticsDispatcher;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGOperationFactory;

@protocol LMGClientAuthenticationDelegate

- (void)userAuthenticationRequiredByClient:(LMGClient *)client;

@end

@protocol LMGClientNavigationDelegate

- (nullable UIViewController *)onPendingView:(UIViewController *)pending currentView:(UIViewController *)current data:(NSDictionary *)data;

@end

@protocol LMGClientLocationDelegate
- (void)requestWhenInUseLocation;
- (void)enablePreciseLocation API_AVAILABLE(ios(14.0));

@end

@interface LMGClient : NSObject

@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nullable, nonatomic, readonly) LMGContentFilter *contentFilter;
@property (nullable, nonatomic, readonly, weak) id<LMGClientNavigationDelegate> navigationDelegate;

- (instancetype)initWith:(id<LMGOperationFactory>)operationFactory
                   queue:(NSOperationQueue *)queue
      notificationCenter:(NSNotificationCenter *)notificationCenter
             debugLogger:(LMGDebugLogger *)debugLogger
     analyticsDispatcher:(LMGAnalyticsDispatcher *)analyticsDispatcher NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (void)setLoggerLevel:(LMGDebugLoggerLevel)loggerLevel;
- (void)setIntegrationKey:(LMGIntegrationKey *)integrationKey;
- (void)setAuthenticationDelegate:(nullable id<LMGClientAuthenticationDelegate>)authenticationDelegate;
- (void)setLocationDelegate:(nullable id<LMGClientLocationDelegate>)locationDelegate;
- (void)setNavigationDelegate:(id<LMGClientNavigationDelegate>)navigationDelegate;

- (BOOL)requestUserAuthentication;
- (BOOL)enablePreciseLocation API_AVAILABLE(ios(14.0));
- (BOOL)requestWhenInUseLocation;

- (void)getUserWithBlock:(void (^)(LMGUser *))block DEPRECATED_MSG_ATTRIBUTE("Please use getUserWithCompletion: method instead.");
- (void)getUserWithCompletion:(void (^)(LMGUser * _Nullable, NSError * _Nullable))block;

- (void)identify:(LMGUserId *)userId
          traits:(nullable LMGUserTraits *)traits DEPRECATED_MSG_ATTRIBUTE("Please use identify:traits:completion: method instead.");
- (void)identify:(LMGUserId *)userId
          traits:(nullable LMGUserTraits *)traits
      completion:(void (^_Nullable)(LMGUser * _Nullable, NSError * _Nullable))block;

- (void)updateUser:(LMGUserTraits *)traits DEPRECATED_MSG_ATTRIBUTE("Please use updateUser:traits:completion: method instead.");
- (void)updateUser:(LMGUserTraits *)traits
        completion:(void (^_Nullable)(LMGUser * _Nullable, NSError * _Nullable))block;

- (void)getCurrentUserLocationWithBlock:(void (^_Nullable)(LMGCoordinate * _Nullable, NSError * _Nullable))completion;

- (void)setUserHash:(nullable LMGUserHMAC *)userHash;

- (void)logout DEPRECATED_MSG_ATTRIBUTE("Please use logout: method instead.");
- (void)logout:(void (^_Nullable)(LMGSession * _Nullable, NSError * _Nullable))block;

- (void)getSearchTermsWithBlock:(void (^)(NSArray<NSString *> *terms))block;
- (void)saveSearchTerm:(NSString *)term;

- (void)setContentFilterWithBuilder:(void (^_Nullable)(LMGContentFilterBuilder *builder))builderBlock;

- (id<LMGCancellable>)getBusinessWithParams:(LMGDetailsRequestParams *)params
                                 completion:(void (^)(LMGBusiness * _Nullable business, NSError * _Nullable error))block;
- (LMGDataProvider<LMGBusiness *, LMGBusinessesListRequestParams *> *)businessListProvider;
- (LMGDataProvider<LMGBusiness *, LMGCollectionRequestParams *> *)collectionBusinessesListProvider;

- (id<LMGCancellable>)getOfferWithParams:(LMGDetailsRequestParams *)params
                              completion:(void (^)(LMGOffer * _Nullable offer, NSError * _Nullable error))block;
- (id<LMGCancellable>)bookmark:(BOOL)bookmark
                         offer:(LMGPlatformId *)offerId
                      business:(LMGPlatformId *)businessId
                   atLocations:(NSArray<LMGPlatformId *> *)locationIds
                    completion:(void (^)(NSError * _Nullable error))block;
- (id<LMGCancellable>)joinRewardsForOffer:(LMGPlatformId *)offerId
                                 business:(LMGPlatformId *)businessId
                              atLocations:(NSArray<LMGPlatformId *> *)locationIds
                               completion:(void (^)(NSError * _Nullable error))block;

- (id<LMGCancellable>)getCollectionWithParams:(LMGDetailsRequestParams *)params
                                   completion:(void (^)(LMGCollection * _Nullable collection, NSError * _Nullable error))block;
- (LMGDataProvider<LMGCollection *, LMGCollectionsListRequestParams *> *)collectionsListProvider;

- (LMGDataProvider<LMGLocation *, LMGLocationsMapRequestParams *> *)locationsMapProvider;
- (id<LMGCancellable>)getLocationWithParams:(LMGDetailsRequestParams *)params
                                 completion:(void (^_Nonnull)(LMGLocation * _Nullable, NSError * _Nullable))block;
- (id<LMGCancellable>)getOffersByLocationParams:(LMGOffersListRequestParams *)params
                                     completion:(void (^_Nonnull)(NSArray<LMGOffer *> * _Nullable, NSError * _Nullable))block;

- (LMGRedemptionController *)redemptionControllerForOffer:(LMGPlatformId *)offerId
                                               atBusiness:(LMGPlatformId *)businessId
                                                 location:(LMGPlatformId *)locationId;
@end

NS_ASSUME_NONNULL_END
