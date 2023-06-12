//
//  LMGMixedContentSection.h
//  LMGUI
//
//  Created by Esteban Vallejo - GITL on 04/08/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LMGData/NSArray+DeepCopy.h>
#import <LMGData/LMGOffer.h>
#import <LMGData/LMGBusiness.h>
#import <LMGData/LMGCollection.h>
#import <LMGData/LMGConfig.h>
#import "LMGMixedContentSectionRenderer.h"
#import "LMGMixedContentSectionRendererType.h"
#import "LMGMixedContentSectionConfig.h"

@class LMGMixedContentSectionData;
@class LMGMixedContentSectionHeader;
@class LMGMixedContentSection;

@protocol LMGMixedContentSectionDelegate;
@protocol LMGMixedContentSectionDataDelegate;
@protocol LMGMixedContentSectionRenderer;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGMixedContentSectionHandler <NSObject>

@optional
- (void)mixedContentSection:(LMGMixedContentSection *)section didSelectOffer:(LMGOffer *)offer;
- (void)mixedContentSection:(LMGMixedContentSection *)section didSelectBusiness:(LMGBusiness *)business;
- (void)mixedContentSection:(LMGMixedContentSection *)section didSelectCollection:(LMGCollection *)collection;

@end

@interface LMGMixedContentSection : NSObject <LMGDeepCopying>

@property (nonatomic, readonly) LMGMixedContentSectionData *data;
@property (nonatomic, nullable, readonly) LMGMixedContentSectionHeader *header;
@property (nonatomic) id<LMGMixedContentSectionRenderer> renderer;
@property (nonatomic, weak) id<LMGMixedContentSectionDataDelegate> dataDelegate;
@property (nonatomic, weak) id<LMGMixedContentSectionDelegate> uiDelegate;
@property (nonatomic, readonly) LMGMixedContentSectionGlobalEmptyBehaviour globalEmptyBehaviour;
@property (nonatomic, weak) id<LMGMixedContentSectionHandler> handler;

- (instancetype)initWithData:(LMGMixedContentSectionData *)data
                    renderer:(id<LMGMixedContentSectionRenderer>)renderer
                      header:(nullable LMGMixedContentSectionHeader *)header
               sectionConfig:(nullable LMGMixedContentSectionConfig *)sectionConfig NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithData:(LMGMixedContentSectionData *)data
                rendererType:(LMGMixedContentSectionRendererType)rendererType
                      header:(nullable LMGMixedContentSectionHeader *)header
               sectionConfig:(nullable LMGMixedContentSectionConfig *)sectionConfig
                clientConfig:(nullable LMGConfig *)clientConfig;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (BOOL)hasNextPage;
- (void)loadNextPage;
- (BOOL)isEmpty;
- (NSUInteger)tableItemsCount;

- (NSDictionary<NSString *, Class> *)cellsClassesForReuseIdentifiers;
- (nullable id)objectForHeader;

@end

NS_ASSUME_NONNULL_END
