//
//  LMGCollectionsListWireframe.h
//  LMGUI
//
//  Created by Saurabh Gupta on 01/08/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMGCollectionsListWireframe : NSObject

+ (UICollectionView *)collectionListGridView;
+ (UICollectionView *)collectionListGridViewWithEnabledBackgroundReloading:(BOOL)enableBackgroundReloading;

+ (UITableView *)collectionListTableView;
+ (UITableView *)collectionListTableViewWithEnabledBackgroundReloading:(BOOL)enableBackgroundReloading;

@end

NS_ASSUME_NONNULL_END
