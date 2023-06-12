//
//  LMGOfferStateChanged.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"
#import "LMGPlatformId.h"

@class LMGRedemptionState;

@interface LMGOfferStateChanged : NSObject<LMGNotification>

@property (nonnull, nonatomic, readonly) LMGPlatformId *offerId;
@property (nullable, nonatomic, readonly) NSArray<LMGPlatformId *> *locationIds;
@property (nonnull, nonatomic, readonly) LMGRedemptionState *prevState;
@property (nonnull, nonatomic, readonly) LMGRedemptionState *currentState;

- (nonnull instancetype)initWithOfferId:(nonnull LMGPlatformId *)offerId locationIds:(nullable NSArray<LMGPlatformId *> *)locationIds prevState:(nonnull LMGRedemptionState *)prevState nextState:(nonnull LMGRedemptionState *)nextState NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
