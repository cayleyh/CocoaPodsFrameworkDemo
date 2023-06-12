//
//  LMGRDLocationRemoteSource.h
//  LMGData
//
//  Created by Saurabh Gupta on 23/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDALocationRemoteStore.h"
#import "LMGRDGraphQLClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDLocationRemoteSource : NSObject<LMGDALocationRemoteSource>

+ (instancetype)defaultImplementation;
- (instancetype)initWithClient:(LMGRDGraphQLClient *)client NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (nullable LMGPagedResult<LMGLocation *> *)getWithMapParams:(LMGLocationsMapRequestParams *)params
                                                     session:(LMGSession *)session
                                                      expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGLocation *)getWithDetailsParams:(LMGDetailsRequestParams *)params
                                       session:(LMGSession *)session
                                        expect:(NSError *__autoreleasing  _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
