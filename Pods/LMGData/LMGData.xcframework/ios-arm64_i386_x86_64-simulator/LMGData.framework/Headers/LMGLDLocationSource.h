//
//  LMGLDLocationSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

@import Foundation;
#import "LMGDALocationLocalStore.h"
#import "NSNotificationCenter+LMGNotificationCenter.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGLDLocationSource : NSObject<LMGDALocationLocalSource>

- (nonnull instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationBus NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
