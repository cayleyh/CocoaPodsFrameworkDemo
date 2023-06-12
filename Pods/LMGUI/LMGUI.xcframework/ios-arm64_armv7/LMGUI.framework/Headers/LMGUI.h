//
//  LMGUI.h
//  LMGUI
//
//  Created by Myroslav Pomazan on 2018-11-20.
//  Copyright © 2022 GetintheLoop Marketing Ltd. All rights reserved.
//

//
// This header specifies all the public headers exported by the SDK
// and available for integrations.
//
// To export new file headers correctly:
//   1. Ensure it's imported here like #import <LMGUI/PublicHeader.h>
//   2. Ensure it's included in the "Public" section of Build Phases > Headers
//
// You may have to delete Pods/ and re-install after doing this to have it
// correctly included for local dev.
//

#import <UIKit/UIKit.h>

//! Project version number for LMGUI.
FOUNDATION_EXPORT double LMGUIVersionNumber;

//! Project version string for LMGUI.
FOUNDATION_EXPORT const unsigned char LMGUIVersionString[];

// General Features
#import <LMGUI/LMGScreenType.h>

// Businesses & Locations
#import <LMGUI/LMGBusinessDetailsWireframe.h>

// Offers
#import <LMGUI/LMGOfferDetailsWireframe.h>
#import <LMGUI/LMGRedemptionConfirmationWireframe.h>

// Bookmarks
#import <LMGUI/LMGBookmarksWireframe.h>
#import <LMGUI/LMGBookmarksViewControllerConfiguration.h>

// Rewards
#import <LMGUI/LMGRewardsWireframe.h>
#import <LMGUI/LMGRewardsViewControllerConfiguration.h>
#import <LMGUI/LMGRewardsType.h>

// Search
#import <LMGUI/LMGSearchResultWireframe.h>
#import <LMGUI/LMGSearchWireframe.h>

// Collections
#import <LMGUI/LMGCollectionsListTableView.h>
#import <LMGUI/LMGCollectionsListGridView.h>
#import <LMGUI/LMGCollectionRefreshDelegate.h>
#import <LMGUI/LMGCollectionsListPresenter.h>
#import <LMGUI/LMGCollectionWireframe.h>
#import <LMGUI/LMGCollectionView.h>
#import <LMGUI/LMGCollectionScreenProtocol.h>

// Mixed Content
#import <LMGUI/LMGMixedContentSection.h>
#import <LMGUI/LMGMixedContentSectionData.h>
#import <LMGUI/LMGMixedContentSectionDataType.h>
#import <LMGUI/LMGMixedContentSectionHeader.h>
#import <LMGUI/LMGMixedContentSectionRendererType.h>
#import <LMGUI/LMGMixedContentWireframe.h>
#import <LMGUI/LMGMixedContentSectionConfig.h>
#import <LMGUI/LMGMixedContentConfig.h>
#import <LMGUI/LMGMixedContentSectionRendererConfig.h>

// Custom Collection Headers
#import <LMGUI/LMGCollectionsListWireframe.h>

// Map
#import <LMGUI/LMGMapWireframe.h>

// Theming
#import <LMGUI/LMGTheme.h>
#import <LMGUI/LMGThemeManager.h>
