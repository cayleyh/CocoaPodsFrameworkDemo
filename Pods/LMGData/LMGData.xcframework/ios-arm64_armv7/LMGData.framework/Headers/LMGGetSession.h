//
//  LMGGetSession.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"

@class LMGSession;
@class LMGSessionManager;

NS_ASSUME_NONNULL_BEGIN

@interface LMGGetSession : LMGBaseUseCase<NoParams *, LMGSession *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                            sessionManager:(LMGSessionManager *)sessionManager NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
