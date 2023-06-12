//
//  LMGMixedContentConfig.h
//  LMGUI
//
//  Created by Steve-GITL on 14/10/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMGMixedContentConfig : NSObject

/// Number of elements displayed on the initial page.
/// If it is `nil`, `pageLimit` will be used instead. Default is `nil`.
@property (nonatomic, nullable) NSNumber *initialPageLimit;

/// Number of elements displayed per page. Default is 3.
@property (nonatomic) NSUInteger pageLimit;

/// Indicates if the data should be refreshed even when the view is not visible. Default is FALSE.
@property (nonatomic, assign) BOOL enableBackgroundReloading;

@end

NS_ASSUME_NONNULL_END
