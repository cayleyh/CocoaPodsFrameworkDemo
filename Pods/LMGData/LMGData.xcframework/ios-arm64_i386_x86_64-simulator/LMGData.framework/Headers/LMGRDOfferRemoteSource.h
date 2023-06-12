//
//  LMGRDOfferRemoteSource.h
//  LMGData
//
//  Created by Saurabh Gupta on 23/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAOfferRemoteStore.h"
#import "LMGRDGraphQLClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDOfferRemoteSource : NSObject<LMGDAOfferRemoteSource>

+ (instancetype)defaultImplementation;
- (instancetype)initWithClient:(LMGRDGraphQLClient *)client NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (nullable LMGOffer *)getWithDetailParams:(nonnull LMGDetailsRequestParams *)params
                                   session:(nonnull LMGSession *)session
                                    expect:(NSError *__autoreleasing  _Nullable * _Nullable)error;

- (BOOL)bookmark:(BOOL)bookmark
           offer:(nonnull LMGPlatformId *)offerId
      businessId:(nonnull LMGPlatformId *)businessId
   withLocations:(nullable NSArray<LMGPlatformId *> *)locationIds
       inSession:(nonnull LMGSession *)session
          expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGRedemptionState *)getRedemptionStateForId:(nonnull LMGPlatformId *)offerId
                                              atLocation:(nonnull LMGPlatformId *)locationId
                                               inSession:(nonnull LMGSession *)session
                                                  expect:(NSError * _Nullable * _Nullable)error;

- (NSArray<LMGOffer *> *)getOffersByLocationWithParams:(nonnull LMGOffersListRequestParams *)params
                                                      session:(nonnull LMGSession *)session
                                                       expect:(NSError *__autoreleasing  _Nullable * _Nullable)error;

- (nullable LMGRedemptionState *)transitionOfferState:(nonnull NSString *)redemptionState
                                      usingTransition:(nonnull LMGRedemptionStateTransition *)transition
                                             withArgs:(nonnull NSArray<LMGRedemptionTransitionArgument *> *)args
                                             forOffer:(nonnull LMGPlatformId *)offerId
                                           atLocation:(nonnull LMGPlatformId *)locationId
                                       deviceLocation:(nullable LMGCoordinate *)coordinate
                                            inSession:(nonnull LMGSession *)session
                                               expect:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
