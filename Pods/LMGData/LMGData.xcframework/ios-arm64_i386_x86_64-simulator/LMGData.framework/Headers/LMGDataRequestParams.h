//
//  LMGDataRequestParams.h
//  Apollo
//
//  Created by Myroslav Pomazan on 2018-09-18.
//

#import <Foundation/Foundation.h>

@class LMGCoordinate;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGDataRequestParams <NSObject>

@property (nonatomic, readonly, getter=shouldUseDeviceLocation) BOOL useDeviceLocation;
@property (nonatomic, readonly, getter=shouldRefresh) BOOL refresh;
@property (nonatomic, nullable,  copy, readonly) LMGCoordinate *sortCoordinate;
@property (nonatomic, nullable,  copy, readonly) LMGCoordinate *originCoordinate;
@property (nonatomic, nullable,  copy, readonly) NSArray<LMGCoordinate *> *contentArea;

- (instancetype)paramsWithOriginCoordinate:(LMGCoordinate *)coordinate;
- (instancetype)paramsWithSortCoordinate:(LMGCoordinate *)coordinate;
- (instancetype)forceReloadParams;

@end

@protocol LMGDataListRequestParams <LMGDataRequestParams>

@property (nonatomic, nullable, readonly) NSNumber *limit;
@property (nonatomic, nullable, copy, readonly) NSString *nextPage;

- (instancetype)paramsWithContentArea:(NSArray<LMGCoordinate *> *)contentArea;
- (instancetype)paramsForNextPage:(NSString *)nextPageCursor;
- (instancetype)paramsWithLimit:(nullable NSNumber *)limit;

@end

NS_ASSUME_NONNULL_END
