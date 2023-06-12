//
//  LMGDAOfferRemoteStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
#import "LMGDAOfferStore.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDAOfferRemoteSource <NSObject>

- (nullable LMGOffer *)getWithDetailParams:(LMGDetailsRequestParams *)params
                                   session:(LMGSession *)session
                                    expect:(NSError *__autoreleasing  _Nullable * _Nullable)error;


- (nullable LMGRedemptionState *)getRedemptionStateForId:(LMGPlatformId *)offerId
                                              atLocation:(LMGPlatformId *)locationId
                                               inSession:(LMGSession *)session
                                                  expect:(NSError * _Nullable * _Nullable)error;

- (nullable NSArray<LMGOffer *> *)getOffersByLocationWithParams:(LMGOffersListRequestParams *)params
                                                        session:(LMGSession *)session
                                                         expect:(NSError *  _Nullable * _Nullable)error;

- (BOOL)bookmark:(BOOL)bookmark
           offer:(LMGPlatformId *)offerId
      businessId:(LMGPlatformId *)businessId
   withLocations:(NSArray<LMGPlatformId *> *)locationIds
       inSession:(LMGSession *)session
          expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGRedemptionState *)transitionOfferState:(NSString *)redemptionState
                                      usingTransition:(LMGRedemptionStateTransition *)transition
                                             withArgs:(NSArray<LMGRedemptionTransitionArgument *> *)args
                                             forOffer:(LMGPlatformId *)offerId
                                           atLocation:(LMGPlatformId *)locationId
                                       deviceLocation:(nullable LMGCoordinate *)coordinate
                                            inSession:(LMGSession *)session
                                               expect:(NSError * _Nullable * _Nullable)error;


@end

@interface LMGDAOfferRemoteStore : NSObject<LMGDAOfferStore>

- (instancetype)initWithSource:(id<LMGDAOfferRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
