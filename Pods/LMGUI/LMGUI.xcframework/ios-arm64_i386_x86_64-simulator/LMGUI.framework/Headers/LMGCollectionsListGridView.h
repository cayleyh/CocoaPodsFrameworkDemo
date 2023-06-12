//
//  LMGCollectionsListGridView.h
//  LMGUI
//
//  Created by Saurabh Gupta on 08/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMGCollectionRefreshDelegate.h"
#import "LMGCollectionsListPresenter.h"

NS_ASSUME_NONNULL_BEGIN

@class LMGCollectionsListGridViewDataSource;
@class LMGCollection;

@interface LMGCollectionsListGridView : UICollectionView <UICollectionViewDelegateFlowLayout, LMGCollectionRefreshDelegate>

- (instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout *)layout;
- (void)setCollectionListDataSource:(LMGCollectionsListGridViewDataSource *)dataSource;
- (void)showCollections:(NSArray<LMGCollection *> *)collections;
- (void)takePresenter:(LMGCollectionsListPresenter *)presenter;

- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;

@property (nullable, nonatomic) LMGCollectionsListGridViewDataSource *gridViewDataSource;
@property (nullable, nonatomic) LMGCollectionsListPresenter *presenter;

@end

NS_ASSUME_NONNULL_END
