//
//  LMGRDBusinessRemoteSource.h
//  LMGData
//
//  Created by Saurabh Gupta on 22/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGDABusinessRemoteStore.h"
#import "LMGRDGraphQLClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDBusinessRemoteSource : NSObject<LMGDABusinessRemoteSource>

+ (instancetype)defaultImplementation;
- (instancetype)initWithClient:(LMGRDGraphQLClient *)client NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (nullable LMGPagedResult<LMGBusiness *> *)getWith:(nonnull LMGBusinessesListRequestParams *)params
                                            session:(nonnull LMGSession *)session
                                             expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGPagedResult<LMGBusiness *> *)getForCollection:(nonnull LMGCollectionRequestParams *)params
                                                     session:(nonnull LMGSession *)session
                                                      expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGBusiness *)getWithParams:(nonnull LMGDetailsRequestParams *)params
                              inSession:(nonnull LMGSession *)session
                                 expect:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
