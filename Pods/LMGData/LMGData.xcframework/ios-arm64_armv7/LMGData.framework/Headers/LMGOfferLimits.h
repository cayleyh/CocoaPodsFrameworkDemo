//
//  LMGOfferLimits.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

#import <Foundation/Foundation.h>
#import "LMGDeepCopying.h"
#import "LMGOfferLimitWindow.h"

typedef struct
{
   NSUInteger used;
   NSUInteger total;
   NSUInteger priority;
} LMGLimitDescription;

bool LMGLimitDescEqualToLMGLimitDesc(LMGLimitDescription desc1, LMGLimitDescription desc2);
NSUInteger LMGLimitDescHash(LMGLimitDescription desc);

extern const LMGLimitDescription LMGLimitDescriptionZero;

@interface LMGOfferLimits : NSObject<NSCopying, LMGDeepCopying>

@property (nonatomic, readonly) BOOL isLimited;
@property (nonatomic, assign, readonly) LMGLimitDescription perProfile;
@property (nonatomic, assign, readonly) LMGLimitDescription perProfilePerWindow;
@property (nonatomic, assign, readonly) LMGLimitDescription global;
@property (nonatomic, assign, readonly) LMGLimitDescription globalPerWindow;

@property (nonatomic, readonly) LMGOfferLimitWindow profileWindow;
@property (nonatomic, readonly) LMGOfferLimitWindow globalWindow;

- (nonnull instancetype)initWithPerProfile:(LMGLimitDescription)perProfileLimits perProfilePerWindow:(LMGLimitDescription)perProfilePerWindowLimits global:(LMGLimitDescription)globalLimits globalPerWindow:(LMGLimitDescription)globalPerWindowLimits profileWindow:(nullable NSString *)profileWindow globalWindow:(nullable NSString *)globalWindow NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
