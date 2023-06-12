//
//  LMGRedemptionState.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-24.
//

#import <Foundation/Foundation.h>
#import "LMGRedemptionStateType.h"
#import "LMGDeepCopying.h";

@class LMGSchedule;
@class LMGOfferLimits;
@class LMGRedemptionStateTransition;
@class LMGRedemptionStateBuilder;
@class LMGOfferStateMeta;

typedef NS_ENUM(NSUInteger, LMGRedemptionDisabilityReason) {
    LMGRedemptionDisabilityReasonNone,
    LMGRedemptionDisabilityReasonDisabled,
    LMGRedemptionDisabilityReasonOfferUsed,
    LMGRedemptionDisabilityReasonSoldOut,
    LMGRedemptionDisabilityReasonSoldOutPerWindow,
    LMGRedemptionDisabilityReasonSoldOutPerProfile,
    LMGRedemptionDisabilityReasonSoldOutPerProfilePerWindow,
    LMGRedemptionDisabilityReasonSchedule,
    LMGRedemptionDisabilityReasonNotVisible,
    LMGRedemptionDisabilityReasonNotSupported,
    LMGRedemptionDisabilityReasonAuthenticationRequired,
    LMGRedemptionDisabilityReasonFrozen
};

typedef void (^RedemptionStateBuildBlock)(LMGRedemptionStateBuilder  * _Nonnull builder);

@interface LMGRedemptionState : NSObject<NSCopying, LMGDeepCopying>

/**
 * Name of current state.
 */
@property (nonnull, nonatomic, copy, readonly) NSString *name;

/**
 * Type of current state.
 */
@property (nonatomic, readonly) LMGRedemptionStateType type;

/**
 * Expiration of state in seconds.
 */
@property (nullable, nonatomic, copy, readonly) NSNumber *expiresIn;

/**
 * Until state can be exited in seconds.
 */
@property (nullable, nonatomic, copy, readonly) NSNumber *unfrozenIn;

/**
 * Available transitions for current state.
 */
@property (nullable, nonatomic, copy, readonly) NSArray<LMGRedemptionStateTransition *> *transitions;

/**
 * Time until data becomes stale in seconds.
 */
@property (nonatomic, readonly) NSTimeInterval refreshInterval;

/**
 * Additional information for state.
 */
@property (nullable, nonatomic, readonly) LMGOfferStateMeta *meta;

@property (nonatomic, readonly) LMGRedemptionDisabilityReason disabilityReason;
@property (nullable, nonatomic, copy, readonly) NSDate *expirationDate;
@property (nullable, nonatomic, copy, readonly) NSDate *unfrozenDate;
@property (nullable, nonatomic, copy, readonly) NSString *promoCode;
@property (nullable, nonatomic, copy, readonly) LMGOfferLimits *limits;
@property (nullable, nonatomic, copy, readonly) LMGSchedule *schedule;

- (nonnull instancetype)initWithBuilder:(nonnull LMGRedemptionStateBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)copyWithBlock:(nullable RedemptionStateBuildBlock)block;

- (BOOL)hasInvalidActionTarget;
- (BOOL)isUsable;
- (BOOL)isFrozen;

@end

@interface LMGRedemptionStateBuilder : NSObject

@property (nonnull, nonatomic, copy, readonly) NSString *name;
@property (nonatomic) LMGRedemptionStateType type;
@property (nonatomic) LMGRedemptionDisabilityReason disabilityReason;
@property (nonatomic) NSTimeInterval refreshInterval;
@property (nullable, nonatomic, copy) NSNumber *expiresIn;
@property (nullable, nonatomic, copy) NSNumber *unfrozenIn;

@property (nullable, nonatomic, copy) NSDate *expirationDate;
@property (nullable, nonatomic, copy) NSDate *unfrozenDate;
@property (nullable, nonatomic, copy) NSString *promoCode;
@property (nullable, nonatomic, copy) LMGOfferLimits *limits;
@property (nullable, nonatomic, copy) LMGSchedule *schedule;
@property (nullable, nonatomic, copy) NSArray<LMGRedemptionStateTransition *> *transitions;
@property (nullable, nonatomic, copy) LMGOfferStateMeta *meta;

- (nonnull instancetype)initWithName:(nonnull NSString *)name NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithRedemptionState:(nonnull LMGRedemptionState *)state;
- (nonnull LMGRedemptionState *)build;

@end

@interface NSError (LMGActionTargetError)

+ (nonnull instancetype)invalidActionTarget;

@end
