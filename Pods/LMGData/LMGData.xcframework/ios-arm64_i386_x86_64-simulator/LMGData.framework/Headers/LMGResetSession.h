//
//  LMGReset.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"
#import "LMGSearchTermsRepository.h"

@class LMGSession;
@class LMGGetSession;
@class LMGStartSession;
@class LMGSessionManager;

NS_ASSUME_NONNULL_BEGIN

@interface LMGResetSession : LMGBaseUseCase<NoParams *, LMGSession *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter
                                getSession:(LMGGetSession *)getSession
                              startSession:(LMGStartSession *)startSession
                            sessionManager:(LMGSessionManager *)sessionManager
                    searchTermsRespository:(id<LMGSearchTermsRepository>)searchTermsRepository NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter>)notificationCenter NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
