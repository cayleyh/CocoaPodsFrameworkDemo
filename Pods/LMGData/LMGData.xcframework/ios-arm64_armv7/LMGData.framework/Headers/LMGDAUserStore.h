//
//  LMGDAUserStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-12.
//

#import <Foundation/Foundation.h>
#import "LMGSession.h"
#import "LMGUser.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDAUserStore <NSObject>

- (LMGUser *)getFor:(LMGSession *)session
                expectError:(NSError * _Nullable * _Nullable)error;


- (nullable LMGSession *)save:(LMGUser *)user
          forSession:(LMGSession *)session
         expectError:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
