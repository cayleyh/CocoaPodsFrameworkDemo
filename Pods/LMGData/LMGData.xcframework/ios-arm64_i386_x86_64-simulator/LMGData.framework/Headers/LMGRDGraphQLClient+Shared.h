//
//  LMGRDGraphQLClient+Shared.h
//  LMGData
//
//  Created by Steve-GITL on 13/08/2019.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGRDGraphQLClient.h"
#import <LMGData/LMGData.h>
#import "LMGClientConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDGraphQLClient (Shared)

+ (void)initAuthWith:(LMGClientConfiguration *)configuration notificationCenter:(id<LMGNotificationCenter>)notificationCenter;
+ (nonnull instancetype)auth;

+ (void)initSharedWith:(LMGClientConfiguration *)configuration notificationCenter:(id<LMGNotificationCenter>)notificationCenter;
+ (nonnull instancetype)shared;

@end

NS_ASSUME_NONNULL_END
