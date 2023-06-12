//
//  LMGCollectionsListPresenter.h
//  LMGUI
//
//  Created by Saurabh Gupta on 02/08/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGMulticastDelegate.h"

@class LMGCollectionsListTableView;
@class LMGCollectionsListGridView;
@class LMGCollection;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGCollectionsListDelegate <NSObject>

- (void)tappedCollection:(LMGCollection *)collection;
- (void)tappedMoreCollections:(NSArray<LMGCollection *> *)collections;

@end

@interface LMGCollectionsListPresenter : NSObject

@property (nullable, nonatomic, weak) id<LMGCollectionsListDelegate> delegate;
@property (nonatomic, strong) LMGMulticastDelegate *delegates;

- (instancetype)initWithEnabledBackgroundReloading:(BOOL)enableBackgroundReloading NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (void)takeCollectionsListGridView:(LMGCollectionsListGridView *)collectionsListGridView;
- (void)takeCollectionsListTableView:(LMGCollectionsListTableView *)collectionsListTableView;
- (void)selectCollection:(LMGCollection *)collection;
- (void)presentCollections:(NSArray <LMGCollection *>*)collections;
- (void)cancelRequests;
- (void)refreshData;
- (void)onViewDidAppear:(BOOL)animated;
- (void)onViewDidDisappear:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
