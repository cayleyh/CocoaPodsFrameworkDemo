//
//  LMGStartSession.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGBaseUseCase.h"
#import "LMGSession.h"

@class LMGSessionManager;

extern NSString * _Nonnull const LMGStartSessionDomain;
extern NSInteger const LMGStartSessionFailed;

NS_ASSUME_NONNULL_BEGIN

@interface LMGStartSession: LMGBaseUseCase<LMGIntegrationKey *, LMGSession *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                            sessionManager:(LMGSessionManager *)sessionManager NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end

@interface NSError (LMGStartSessionError)

+ (instancetype)startSessionFailureUnderlyingError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
