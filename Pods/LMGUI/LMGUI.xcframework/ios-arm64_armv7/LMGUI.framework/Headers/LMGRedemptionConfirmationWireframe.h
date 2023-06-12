//
//  LMGRedemptionConfirmationWireframe.h
//  Platform Client UI
//
//  Created by Myroslav Pomazan on 2018-07-04.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGData;

@interface LMGRedemptionConfirmationWireframe : NSObject

+ (nonnull UIViewController *)redemptionConfirmationFor:(nonnull LMGPlatformId *)offerId locationId:(nonnull LMGPlatformId *)locationId redemptionState:(nonnull LMGRedemptionState *)state showRedeemAnimation:(BOOL)showRedeemAnimation;

@end
