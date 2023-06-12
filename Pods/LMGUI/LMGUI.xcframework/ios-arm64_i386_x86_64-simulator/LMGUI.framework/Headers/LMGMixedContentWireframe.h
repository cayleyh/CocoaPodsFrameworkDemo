//
//  LMGMixedContentWireframe.h
//  LMGUI
//
//  Created by Steve-GITL on 05/08/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LMGMixedContentSection;
@class LMGMixedContentConfig;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGMixedContentProtocol

- (void)setSections:(NSArray<LMGMixedContentSection *> *)sections;

@end

@interface LMGMixedContentWireframe : NSObject

+ (UIViewController<LMGMixedContentProtocol> *)viewController;

+ (UIViewController<LMGMixedContentProtocol> *)viewControllerWithConfig:(nullable LMGMixedContentConfig *)config;

+ (UIViewController<LMGMixedContentProtocol> *)viewControllerWithConfig:(nullable LMGMixedContentConfig *)config
                                                               sections:(nullable NSArray<LMGMixedContentSection *> *)sections;

+ (UIViewController<LMGMixedContentProtocol> *)viewControllerWithConfig:(nullable LMGMixedContentConfig *)config
                                                               sections:(nullable NSArray<LMGMixedContentSection *> *)sections
                                              enableBackgroundReloading:(BOOL)enableBackgroundReloading;

@end

NS_ASSUME_NONNULL_END
