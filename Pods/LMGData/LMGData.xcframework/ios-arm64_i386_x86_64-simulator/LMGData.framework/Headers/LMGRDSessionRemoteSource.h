//
//  LMGRDSessionRemoteSource.h
//  LMGData
//
//  Created by Saurabh Gupta on 23/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDASessionRemoteStore.h"
#import "LMGRDGraphQLClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDSessionRemoteSource : NSObject<LMGDASessionRemoteSource>

+ (instancetype)defaultImplementation;
- (instancetype)initWithClient:(LMGRDGraphQLClient *)client NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (nullable LMGSession *)startWith:(nonnull LMGIntegrationKey *)integrationKey expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGSession *)updateSession:(nonnull LMGSession *)session userId:(nonnull LMGUserId *)userId hmac:(nullable LMGUserHMAC *)hmac expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGSession *)refreshAuthOn:(nonnull LMGSession *)session expect:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
