//
//  LMGOfferRepository.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-21.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGOffer.h"
#import "LMGRedemptionState.h"
#import "LMGRedemptionStateTransition.h"
#import "LMGRedemptionTransitionArgument.h"
#import "LMGCollectionRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGOffersListRequestParams.h"
#import "LMGCoordinate.h"
#import "LMGPagedResult.h"

@class LMGSession;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGOfferRepository <NSObject>

- (nullable LMGOffer *)getWithDetailParams:(LMGDetailsRequestParams *)params
                                   session:(LMGSession *)session
                                    expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGRedemptionState *)getRedemptionStateForId:(LMGPlatformId *)offerId
                                              atLocation:(LMGPlatformId *)locationId
                                               inSession:(LMGSession *)session
                                                  expect:(NSError * _Nullable * _Nullable)error;

- (nullable NSArray<LMGOffer *> *)getOffersByLocationWithParams:(LMGOffersListRequestParams *)params
                                                        session:(LMGSession *)session
                                                         expect:(NSError *  _Nullable * _Nullable)error;

- (nullable LMGRedemptionState *)transitionOfferState:(NSString *)redemptionState
                                      usingTransition:(LMGRedemptionStateTransition *)transition
                                             withArgs:(NSArray<LMGRedemptionTransitionArgument *> *)args
                                             forOffer:(LMGPlatformId *)offerId
                                           atLocation:(LMGPlatformId *)locationId
                                       deviceLocation:(nullable LMGCoordinate *)coordinate
                                            inSession:(LMGSession *)session
                                               expect:(NSError * _Nullable * _Nullable)error;

- (BOOL)bookmark:(BOOL)bookmark
           offer:(LMGPlatformId *)offerId
      businessId:(LMGPlatformId *)businessId
   withLocations:(NSArray<LMGPlatformId *> *)locationIds
       inSession:(LMGSession *)session
          expect:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
