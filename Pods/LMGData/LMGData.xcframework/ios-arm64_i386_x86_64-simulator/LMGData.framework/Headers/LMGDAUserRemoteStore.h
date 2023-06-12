//
//  LMGDAUserRemoteStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-12.
//

#import <Foundation/Foundation.h>
#import "LMGDAUserStore.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDAUserRemoteSource <NSObject>

- (nullable LMGUser *)getFor:(LMGSession *)session
                 expectError:(NSError * _Nullable * _Nullable)error;


- (nullable LMGSession *)save:(LMGUser *)user
          forSession:(LMGSession *)session
         expectError:(NSError * _Nullable * _Nullable)error;

@end


@interface LMGDAUserRemoteStore : NSObject<LMGDAUserStore>

- (instancetype)initWithSource:(id<LMGDAUserRemoteSource>)remoteSource NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
