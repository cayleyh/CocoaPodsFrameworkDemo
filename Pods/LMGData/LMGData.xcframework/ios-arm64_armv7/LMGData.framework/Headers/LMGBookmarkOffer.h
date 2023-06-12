//
//  LMGBookmarkOffer.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-13.
//

#import "LMGSessionRequiredUseCase.h"
#import "LMGOfferRepository.h"
#import "LMGPlatformId.h"

@class LMGBookmarkOfferParams;

NS_ASSUME_NONNULL_BEGIN

@interface LMGBookmarkOffer : LMGSessionRequiredUseCase<LMGBookmarkOfferParams *, NoParams *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter getSession:(LMGGetSession *)getSession restartSession:(LMGRestartSession *)restartSession renewSession:(LMGRenewSession *)renewSession offerRepository:(id<LMGOfferRepository>)offerRepository NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter getSession:(LMGGetSession *)getSession restartSession:(LMGRestartSession *)restartSession renewSession:(LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end

@interface LMGBookmarkOfferParams: NSObject

@property (nonatomic, readonly) LMGPlatformId *offerId;
@property (nonatomic, readonly) LMGPlatformId *businessId;
@property (nonatomic, readonly) NSArray<LMGPlatformId *> *locationIds;
@property (nonatomic, readonly) BOOL isBookmarked;

- (instancetype)initForOffer:(LMGPlatformId *)offerId businessId:(LMGPlatformId *)businessId locationIds:(NSArray<LMGPlatformId *> *)locationIds bookmark:(BOOL)bookmark NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

@interface NSError (LMGBookmarkOffer)

+ (NSError *)userNotIdentifiedWhileBookmarking;

@end

NS_ASSUME_NONNULL_END
