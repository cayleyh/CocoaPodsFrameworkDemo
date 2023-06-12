//
//  LMGDASessionStore.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

#import <Foundation/Foundation.h>
#import "LMGSession.h"

/*!
 @protocol LMGDASessionStore
 @discussion Interface for Session Stores
 */
@protocol LMGDASessionStore <NSObject>

- (void)load;
- (nonnull LMGSession *)get;
- (nullable LMGSession *)startWith:(nonnull LMGIntegrationKey *)integrationKey expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGSession *)updateSession:(nonnull LMGSession *)session userId:(nonnull LMGUserId *)userId hmac:(nullable LMGUserHMAC *)hmac expect:(NSError * _Nullable * _Nullable)error;
- (nullable LMGSession *)refreshAuthOn:(nonnull LMGSession *)session expect:(NSError * _Nullable * _Nullable)error;
- (void)save:(nonnull LMGSession *)session;
- (void)reset;

@end
