//
//  LMGRDUserSource.h
//  LMGData
//
//  Created by Saurabh Gupta on 23/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDAUserRemoteStore.h"
#import "LMGRDGraphQLClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDUserSource : NSObject<LMGDAUserRemoteSource>

+ (instancetype)defaultImplementation;
- (instancetype)initWithClient:(LMGRDGraphQLClient *)client NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (nullable LMGUser *)getFor:(nonnull LMGSession *)session expectError:(NSError * _Nullable * _Nullable)error;

- (LMGSession *)save:(nonnull LMGUser *)user forSession:(nonnull LMGSession *)session expectError:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
