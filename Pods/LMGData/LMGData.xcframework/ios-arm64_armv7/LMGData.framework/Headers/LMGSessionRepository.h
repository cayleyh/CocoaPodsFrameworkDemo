//
//  SessionRepository.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-12.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSession.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGSessionRepository <NSObject>

- (LMGSession *)getSession;

- (nullable LMGSession *)startSessionWith:(LMGIntegrationKey *)integrationKey
                                   expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGSession *)updateSession:(LMGSession *)session
                                userId:(LMGUserId *)userId
                                  hmac:(nullable LMGUserHMAC *)hmac
                                expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGSession *)refreshAuthOn:(LMGSession *)session
                                expect:(NSError * _Nullable * _Nullable)error;

- (void)saveSessionToLocalStore:(LMGSession *)session;

- (void)resetSession;

- (void)loadSession;

- (LMGUser *)getUserFor:(LMGSession *)session
                 expect:(NSError * _Nullable * _Nullable)error;

- (LMGSession *)saveUser:(LMGUser *)user
              forSession:(LMGSession *)session
             expectError:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
