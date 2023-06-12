//
//  LMGLocationsMapRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-30.
//

#import <Foundation/Foundation.h>
#import "LMGDataRequestParams.h"
#import "LMGDASaveableParams.h"

@class LMGLocationsMapRequestParamsBuilder;

NS_ASSUME_NONNULL_BEGIN

typedef void (^LocationsMapRequestParamsBuildBlock)(LMGLocationsMapRequestParamsBuilder  *builder);

@interface LMGLocationsMapRequestParams : NSObject<NSCopying, LMGDataListRequestParams, LMGDASaveableListParams>

- (instancetype)initWithBuilder:(LMGLocationsMapRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)paramsWith:(nullable LocationsMapRequestParamsBuildBlock)block;
- (instancetype)copyWith:(LocationsMapRequestParamsBuildBlock)block;

@end

@interface LMGLocationsMapRequestParamsBuilder: NSObject

@property (nonatomic, getter=shouldRefresh) BOOL refresh;
@property (nonatomic, getter=shouldUseDeviceLocation) BOOL useDeviceLocation;
@property (nonatomic, nullable, copy) LMGCoordinate *sortCoordinate;
@property (nonatomic, nullable, copy) LMGCoordinate *originCoordinate;
@property (nonatomic, nullable, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nonatomic, nullable, copy) NSString *nextPage;
@property (nonatomic, nullable) NSNumber *limit;

- (instancetype)initWith:(LMGLocationsMapRequestParams *)params;
- (LMGLocationsMapRequestParams *)build;

@end

NS_ASSUME_NONNULL_END
