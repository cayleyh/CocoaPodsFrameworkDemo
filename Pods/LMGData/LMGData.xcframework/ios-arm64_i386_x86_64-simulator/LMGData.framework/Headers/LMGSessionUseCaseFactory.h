//
//  LMGSessionUseCaseFactory.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-14.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGNotificationCenter.h"
#import "LMGSessionRepository.h"
#import "LMGSearchTermsRepository.h"

@class LMGStartSession;
@class LMGGetSession;
@class LMGUpdateSessionUser;
@class LMGResetSession;
@class LMGRenewSession;
@class LMGRenewOrStartSession;
@class LMGRestartSession;
@class LMGSessionManager;

NS_ASSUME_NONNULL_BEGIN

@interface LMGSessionUseCaseFactory : NSObject

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                            sessionManager:(LMGSessionManager *)sessionManager
                     searchTermsRepository:(id<LMGSearchTermsRepository>)searchTermsRepository NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

- (LMGGetSession *)get;
- (LMGStartSession *)start;
- (LMGResetSession *)reset;
- (LMGRestartSession *)restart;
- (LMGRenewSession *)renew;
- (LMGRenewOrStartSession *)renewOrStart;
- (LMGUpdateSessionUser *)setUser;

@end

NS_ASSUME_NONNULL_END
