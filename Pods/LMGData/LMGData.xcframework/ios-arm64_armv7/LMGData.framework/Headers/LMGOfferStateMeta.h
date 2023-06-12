//
//  LMGOfferStateMeta.h
//  LMGData
//
//  Created by Esteban Vallejo - GITL on 20/03/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGRedemptionStateType.h"
#import "LMGDeepCopying.h"

typedef NS_ENUM(NSUInteger, LMGOfferStateActionType) {
    LMGOfferStateActionTypeDefault,
    LMGOfferStateActionTypePhone,
    LMGOfferStateActionTypeUrl,
    LMGOfferStateActionTypeUnknown
};

@class LMGOfferStateMetaBuilder;

typedef void (^LMGOfferStateMetaBuildBlock)(LMGOfferStateMetaBuilder  * _Nonnull builder);

@interface LMGOfferStateMeta : NSObject<NSCopying, LMGDeepCopying>

/**
 * Available action in current state.
 */
@property (nonatomic, readonly) LMGOfferStateActionType actionType;

/**
 * Target for available action.
 */
@property (nullable, nonatomic, copy, readonly) NSString *actionTarget;

/**
 * Type of the offer state.
 */
@property (nonatomic, readonly) LMGRedemptionStateType stateType;

/**
 * Progress count for progress states.
 */
@property (nullable, nonatomic, copy, readonly) NSNumber *progressCurrent;

/**
 * Total count for progress states
 */
@property (nullable, nonatomic, copy, readonly) NSNumber *progressTotal;

- (nonnull instancetype)initWithBuilder:(nonnull LMGOfferStateMetaBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)copyWithBlock:(nonnull LMGOfferStateMetaBuildBlock)block;
+ (nonnull instancetype)offerStateMetaWith:(nullable LMGOfferStateMetaBuildBlock)block;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (BOOL)hasInvalidActionTarget;

@end

// MARK: - Builder
@interface LMGOfferStateMetaBuilder: NSObject

@property (nonatomic) LMGOfferStateActionType actionType;
@property (nullable, nonatomic, copy) NSString *actionTarget;
@property (nonatomic) LMGRedemptionStateType stateType;
@property (nullable, nonatomic, copy) NSNumber *progressCurrent;
@property (nullable, nonatomic, copy) NSNumber *progressTotal;

- (nonnull instancetype)initWith:(nonnull LMGOfferStateMeta *)offerStateMeta;

- (nonnull LMGOfferStateMeta *)build;

@end
