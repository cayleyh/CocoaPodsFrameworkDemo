//
//  LMGOfferDetailsWireframe.h
//  Platform Client UI
//
//  Created by Myroslav Pomazan on 2018-07-03.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@import LMGData;

NS_ASSUME_NONNULL_BEGIN

@interface LMGOfferDetailsWireframe : NSObject

+ (UIViewController *)viewControllerForOfferId:(LMGPlatformId *)offerId locationId:(nullable LMGPlatformId *)locationId;
+ (UIViewController *)viewControllerForOffer:(LMGOffer *)offer location:(nullable LMGLocation *)location;
+ (UIViewController *)viewControllerForOffer:(LMGOffer *)offer;

@end

NS_ASSUME_NONNULL_END
