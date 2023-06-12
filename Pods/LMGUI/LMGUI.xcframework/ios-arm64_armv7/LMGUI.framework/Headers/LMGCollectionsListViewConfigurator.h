//
//  LMGCollectionsListViewConfigurator.h
//  LMGUI
//
//  Created by Saurabh Gupta on 19/07/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LMGCollectionsListView;
@protocol LMGCollectionsListItemPresentable;

@interface LMGCollectionsListViewConfigurator : NSObject

- (void)configureCollectionItem:(id<LMGCollectionsListView>)view with:(id<LMGCollectionsListItemPresentable>)presentable;

@end


