//
//  LMGDataProvider.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-06-24.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGPagedResult.h"
#import "LMGDataRequestParams.h"
#import "LMGContentFilter.h"
#import "LMGSafeObservable.h"
#import "LMGUseCaseOperation.h"
#import "LMGCancellable.h"
#import "NSArray+Monads.h"
#import "LMGDeepCopying.h"

@protocol LMGDataProviderObserver;
@class LMGContentFilter;

NS_ASSUME_NONNULL_BEGIN

@interface LMGDataProvider<DataType, Params : id<LMGDataListRequestParams>> : NSObject <LMGDeepCopying>

- (instancetype)initWithQueue:(NSOperationQueue *)queue
                contentFilter:(LMGContentFilter *)contentFilter
              notificationBus:(id<LMGNotificationCenter>)notificationBus
                 factoryBlock:(LMGUseCaseOperation<Params, LMGPagedResult<DataType> *> *_Nonnull(^_Nonnull)(void))factoryBlock NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@property (nonatomic, assign, readonly) BOOL hasNextPage;
@property (nonatomic, assign, readonly) BOOL isLoading;

- (nullable Params)params;
- (void)setParams:(Params)params;

- (void)setLiveReloadingEnabled:(BOOL)liveReloadingEnabled;

- (NSArray<DataType> *)allObjects;
- (id<LMGCancellable>)fetchWithReload:(BOOL)shouldReload;
- (nullable id<LMGCancellable>)loadNextPage;
- (void)reset;

- (nullable DataType)objectAtIndex:(NSInteger)index;
- (NSInteger)numberOfObjects;

- (void)addObserver:(id<LMGDataProviderObserver>)observer;
- (void)removeObserver:(id<LMGDataProviderObserver>)observer;
- (void)notifyResult:(NSArray<DataType> *)result;
- (void)notifyError:(NSError *)error;

@end

extern NSString * const LMGDataProviderDomain;
extern NSInteger const LMGNoDataErrorCode;

@interface NSError (NoData)

+ (instancetype)noData;

@end

NS_ASSUME_NONNULL_END
