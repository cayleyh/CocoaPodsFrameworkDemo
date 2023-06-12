//
//  LMGDACollectionRemoteStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-19.
//

#import <Foundation/Foundation.h>
#import "LMGDACollectionStore.h"

@protocol LMGDACollectionRemoteSource <NSObject>

- (nullable LMGPagedResult<LMGCollection *> *)getWithListParams:(nonnull LMGCollectionsListRequestParams *)params
                                                        session:(nonnull LMGSession *)session
                                                         expect:(NSError * _Nullable * _Nullable)error;


- (nullable LMGCollection *)getWithDetailParams:(nonnull LMGDetailsRequestParams *)params
                                        session:(nonnull LMGSession *)session
                                         expect:(NSError * _Nullable * _Nullable)error;


@end

@interface LMGDACollectionRemoteStore : NSObject<LMGDACollectionStore>

- (nonnull instancetype)initWithSource:(nonnull id<LMGDACollectionRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
