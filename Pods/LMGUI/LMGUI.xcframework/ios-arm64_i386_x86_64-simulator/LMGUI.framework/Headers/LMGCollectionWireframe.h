//
//  LMGCollectionRouter.h
//  Platform Client UI
//
//  Created by Myroslav Pomazan on 2018-08-28.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMGCollectionScreenProtocol.h"
@import LMGData;

NS_ASSUME_NONNULL_BEGIN

@interface LMGCollectionWireframe : NSObject

+ (UIViewController<LMGCollectionScreen> *)collectionViewControllerFor:(nullable LMGPlatformId *)collectionId enableBackgroundReloading:(BOOL)enableBackgroundReloading;
+ (UIViewController<LMGCollectionScreen> *)collectionViewControllerFor:(nullable LMGPlatformId *)collectionId;


+ (UIViewController<LMGCollectionScreen> *)collectionViewControllerFor:(nullable LMGPlatformId *)collectionId branding:(nullable LMGBranding *)branding enableBackgroundReloading:(BOOL)enableBackgroundReloading;
+ (UIViewController<LMGCollectionScreen> *)collectionViewControllerFor:(nullable LMGPlatformId *)collectionId branding:(nullable LMGBranding *)branding;

+ (UIViewController<LMGCollectionScreen> *)embeddedCollectionViewControllerFor:(nullable LMGPlatformId *)collectionId enableBackgroundReloading:(BOOL)enableBackgroundReloading;
+ (UIViewController<LMGCollectionScreen> *)embeddedCollectionViewControllerFor:(nullable LMGPlatformId *)collectionId;

/*!
New base collection view controller wireframe method

@returns LMGBaseCollectionViewController
*/
+ (UIViewController<LMGCollectionScreen> *)baseCollectionViewControllerFor:(nullable LMGPlatformId *)collectionId withHeaderView:(UIView *)headerView withFooterView:(UIView *)footerView enableBackgroundReloading:(BOOL)enableBackgroundReloading;
+ (UIViewController<LMGCollectionScreen> *)baseCollectionViewControllerFor:(nullable LMGPlatformId *)collectionId withHeaderView:(UIView *)headerView withFooterView:(UIView *)footerView;

@end

NS_ASSUME_NONNULL_END
