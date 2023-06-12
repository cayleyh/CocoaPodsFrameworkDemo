//
//  LMGDALocationRemoteStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGDALocationStore.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDALocationRemoteSource <NSObject>


- (nullable LMGPagedResult<LMGLocation *> *)getWithMapParams:(LMGLocationsMapRequestParams *)params
                                                     session:(LMGSession *)session
                                                      expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGLocation *)getWithDetailsParams:(LMGDetailsRequestParams *)params
                                       session:(LMGSession *)session
                                        expect:(NSError * _Nullable * _Nullable)error;

@end

@interface LMGDALocationRemoteStore : NSObject<LMGDALocationStore>

- (instancetype)initWithSource:(id<LMGDALocationRemoteSource>)source NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
