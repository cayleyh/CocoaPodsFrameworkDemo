//
//  LMGNotification.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>

@class LMGSession;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGNotification <NSObject>

+ (NSNotificationName)name;
- (NSNotificationName)name;

@end

@protocol LMGSessionNotification <LMGNotification>

@property (nullable, nonatomic, copy, readonly) LMGSession *session;

@end

NS_ASSUME_NONNULL_END
