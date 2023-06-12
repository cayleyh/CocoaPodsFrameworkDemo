//
//  LMGAnalyticsDispatcher.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-19.
//

#import <Foundation/Foundation.h>
#import "LMGNotificationCenter.h"
#import "LMGClientConfiguration.h"

@interface LMGAnalyticsDispatcher : NSObject

- (nonnull instancetype)initWithNotificationCenter:(nonnull id<LMGNotificationCenter>)notificationCenter  configuration:(nonnull LMGClientConfiguration *)configuration NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;


@end
