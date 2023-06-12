//
//  LMGSafeObservable.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-28.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LMGSafeObservable<ObserverType> : NSObject

- (void)add:(nonnull ObserverType)observer;
- (void)remove:(nonnull ObserverType)observer;
- (void)notify:(nonnull NSInvocation *)invocation;

@end
