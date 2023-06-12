//
//  LMGDACollectionLocalStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import <Foundation/Foundation.h>
#import "LMGDACollectionStore.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDACollectionLocalSource <NSObject>

- (nullable LMGPagedResult<LMGCollection *> *)getWithListParams:(LMGCollectionsListRequestParams *)params
                                                          session:(LMGSession *)session
                                                           expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGCollection *)getWithDetailParams:(LMGDetailsRequestParams *)params
                                        session:(LMGSession *)session
                                         expect:(NSError * _Nullable * _Nullable)error;


- (BOOL)hasCollectionForParams:(LMGDetailsRequestParams *)params;


- (BOOL)hasListForParams:(id<LMGDASaveableParams>)params;


- (void)save:(LMGCollection *)collection forParams:(LMGDetailsRequestParams *)params;


- (void)saveList:(LMGPagedResult<LMGCollection *> *)collections
          params:(id<LMGDASaveableParams>)params;


- (void)reset;


@end

@interface LMGDACollectionLocalStore : NSObject<LMGDACollectionStore>

- (instancetype)initWithSource:(id<LMGDACollectionLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
