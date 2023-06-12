//
//  LMGLDBusinessLocalSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-12.
//

@import Foundation;
#import "LMGDABusinessLocalStore.h"
#import "NSNotificationCenter+LMGNotificationCenter.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGLDBusinessLocalSource : NSObject<LMGDABusinessLocalSource>

- (nonnull instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationBus NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
