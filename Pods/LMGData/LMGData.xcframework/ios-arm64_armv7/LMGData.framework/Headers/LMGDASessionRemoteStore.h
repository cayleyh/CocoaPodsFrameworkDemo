//
//  LMGDASessionRemoteStore.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

#import <Foundation/Foundation.h>
#import "LMGDASessionStore.h"

@protocol LMGDASessionRemoteSource <NSObject>

- (nullable LMGSession *)startWith:(nonnull LMGIntegrationKey *)integrationKey expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGSession *)updateSession:(nonnull LMGSession *)session userId:(nonnull LMGUserId *)userId hmac:(nullable LMGUserHMAC *)hmac expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGSession *)refreshAuthOn:(nonnull LMGSession *)session expect:(NSError * _Nullable * _Nullable)error;

@end

@interface LMGDASessionRemoteStore : NSObject<LMGDASessionStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDASessionRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
