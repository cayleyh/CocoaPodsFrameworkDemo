//
//  LMGRedemptionStateTransition.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGRedemptionStateType.h"
#import "LMGDeepCopying.h"

@class LMGRedemptionTransitionArgument;

@interface LMGRedemptionStateTransition : NSObject<NSCopying, LMGDeepCopying>

/**
 * Index used to identify transition.
 */
@property (nonatomic, readonly) NSInteger id;

/**
 * Text on client button that executes transition mutation.
 */
@property (nullable, nonatomic, copy, readonly) NSString *transitionCta;

/**
 * Arguments for transition.
 */
@property (nonnull, nonatomic, copy, readonly) NSArray<LMGRedemptionTransitionArgument *> *args;

/**
 * Type of the offer state.
 */
@property (nonatomic, readonly) LMGRedemptionStateType targetType;

- (nonnull instancetype)initWithId:(NSInteger)id transitionCta:(nullable NSString *)transitionCta args:(nonnull NSArray<LMGRedemptionTransitionArgument *> *)args targetType:(LMGRedemptionStateType)targetType NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
