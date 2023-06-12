//
//  LMGNotificationCenter.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-18.
//

#import <Foundation/Foundation.h>
#import "LMGNotification.h"


@protocol LMGNotificationCenter <NSObject>

- (void)postLMGNotification:(nonnull id<LMGNotification>)notification;
- (void)removeObserver:(nonnull id<NSObject>)listener;
- (void)addObserver:(id)observer selector:(SEL)aSelector name:(NSNotificationName)aName object:(id)anObject;

// LMGNotification helper
- (id<LMGNotification>_Nullable)makeLMGNotificationFrom:(nonnull NSNotification *)note;

// @deprecated
- (nonnull id<NSObject>)addObserverForLMGName:(nullable NSNotificationName)name usingBlock:(void (^_Nonnull)(id<LMGNotification> _Nonnull note))block DEPRECATED_MSG_ATTRIBUTE("Use addObserver:selector:name:object instead");

@end
