//
//  LMGDABusinessStoreRemote.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDABusinessStore.h"

@protocol LMGDABusinessRemoteSource <NSObject>

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

@interface LMGDABusinessRemoteStore : NSObject <LMGDABusinessStore>

- (nonnull instancetype)initWith:(nonnull id<LMGDABusinessRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
