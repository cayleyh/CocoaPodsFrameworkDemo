//
//  LMGIdentifyUser.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-13.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSessionRequiredUseCase.h"
#import "LMGSessionRepository.h"

@class LMGIdentifyUserParams;
@class LMGUpdateSessionUser;
@class LMGSessionManager;

NS_ASSUME_NONNULL_BEGIN

@interface LMGIdentifyUser : LMGSessionRequiredUseCase<LMGIdentifyUserParams *, LMGUser *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                                getSession:(LMGGetSession *)getSession
                            restartSession:(LMGRestartSession *)restartSession
                              renewSession:(LMGRenewSession *)renewSession
                         updateSessionUser:(LMGUpdateSessionUser *)updateSessionUser
                            sessionManager:(LMGSessionManager *)sessionManager NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                                getSession:(LMGGetSession *)getSession
                            restartSession:(LMGRestartSession *)restartSession
                              renewSession:(LMGRenewSession *)renewSession NS_UNAVAILABLE;

@end

@interface LMGIdentifyUserParams: NSObject

@property (nonatomic, copy, readonly) LMGUserId *userId;
@property (nullable, nonatomic, copy, readonly) LMGUserTraits *traits;
@property (nullable, nonatomic, copy, readonly) LMGUserHMAC *hmac;

- (instancetype)initWith:(LMGUserId *)userId hmac:(nullable LMGUserHMAC *)hmac traits:(nullable LMGUserTraits *)traits;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
