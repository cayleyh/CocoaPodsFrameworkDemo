//
//  LMGConfig.h
//  LMGUI
//
//  Created by Róbert Grešo on 07/11/2018.
//

#import <Foundation/Foundation.h>

@interface LMGConfig : NSObject

typedef NS_ENUM(NSUInteger, LMGConfigRedemptionAudienceId) {
    LMGConfigRedemptionAudienceIdNone,
    LMGConfigRedemptionAudienceIdIdentified,
    LMGConfigRedemptionAudienceIdVerified
};

typedef NS_ENUM(NSUInteger, LMGConfigOfferBookmarking) {
    LMGConfigOfferBookmarkingEnabled,
    LMGConfigOfferBookmarkingVerifiedOnly,
    LMGConfigOfferBookmarkingDisabled
};

typedef NS_ENUM(NSUInteger, LMGOfferDetailsLayout) {
    LMGOfferDetailsLayoutNormal,
    LMGOfferDetailsLayoutLimitedBusinessDetails
};

+ (instancetype)shared;

- (LMGConfigOfferBookmarking)offerBookmarkingEnabled;
- (BOOL)offerSharingEnabled;
- (BOOL)businessSharingEnabled;
- (BOOL)offerBadgeEnabled;
- (BOOL)feedbackLinksEnabled;
- (BOOL)visualEffectsEnabled;
- (BOOL)showingDistancesEnabled;
- (NSString *)supportEmail;
- (LMGConfigRedemptionAudienceId)redemptionRequiresMinimumAudienceId;
- (LMGOfferDetailsLayout)offerDetailsLayout;

@end
