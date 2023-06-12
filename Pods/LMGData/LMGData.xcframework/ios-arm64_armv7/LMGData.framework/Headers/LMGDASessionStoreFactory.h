//
//  LMGDASessionStoreFactory.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-07.
//

#import <Foundation/Foundation.h>

@protocol LMGDASessionStore;
@protocol LMGDASessionLocalSource;
@protocol LMGDASessionRemoteSource;

@interface LMGDASessionStoreFactory : NSObject

- (nonnull instancetype)initWithLocalSource:(nonnull id<LMGDASessionLocalSource>)localSource remoteSource:(nonnull id<LMGDASessionRemoteSource>)remoteSource NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull id<LMGDASessionStore>)localStore;
- (nonnull id<LMGDASessionStore>)remoteStore;

@end
