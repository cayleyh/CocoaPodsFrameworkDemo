//
//  LMGDAOfferStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
#import "LMGOffer.h"
#import "LMGSession.h"
#import "LMGRedemptionState.h"
#import "LMGRedemptionTransitionArgument.h"
#import "LMGCollectionRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGOffersListRequestParams.h"
#import "LMGDASaveableParams.h"
#import "LMGPagedResult.h"

@class LMGRedemptionStateTransition;

@protocol LMGDAOfferStore <NSObject>

- (nullable LMGOffer *)getWithDetailParams:(nonnull LMGDetailsRequestParams *)params
                                   session:(nonnull LMGSession *)session
                                    expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGRedemptionState *)getRedemptionStateForId:(nonnull LMGPlatformId *)offerId
                                              atLocation:(nonnull LMGPlatformId *)locationId
                                               inSession:(nonnull LMGSession *)session
                                                  expect:(NSError * _Nullable * _Nullable)error;

- (nullable NSArray<LMGOffer *> *)getOffersByLocationWithParams:(nonnull LMGOffersListRequestParams *)params
                                                               session:(nonnull LMGSession *)session
                                                                expect:(NSError *  _Nullable * _Nullable)error;

- (BOOL)bookmark:(BOOL)bookmark
           offer:(nonnull LMGPlatformId *)offerId
      businessId:(nonnull LMGPlatformId *)businessId
   withLocations:(nullable NSArray<LMGPlatformId *> *)locationIds
       inSession:(nonnull LMGSession *)session
          expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGRedemptionState *)transitionOfferState:(nonnull NSString *)redemptionState
                                      usingTransition:(nonnull LMGRedemptionStateTransition *)transition
                                             withArgs:(nonnull NSArray<LMGRedemptionTransitionArgument *> *)args
                                             forOffer:(nonnull LMGPlatformId *)offerId
                                           atLocation:(nonnull LMGPlatformId *)locationId
                                       deviceLocation:(nullable LMGCoordinate *)coordinate
                                            inSession:(nonnull LMGSession *)session
                                               expect:(NSError * _Nullable * _Nullable)error;

- (void)save:(nonnull LMGOffer *)offer forParams:(nonnull LMGDetailsRequestParams *)params;

- (void)saveOffers:(nonnull NSArray<LMGOffer *> *)offers forParams:(nonnull LMGOffersListRequestParams *)params;

- (void)reset;

@end
