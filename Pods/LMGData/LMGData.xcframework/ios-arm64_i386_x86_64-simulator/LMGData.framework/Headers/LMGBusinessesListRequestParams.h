//
//  LMGBusinessRequestParams.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-24.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGDataRequestParams.h"
#import "LMGDASaveableParams.h"

@class LMGBusinessesListRequestParamsBuilder;
@class LMGCoordinate;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LMGBusinessesListRequestParamsOfferStateType) {
    LMGBusinessesListRequestParamsOfferStateTypeInProgress,
    LMGBusinessesListRequestParamsOfferStateTypeEarned,
    LMGBusinessesListRequestParamsOfferStateTypeNone
};

typedef void (^LMGBusinessesListRequestParamsBuildBlock)(LMGBusinessesListRequestParamsBuilder  *builder);

@interface LMGBusinessesListRequestParams : NSObject <NSCopying, LMGDataListRequestParams, LMGDASaveableParams>

@property (nullable, nonatomic, copy, readonly) NSString *searchTerm;
@property (nonatomic, readonly, getter=areOffersBookmarked) BOOL bookmarkedOffers;
@property (nonatomic, readonly, getter=isContentAreaIgnored) BOOL ignoreContentArea;
@property (assign, readonly) LMGBusinessesListRequestParamsOfferStateType stateType;

- (instancetype)initWithBuilder:(LMGBusinessesListRequestParamsBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)paramsWith:(nullable LMGBusinessesListRequestParamsBuildBlock)block;
- (instancetype)copyWith:(LMGBusinessesListRequestParamsBuildBlock)block;

+ (instancetype)paramsForBookmarked;
+ (instancetype)paramsForSearchTerm:(NSString *)searchTerm;

- (BOOL)requiresIdentifiedSession;

@end

@interface LMGBusinessesListRequestParamsBuilder: NSObject

@property (nonatomic, nullable) NSString *searchTerm;
@property (nonatomic, nullable, copy) NSArray<LMGCoordinate *> *contentArea;
@property (nonatomic, nullable, copy) LMGCoordinate *sortCoordinate;
@property (nonatomic, nullable, copy) LMGCoordinate *originCoordinate;
@property (nonatomic, nullable) NSString *nextPage;
@property (nonatomic, getter=isContentAreaIgnored) BOOL ignoreContentArea;
@property (nonatomic, getter=shouldRefresh) BOOL refresh;
@property (nonatomic, getter=areOffersBookmarked) BOOL bookmarkedOffers;
@property (nonatomic, getter=shouldUseDeviceLocation) BOOL useDeviceLocation;
@property (nonatomic) LMGBusinessesListRequestParamsOfferStateType stateType;
@property (nonatomic, nullable) NSNumber *limit;

- (instancetype)initWith:(LMGBusinessesListRequestParams *)params;
- (LMGBusinessesListRequestParams *)build;

@end

NS_ASSUME_NONNULL_END
