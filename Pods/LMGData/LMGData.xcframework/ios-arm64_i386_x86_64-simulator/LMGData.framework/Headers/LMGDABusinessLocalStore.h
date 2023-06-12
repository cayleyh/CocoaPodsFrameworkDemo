//
//  LMGDABusinessStoreLocal.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGDABusinessStore.h"

@protocol LMGDABusinessLocalSource


- (nullable LMGPagedResult<LMGBusiness *> *)getListWith:(nonnull id<LMGDASaveableParams>)params
                                                 expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGPagedResult<LMGBusiness *> *)getListWithBookmarkedOffersFor:(nonnull id<LMGDASaveableParams>)params
                                                                    expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGBusiness *)getWith:(nonnull LMGDetailsRequestParams *)params
                           expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(nonnull LMGBusiness *)business
   forParams:(nonnull LMGDetailsRequestParams *)params;


- (void)saveList:(nonnull LMGPagedResult<LMGBusiness *> *)list
          params:(nonnull id<LMGDASaveableParams>)params;


- (void)saveBookmarkedList:(nonnull LMGPagedResult<LMGBusiness *> *)list
                    params:(nonnull id<LMGDASaveableParams>)params;


- (BOOL)hasBusinessForParams:(nonnull LMGDetailsRequestParams *)params;


- (BOOL)hasListForParams:(nonnull id<LMGDASaveableParams>)params;


- (void)reset;


@end

@interface LMGDABusinessLocalStore : NSObject <LMGDABusinessStore>

- (nonnull instancetype)initWith:(nonnull id<LMGDABusinessLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
