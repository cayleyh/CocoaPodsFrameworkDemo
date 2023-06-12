//
//  LMGMixedContentSectionRendererConfig.h
//  LMGUI
//
//  Created by Brian Giupponi on 20/10/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LMGMixedContentSectionRendererConfig : NSObject

/// An Overline text used to override Renderer's overline. Default is `nil`.
@property (nonatomic, nullable) NSString *overline;

/// A Description text used to override Renderer's description. Default is `nil`.
@property (nonatomic, nullable) NSString *descriptionInfo;

@end

NS_ASSUME_NONNULL_END
