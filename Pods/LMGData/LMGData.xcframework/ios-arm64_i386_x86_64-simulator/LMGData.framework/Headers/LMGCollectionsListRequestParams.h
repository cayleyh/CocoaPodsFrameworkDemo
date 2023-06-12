//
//  LMGCollectionsListRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-10-04.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGDataRequestParams.h"
#import "LMGDASaveableParams.h"

@class LMGCollection;
@class LMGCollectionsListRequestParamsBuilder;

NS_ASSUME_NONNULL_BEGIN

typedef void (^CollectionsListRequestParamsBuildBlock)(LMGCollectionsListRequestParamsBuilder  *builder);

@interface LMGCollectionsListRequestParams : NSObject<NSCopying, LMGDataListRequestParams, LMGDASaveableListParams>

@property (nonatomic, nullable, copy, readonly) LMGPlatformId *categoryId;
@property (nonatomic, nullable, copy, readonly) NSString *tag;
@property (nonatomic, copy, readonly) NSTimeZone *timezone;

- (instancetype)initWith:(LMGCollectionsListRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)paramsWithBlock:(CollectionsListRequestParamsBuildBlock)block;
- (instancetype)copyWithBlock:(CollectionsListRequestParamsBuildBlock)block;

@end

@interface LMGCollectionsListRequestParamsBuilder : NSObject

@property (nonatomic, nullable, copy) LMGPlatformId *categoryId;
@property (nonatomic, nullable, copy) NSString *tag;
@property (nonatomic, nullable, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nonatomic, nullable, copy) LMGCoordinate *sortCoordinate;
@property (nonatomic, nullable, copy) LMGCoordinate *originCoordinate;
@property (nonatomic, nullable, copy) NSString *nextPage;
@property (nonatomic) BOOL refresh;
@property (nonatomic) BOOL useDeviceLocation;
@property (nonatomic, nullable) NSNumber *limit;
@property (nonatomic) NSTimeZone *timezone;

- (instancetype)initWith:(LMGCollectionsListRequestParams *)params;
- (LMGCollectionsListRequestParams *)build;

@end

NS_ASSUME_NONNULL_END
