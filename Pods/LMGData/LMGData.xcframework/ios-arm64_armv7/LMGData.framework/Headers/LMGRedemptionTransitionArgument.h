//
//  LMGRedemptionTransitionArgument.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGRedemptionArgumentType.h"
#import "LMGRedemptionArgumentGroup.h"
#import "LMGRedemptionArgumentPermissionRequired.h"
#import "LMGDeepCopying.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRedemptionTransitionArgument<ValueType: NSObject<NSCopying> *> : NSObject<NSCopying, LMGDeepCopying>

@property (nullable, nonatomic, copy, readonly) ValueType value;
@property (nonatomic, readonly, getter=isRequired) BOOL required;
@property (nonatomic, readonly) LMGRedemptionArgumentType type;
@property (nonatomic, readonly) LMGRedemptionArgumentPermissionRequired requiredPermission;
@property (nonatomic, readonly) LMGRedemptionArgumentGroup group;

- (instancetype)initWithType:(LMGRedemptionArgumentType)argumentType
                    required:(BOOL)isRequired NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)argWithValue:(ValueType)value;

@end

NS_ASSUME_NONNULL_END
