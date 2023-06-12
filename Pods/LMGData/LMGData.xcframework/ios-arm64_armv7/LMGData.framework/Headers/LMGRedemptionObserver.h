//
//  LMGRedemptionObserver.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGRedemptionArgumentType.h"

@class LMGRedemptionState;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGRedemptionObserver <NSObject>

- (void)redemptionRefreshRequested;
- (void)redemptionStateChangedTo:(LMGRedemptionState *)state;
- (void)redemptionFailedWithError:(NSError *)error;
- (void)redemptionRequiresPromptOfType:(LMGRedemptionArgumentType)type
                          withResolver:(void(^)(id))resolver;

@end

NS_ASSUME_NONNULL_END
