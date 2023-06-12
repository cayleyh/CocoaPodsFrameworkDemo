//
//  LMGBookmarksViewControllerConfiguration.h
//  LMGUI
//
//  Created by Róbert Grešo on 16/05/2019.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//


#import <Foundation/Foundation.h>

@class LMGBookmarksViewControllerConfigurationBuilder;

typedef void (^LMGBookmarksViewControllerConfigurationBuildBlock)(LMGBookmarksViewControllerConfigurationBuilder  * _Nonnull builder);

@interface LMGBookmarksViewControllerConfiguration : NSObject

@property (nonatomic, readonly, getter=isContentAreaIgnored) BOOL ignoreContentArea;

- (nonnull instancetype)initWithBuilder:(nonnull LMGBookmarksViewControllerConfigurationBuilder *)builder NS_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init NS_UNAVAILABLE;

+ (nonnull instancetype)configurationWith:(nullable LMGBookmarksViewControllerConfigurationBuildBlock)block;

@end

@interface LMGBookmarksViewControllerConfigurationBuilder: NSObject

@property (nonatomic, getter=isContentAreaIgnored) BOOL ignoreContentArea;

- (nonnull LMGBookmarksViewControllerConfiguration *)build;

@end
