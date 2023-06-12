//
//  LMGDABusinessStore.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGBusiness.h"
#import "LMGSession.h"
#import "LMGBusinessesListRequestParams.h"
#import "LMGCollectionRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGDASaveableParams.h"
#import "LMGPagedResult.h"

@protocol LMGDABusinessStore <NSObject>

- (nullable LMGPagedResult<LMGBusiness *> *)getWithListParams:(nonnull LMGBusinessesListRequestParams *)params
                                                      session:(nonnull LMGSession *)session
                                                       expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGPagedResult<LMGBusiness *> *)getListWithBookmarkedOffersFor:(nonnull LMGBusinessesListRequestParams *)params
                                                                   session:(nonnull LMGSession *)session
                                                                    expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGPagedResult<LMGBusiness *> *)getWithCollectionParams:(nonnull LMGCollectionRequestParams *)params
                                                            session:(nonnull LMGSession *)session
                                                             expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGBusiness *)getWithDetailParams:(nonnull LMGDetailsRequestParams *)params
                                      session:(nonnull LMGSession *)session
                                       expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(nonnull LMGBusiness *)business
   forParams:(nonnull LMGDetailsRequestParams *)params;


- (void)save:(nonnull LMGPagedResult<LMGBusiness *> *)businesses
      params:(nonnull id<LMGDASaveableParams>)params;


- (void)saveBookmarked:(nonnull LMGPagedResult<LMGBusiness *> *)businesses
                params:(nonnull id<LMGDASaveableParams>)params;


- (void)reset;


@end

