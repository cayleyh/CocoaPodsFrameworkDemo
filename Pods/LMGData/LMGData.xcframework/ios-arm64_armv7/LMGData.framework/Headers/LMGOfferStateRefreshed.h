//
//  LMGOfferStateRefreshed.h
//  LMGData
//
//  Created by Esteban Vallejo - GITL on 07/04/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"
#import "LMGPlatformId.h"

@class LMGRedemptionState;

NS_ASSUME_NONNULL_BEGIN

@interface LMGOfferStateRefreshed : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) LMGPlatformId *offerId;
@property (nullable, nonatomic, readonly) NSArray<LMGPlatformId *> *locationIds;
@property (nonnull, nonatomic, readonly) LMGRedemptionState *state;

- (nonnull instancetype)initWithOfferId:(nonnull LMGPlatformId *)offerId locationIds:(nullable NSArray<LMGPlatformId *> *)locationIds state:(nonnull LMGRedemptionState *)state NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
