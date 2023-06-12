//
//  LMGLocationsRepository.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

#import <Foundation/Foundation.h>
#import "LMGPagedResult.h"

@class LMGSession;
@class LMGDetailsRequestParams;
@class LMGLocation;
@class LMGLocationsMapRequestParams;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGLocationsRepository <NSObject>

- (nullable LMGPagedResult<LMGLocation *> *)getWithMapParams:(LMGLocationsMapRequestParams *)params
                                                     session:(LMGSession *)session
                                                      expect:(NSError * _Nullable * _Nullable)error;

- (nullable LMGLocation *)getWithDetailParams:(LMGDetailsRequestParams *)params
                                      session:(LMGSession *)session
                                       expect:(NSError * _Nullable * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
