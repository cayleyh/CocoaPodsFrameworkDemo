//
//  LMGCollectionView.h
//  LMGUI
//
//  Created by Róbert Grešo on 12/03/2019.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class LMGCollectionView;

@protocol LMGCollectionViewDelegate <NSObject>

- (void)collectionView:(LMGCollectionView *)view tableViewDidFinishReloading:(UITableView *)tableView;

@end


@interface LMGCollectionView : UIView

@property (nullable, nonatomic, weak) id<LMGCollectionViewDelegate> delegate;

- (void)setupWithCollectionId:(NSString *)collectionId;

@end

NS_ASSUME_NONNULL_END
