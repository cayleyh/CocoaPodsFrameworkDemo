//
//  LMGUpdateSessionProfile.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"

@class LMGStartSession;
@class LMGResetSession;
@class LMGIdentifyUserParams;
@class LMGSessionManager;
@class LMGSession;

extern NSInteger const LMGUpdateSessionUserFailed;

NS_ASSUME_NONNULL_BEGIN

@interface LMGUpdateSessionUser : LMGBaseUseCase<LMGIdentifyUserParams *, LMGSession *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                                getSession:(LMGGetSession *)getSession
                              resetSession:(LMGResetSession *)resetSession
                            sessionManager:(LMGSessionManager *)sessionManager NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end

@interface NSError (LMGUpdateSessionUser)

+ (NSError *)failedToUpdateSessionUserUnderlyingError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
