//
//  LMGGetUser.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-14.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"

@class LMGSessionManager;
@class LMGUser;

@interface LMGGetUser : LMGSessionRequiredUseCase<NoParams *, LMGUser *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                                getSession:(LMGGetSession *)getSession
                            restartSession:(LMGRestartSession *)restartSession
                              renewSession:(LMGRenewSession *)renewSession
                            sessionManager:(LMGSessionManager *)sessionManager NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                                getSession:(LMGGetSession *)getSession
                            restartSession:(LMGRestartSession *)restartSession
                              renewSession:(LMGRenewSession *)renewSession NS_UNAVAILABLE;


@end
