//
//  LMGRDCollectionRemoteSource.h
//  LMGData
//
//  Created by Saurabh Gupta on 22/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDACollectionRemoteStore.h"
#import "LMGRDGraphQLClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDCollectionRemoteSource : NSObject<LMGDACollectionRemoteSource>

+ (instancetype)defaultImplementation;
- (instancetype)initWithClient:(LMGRDGraphQLClient *)client NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (nullable LMGPagedResult<LMGCollection *> *)getWithListParams:(nonnull LMGCollectionsListRequestParams *)params
                                                          session:(nonnull LMGSession *)session
                                                           expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGCollection *)getWithDetailParams:(nonnull LMGDetailsRequestParams *)params
                                        session:(nonnull LMGSession *)session
                                         expect:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
