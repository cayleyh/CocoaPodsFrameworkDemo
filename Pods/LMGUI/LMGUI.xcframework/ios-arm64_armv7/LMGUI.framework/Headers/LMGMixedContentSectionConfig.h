//
//  LMGMixedContentSectionConfig.h
//  LMGUI
//
//  Created by Steve-GITL on 14/10/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LMGMixedContentSectionRendererConfig;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LMGMixedContentSectionGlobalEmptyBehaviour) {
    /// Include the section in the table empty calculation.
    LMGMixedContentSectionGlobalEmptyBehaviourInclude,
    
    /// Exclude the section from the table empty calculation.
    LMGMixedContentSectionGlobalEmptyBehaviourExclude
};

@interface LMGMixedContentSectionConfig : NSObject

/// A limit value used by the section renderer.
@property (nonatomic, nullable) NSNumber *limit;

/// A configuration object used by the renderer to customise its content
@property (nonatomic, nullable) LMGMixedContentSectionRendererConfig *rendererConfig;

/// A value that defines if the section should (or not) be considered to determine if there is no content to display in the table.
/// Default is LMGMixedContentSectionGlobalEmptyBehaviourInclude.
@property (nonatomic) LMGMixedContentSectionGlobalEmptyBehaviour globalEmptyBehaviour;

@end

NS_ASSUME_NONNULL_END
