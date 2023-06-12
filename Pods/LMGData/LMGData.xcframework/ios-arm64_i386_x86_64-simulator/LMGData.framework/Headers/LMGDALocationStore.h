//
//  LMGDALocationStore.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-01.
//

#import <Foundation/Foundation.h>
#import "LMGLocation.h"
#import "LMGSession.h"
#import "LMGLocationsMapRequestParams.h"
#import "LMGDetailsRequestParams.h"
#import "LMGPagedResult.h"

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDALocationStore <NSObject>

- (nullable LMGPagedResult<LMGLocation *> *)getWithMapParams:(LMGLocationsMapRequestParams *)params
                                                     session:(LMGSession *)session
                                                      expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGLocation *)getWithDetailsParams:(LMGDetailsRequestParams *)params
                                       session:(LMGSession *)session
                                        expect:(NSError * _Nullable * _Nullable)error;

- (void)save:(id)data
   forParams:(id<LMGDASaveableParams>)params;

@end

NS_ASSUME_NONNULL_END
