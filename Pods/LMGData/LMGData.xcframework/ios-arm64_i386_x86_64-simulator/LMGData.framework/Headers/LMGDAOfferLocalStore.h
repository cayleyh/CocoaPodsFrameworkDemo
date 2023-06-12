//
//  LMGDAOfferLocalStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

#import <Foundation/Foundation.h>
#import "LMGDAOfferStore.h"
#import "LMGDASaveableParams.h"

@protocol LMGDAOfferLocalSource <NSObject>


- (nullable LMGOffer *)getWith:(nonnull LMGDetailsRequestParams *)params
                        expect:(NSError * _Nullable * _Nullable)error;
    
- (nullable NSArray<LMGOffer *> *)getOffersByLocationWithParams:(nonnull LMGOffersListRequestParams *)params
                                                             inSession:(nonnull LMGSession *)session
                                                                expect:(NSError * _Nullable * _Nullable)error;

- (BOOL)bookmark:(BOOL)bookmark
           offer:(nonnull LMGPlatformId *)offerId
      businessId:(nonnull LMGPlatformId *)businessId
   withLocations:(nullable NSArray<LMGPlatformId *> *)locationIds
       inSession:(nonnull LMGSession *)session
          expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(nonnull LMGOffer *)offer forParams:(nonnull LMGDetailsRequestParams *)params;

- (void)saveOffers:(nonnull NSArray<LMGOffer *> *)offers forParams:(nonnull LMGOffersListRequestParams *)params;

- (BOOL)hasOfferFor:(nonnull LMGDetailsRequestParams *)params;
- (BOOL)hasListForParams:(nonnull LMGOffersListRequestParams *)params;

- (void)reset;

@end

@interface LMGDAOfferLocalStore : NSObject<LMGDAOfferStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDAOfferLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
