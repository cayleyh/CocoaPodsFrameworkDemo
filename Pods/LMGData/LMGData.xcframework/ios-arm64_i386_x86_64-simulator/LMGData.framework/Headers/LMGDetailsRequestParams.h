//
//  LMGOfferRequestParams.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-10.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGDataRequestParams.h"
#import "LMGDASaveableParams.h"

@class LMGCoordinate;
@class LMGDetailsRequestParamsBuilder;

NS_ASSUME_NONNULL_BEGIN

typedef void (^DetailsRequestParamsBuildBlock)(LMGDetailsRequestParamsBuilder  *builder);

@interface LMGDetailsRequestParams : NSObject<NSCopying, LMGDataRequestParams, LMGDASaveableParams>

- (instancetype)initWithBuilder:(LMGDetailsRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
+ (instancetype)paramsWithId:(LMGPlatformId *)entityId configuration:(nullable DetailsRequestParamsBuildBlock)block;
- (instancetype)paramsWithContentArea:(NSArray<LMGCoordinate *> *)contentArea;
- (instancetype)copyWithBlock:(DetailsRequestParamsBuildBlock)block;
- (instancetype)init NS_UNAVAILABLE;

@property (nonatomic, copy, readonly) LMGPlatformId *entityId;
@property (nonatomic, nullable, copy, readonly) LMGPlatformId *locationId;
@property (nonatomic, nullable, copy, readonly) NSNumber *limit;

@end

@interface LMGDetailsRequestParamsBuilder: NSObject

@property (nonatomic, copy, readonly) LMGPlatformId *entityId;
@property (nonatomic, nullable, copy) LMGPlatformId *locationId;
@property (nonatomic, nullable, copy) NSNumber *limit;
@property (nonatomic, nullable, copy) LMGCoordinate *sortCoordinate;
@property (nonatomic, nullable, copy) LMGCoordinate *originCoordinate;
@property (nonatomic, nullable, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nonatomic) BOOL useDeviceLocation;
@property (nonatomic) BOOL refresh;

- (instancetype)initWithId:(LMGPlatformId *)entityId NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithParams:(LMGDetailsRequestParams *)params;
- (instancetype)init NS_UNAVAILABLE;
- (LMGDetailsRequestParams *)build;

@end

NS_ASSUME_NONNULL_END
