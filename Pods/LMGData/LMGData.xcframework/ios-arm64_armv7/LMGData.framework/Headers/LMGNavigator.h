//
//  LMGNavigator.h
//  LMGData
//
//  Created by Róbert Grešo on 02/02/2022.
//  Copyright © 2022 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGNavigator : NSObject

+ (void)pushPendingView:(UIViewController *)pendingView currentView:(UIViewController *)currentView client:(LMGClient *)client data:(NSDictionary *)data;
+ (void)presentPendingView:(UIViewController *)pendingView currentView:(UIViewController *)currentView client:(LMGClient *)client data:(NSDictionary *)data;

@end

NS_ASSUME_NONNULL_END
