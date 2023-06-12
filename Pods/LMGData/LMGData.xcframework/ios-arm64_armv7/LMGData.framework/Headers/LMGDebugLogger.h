//
//  LMGDebugLogger.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-17.
//

#import <Foundation/Foundation.h>
#import "LMGNotificationCenter.h"
#import "LMGDebugLoggerLevel.h"

@interface LMGDebugLogger : NSObject

@property (nonatomic, setter=setLoggerLevel:) LMGDebugLoggerLevel loggerLevel;

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter
                                       loggerLevel:(LMGDebugLoggerLevel)loggerLevel NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
