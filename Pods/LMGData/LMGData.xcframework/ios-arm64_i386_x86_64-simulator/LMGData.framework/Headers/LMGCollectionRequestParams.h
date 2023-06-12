//
//  LMGCollectionRequestParams.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-09-17.
//

#import <Foundation/Foundation.h>
#import "LMGPlatformId.h"
#import "LMGDataRequestParams.h"
#import "LMGDASaveableParams.h"

@class LMGCollection;
@class LMGCollectionRequestParamsBuilder;

NS_ASSUME_NONNULL_BEGIN

typedef void (^CollectionRequestParamsBuildBlock)(LMGCollectionRequestParamsBuilder  *builder);

@interface LMGCollectionRequestParams : NSObject<NSCopying, LMGDataListRequestParams, LMGDASaveableListParams>

@property (nonatomic, copy, readonly) LMGPlatformId *collectionId;
@property (nonatomic, nullable, copy, readonly) LMGPlatformId *categoryId;
@property (nonatomic, nullable, copy, readonly) NSString *tag;

- (instancetype)initWith:(LMGCollectionRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)paramsForCollection:(LMGCollection *)collection configure:(nullable CollectionRequestParamsBuildBlock)block;
- (instancetype)copyWithBlock:(CollectionRequestParamsBuildBlock)block;

@end

@interface LMGCollectionRequestParamsBuilder : NSObject

@property (nonatomic, copy, readonly) LMGPlatformId *collectionId;
@property (nonatomic, nullable, copy) LMGPlatformId *categoryId;
@property (nonatomic, nullable, copy) NSString *tag;
@property (nonatomic, nullable, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nonatomic, nullable, copy) LMGCoordinate *sortCoordinate;
@property (nonatomic, nullable, copy) LMGCoordinate *originCoordinate;
@property (nonatomic, nullable, copy) NSString *nextPage;
@property (nonatomic) BOOL refresh;
@property (nonatomic) BOOL useDeviceLocation;
@property (nonatomic, nullable) NSNumber *limit;

- (instancetype)initWithCollection:(LMGPlatformId *)collectionId NS_DESIGNATED_INITIALIZER;
- (instancetype)initWith:(LMGCollectionRequestParams *)params;
- (instancetype)init NS_UNAVAILABLE;
- (LMGCollectionRequestParams *)build;

@end

NS_ASSUME_NONNULL_END
