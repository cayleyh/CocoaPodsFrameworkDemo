//
//  LMGMixedContentSectionHeader.h
//  LMGUI
//
//  Created by Esteban Vallejo - GITL on 04/08/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LMGData/LMGDeepCopying.h>

@class LMGMixedContentSectionHeader;
@class LMGMixedContentSection;

NS_ASSUME_NONNULL_BEGIN

@protocol LMGMixedContentSectionHeaderDelegate <NSObject>

- (void)mixedContentSectionHeader:(LMGMixedContentSectionHeader *)header
        didSelectActionForSection:(LMGMixedContentSection *)section;

@end

@interface LMGMixedContentSectionHeader : NSObject <LMGDeepCopying>

@property (nonatomic, readonly) NSString *headingText;
@property (nonatomic, nullable, readonly) NSString *actionText;
@property (nonatomic, weak) id<LMGMixedContentSectionHeaderDelegate> delegate;

- (instancetype)initWithHeadingText:(NSString *)headingText andActionText:(nullable NSString *)actionText NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithHeadingText:(NSString *)headingText;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
