//
//  LMGBusinessDetailsWireframe.h
//  LMGUI
//
//  Created by Myroslav Pomazan on 2018-09-26.
//

#import <Foundation/Foundation.h>

@import LMGData;
@import SafariServices;

NS_ASSUME_NONNULL_BEGIN

@interface LMGBusinessDetailsWireframe : NSObject

+ (UIViewController *)viewControllerForBusiness:(LMGBusiness *)business;
+ (UIViewController *)viewControllerForBusiness:(LMGBusiness *)business location:(nullable LMGLocation *)location DEPRECATED_MSG_ATTRIBUTE("Use viewControllerForBusiness: method instead.");

+ (UIViewController *)viewControllerForBusinessId:(LMGPlatformId *)businessId;
+ (UIViewController *)viewControllerForBusinessId:(LMGPlatformId *)businessId locationId:(nullable LMGPlatformId *)locationId DEPRECATED_MSG_ATTRIBUTE("Use viewControllerForBusinessId: method instead.");

@end

NS_ASSUME_NONNULL_END
