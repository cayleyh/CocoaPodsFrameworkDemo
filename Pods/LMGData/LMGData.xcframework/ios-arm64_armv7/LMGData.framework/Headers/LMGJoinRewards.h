//
//  LMGJoinRewards.h
//  LMGData
//
//  Created by Esteban Vallejo - GITL on 25/06/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGBaseUseCase.h"
#import "LMGPlatformId.h"

@class LMGBookmarkOffer;
@class LMGJoinRewardsParams;

NS_ASSUME_NONNULL_BEGIN

@interface LMGJoinRewards : LMGBaseUseCase<LMGJoinRewardsParams *, NoParams *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter bookmarkOffer:(LMGBookmarkOffer *)boobkmarkOffer NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end

@interface LMGJoinRewardsParams: NSObject

@property (nonatomic, readonly) LMGPlatformId *offerId;
@property (nonatomic, readonly) LMGPlatformId *businessId;
@property (nonatomic, readonly) NSArray<LMGPlatformId *> *locationIds;

- (instancetype)initForOffer:(LMGPlatformId *)offerId
                  businessId:(LMGPlatformId *)businessId
                 locationIds:(NSArray<LMGPlatformId *> *)locationsIds NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
