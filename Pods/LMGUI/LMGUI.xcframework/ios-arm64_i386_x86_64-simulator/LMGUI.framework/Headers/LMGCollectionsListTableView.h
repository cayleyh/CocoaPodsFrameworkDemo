//
//  LMGCollectionsListTableView.h
//  LMGUI
//
//  Created by Saurabh Gupta on 10/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMGCollectionRefreshDelegate.h"
#import "LMGCollectionsListPresenter.h"

@class LMGCollectionsListTableViewDataSource;
@class LMGCollection;

NS_ASSUME_NONNULL_BEGIN

@interface LMGCollectionsListTableView : UITableView <UITableViewDelegate, LMGCollectionRefreshDelegate>

- (instancetype)initWithFrame:(CGRect)frame;
- (void)setCollectionListDataSource:(LMGCollectionsListTableViewDataSource *)dataSource;
- (void)showCollections:(NSArray<LMGCollection *> *)collections;
- (void)takePresenter:(LMGCollectionsListPresenter *)presenter;

- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;

@property (nullable, nonatomic) LMGCollectionsListTableViewDataSource *tableViewDataSource;
@property (nullable, nonatomic) LMGCollectionsListPresenter *presenter;

@end

NS_ASSUME_NONNULL_END
