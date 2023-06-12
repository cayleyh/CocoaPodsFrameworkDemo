//
//  LMGLDCollectionLocalSource.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-20.
//

@import Foundation;
#import "LMGDACollectionLocalStore.h"
#import "NSNotificationCenter+LMGNotificationCenter.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGLDCollectionLocalSource : NSObject<LMGDACollectionLocalSource>

- (nonnull instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationBus NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
