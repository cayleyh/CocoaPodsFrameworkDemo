//
//  LMGDACollectionStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import <Foundation/Foundation.h>
#import "LMGCollection.h"
#import "LMGCollectionsListRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGSession.h"
#import "LMGDASaveableParams.h"
#import "LMGPagedResult.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDACollectionStore <NSObject>

- (nullable LMGPagedResult<LMGCollection *> *)getWithListParams:(LMGCollectionsListRequestParams *)params
                                                        session:(LMGSession *)session
                                                         expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGCollection *)getWithDetailParams:(LMGDetailsRequestParams *)params
                                        session:(LMGSession *)session
                                         expect:(NSError * _Nullable * _Nullable)error;


- (void)save:(LMGCollection *)collection forParams:(LMGDetailsRequestParams *)params;


- (void)save:(LMGPagedResult<LMGCollection *> *)collections
      params:(id<LMGDASaveableParams>)params;


- (void)reset;

@end

NS_ASSUME_NONNULL_END
