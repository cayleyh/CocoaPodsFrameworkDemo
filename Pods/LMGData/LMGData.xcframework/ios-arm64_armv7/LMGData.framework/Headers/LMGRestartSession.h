//
//  LMGRestartSession.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-10.
//

#import <Foundation/Foundation.h>
#import "LMGBaseUseCase.h"

@class LMGSession;
@class LMGStartSession;
@class LMGUpdateSessionUser;

NS_ASSUME_NONNULL_BEGIN

@interface LMGRestartSession : LMGBaseUseCase<LMGSession *, LMGSession *>

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter> )notificationCenter
                              startSession:(LMGStartSession *)startSession
                         updateSessionUser:(LMGUpdateSessionUser *)updateSessionUser NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithNotificationCenter:(id<LMGNotificationCenter> )notificationCenter NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
