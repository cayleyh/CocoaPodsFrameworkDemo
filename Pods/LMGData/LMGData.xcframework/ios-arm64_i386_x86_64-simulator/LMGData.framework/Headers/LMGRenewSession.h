//
//  LMGRenewSession.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-13.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"

extern NSInteger const LMGSessionRenewalFailed;

@class LMGSession;
@class LMGGetSession;
@class LMGResetSession;
@class LMGSessionManager;

NS_ASSUME_NONNULL_BEGIN

@interface LMGRenewSession : LMGBaseUseCase<NoParams *, LMGSession *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                                getSession:(LMGGetSession *)getSession
                            sessionManager:(LMGSessionManager *)sessionManager NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end

@interface NSError (LMGRenewSession)

+ (NSError *)renewSessionFailureUnderlyingError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
