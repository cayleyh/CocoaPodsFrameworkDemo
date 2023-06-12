//
//  LMGMixedContentSectionData.h
//  LMGUI
//
//  Created by Esteban Vallejo - GITL on 04/08/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LMGData/LMGPlatformId.h>
#import "LMGMixedContentSectionDataType.h"
#import <LMGData/LMGDeepCopying.h>

@class LMGDataProvider;
@class LMGClient;
@class LMGMixedContentSectionData;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGMixedContentSectionDataDelegate

- (void)mixedContentSectionData:(LMGMixedContentSectionData *)sectionData
         didFinishedLoadingData:(NSArray *)data;
- (void)mixedContentSectionData:(LMGMixedContentSectionData *)sectionData
               didFailWithError:(NSError *)error;

@end

@interface LMGMixedContentSectionData : NSObject <LMGDeepCopying>

@property (nonatomic, nullable, readonly) LMGPlatformId *objectId;
@property (nonatomic, readonly) LMGMixedContentSectionDataType dataType;
@property (nonatomic) NSArray *currentData;
@property (nonatomic, weak) id<LMGMixedContentSectionDataDelegate> delegate;

- (instancetype)initForCollectionId:(LMGPlatformId *)collectionId
                             client:(LMGClient *)client;

- (instancetype)initForCollectionsListWithTag:(nullable NSString *)tag
                                       client:(LMGClient *)client;

- (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (void)setLimit:(nullable NSNumber *)limit;

- (void)fetchWithReload:(BOOL)reload;
- (void)cancelRequests;
- (void)setLiveReloadingEnabled:(BOOL)liveReloadingEnabled;
- (BOOL)hasNextPage;
- (void)loadNextPage;
- (BOOL)isLoading;
- (void)reset;

@end

NS_ASSUME_NONNULL_END
