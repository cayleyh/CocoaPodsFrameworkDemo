//
//  LMGDALocationLocalStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGDALocationStore.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDALocationLocalSource <NSObject>

- (nullable LMGPagedResult<LMGLocation *> *)getWithMapParams:(LMGLocationsMapRequestParams *)params
                                                     session:(LMGSession *)session
                                                      expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGLocation *)getWithDetailsParams:(LMGDetailsRequestParams *)params
                                     inSession:(LMGSession *)session
                                        expect:(NSError * _Nullable * _Nullable)error;

- (void)save:(id)data
   forParams:(id<LMGDASaveableParams>)params;

- (BOOL)hasDataFor:(id<LMGDASaveableParams>)params;

- (void)reset;

@end

@interface LMGDALocationLocalStore : NSObject<LMGDALocationStore>

- (instancetype)initWithSource:(id<LMGDALocationLocalSource>)source NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
