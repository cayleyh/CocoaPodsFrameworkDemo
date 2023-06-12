//
//  LMGOffersListRequestParams.h
//  LMGData
//
//  Created by Brian Giupponi on 21/01/2021.
//  Copyright © 2021 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGDataRequestParams.h"
#import "LMGDASaveableParams.h"

@class LMGCoordinate;
@class LMGOffersListRequestParamsBuilder;

NS_ASSUME_NONNULL_BEGIN

typedef void (^OffersListRequestParamsBuildBlock)(LMGOffersListRequestParamsBuilder  *builder);

@interface LMGOffersListRequestParams : NSObject<NSCopying, LMGDataRequestParams, LMGDASaveableParams>

- (instancetype)initWithBuilder:(LMGOffersListRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
+ (instancetype)paramsWithId:(LMGPlatformId *)entityId configuration:(nullable OffersListRequestParamsBuildBlock)block;
- (instancetype)paramsWithContentArea:(NSArray<LMGCoordinate *> *)contentArea;
- (instancetype)copyWithBlock:(OffersListRequestParamsBuildBlock)block;
- (instancetype)init NS_UNAVAILABLE;

@property (nonatomic, nullable, copy, readonly) LMGPlatformId *locationId;
@property (nonatomic, nullable, copy, readonly) NSNumber *limit;

@end


@interface LMGOffersListRequestParamsBuilder: NSObject

@property (nonatomic, nullable, copy) LMGPlatformId *locationId;
@property (nonatomic, nullable, copy) NSNumber *limit;
@property (nonatomic, nullable, copy) LMGCoordinate *sortCoordinate;
@property (nonatomic, nullable, copy) LMGCoordinate *originCoordinate;
@property (nonatomic, nullable, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nonatomic) BOOL useDeviceLocation;
@property (nonatomic) BOOL refresh;

- (instancetype)initWithLocationId:(LMGPlatformId *)locationId;
- (instancetype)initWithParams:(LMGOffersListRequestParams *)params;
- (instancetype)init NS_UNAVAILABLE;
- (LMGOffersListRequestParams *)build;

@end


NS_ASSUME_NONNULL_END
