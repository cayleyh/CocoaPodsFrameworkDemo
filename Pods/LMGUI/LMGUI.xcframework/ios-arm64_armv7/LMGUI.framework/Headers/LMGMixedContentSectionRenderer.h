//
//  LMGMixedContentSectionRenderer.h
//  LMGUI
//
//  Created by Steve-GITL on 04/09/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LMGMixedContentSectionRendererConfig;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGMixedContentSectionRenderer <NSObject>

@property (nonatomic, nullable) NSNumber *maxTableItemsCount;
@property (nonatomic, nullable) NSNumber *dataPageSize;
@property (nonatomic, nullable) LMGMixedContentSectionRendererConfig *config;

- (NSDictionary<NSString *, Class> *)cellsClassesForReuseIdentifiers;
- (NSString *)cellIdentifierForRow:(NSInteger)row;
- (void)configureCell:(UITableViewCell *)cell withObject:(id)object atRow:(NSInteger)row;
- (NSUInteger)numberOfRowsForData:(NSArray *)data;
- (id)objectForCellAtRow:(NSInteger)row forData:(NSArray *)data;
- (NSUInteger)tableItemsCountForData:(NSArray *)data;

// Comparison helpers
- (BOOL)isObjectEquivalent:(id)object1 with:(id)object2;

@end

@protocol LMGMixedContentSectionRendererDelegate <NSObject>

- (void)mixedContentSectionRenderer:(id<LMGMixedContentSectionRenderer>)renderer didSelectObject:(id)object;

@end

NS_ASSUME_NONNULL_END
