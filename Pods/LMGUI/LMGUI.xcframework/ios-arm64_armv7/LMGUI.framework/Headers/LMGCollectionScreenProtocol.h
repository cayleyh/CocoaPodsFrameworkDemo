//
//  LMGCollectionScreenProtocol.h
//  LMGUI
//
//  Created by Róbert Grešo on 06/04/2022.
//  Copyright © 2022 GetintheLoop Marketing Ltd. All rights reserved.
//

/* LMGCollectionScreen protocol that is meant to be in LMGCollectionScreen.h has to be public
   as integrations might need to access & work with it. There is a problem with having
   LMGCollectionScreen protocol in LMGCollectionScreen.h tho as this file includes imports
   of some files that are private. For this reason LMGCollectionScreenProtocol.h file was created
   so it doesnt have any imports of any private files and therefor could be public itself.

   This convoluted structure is a legacy artifact of how the SDK was originally designed.
   Once actual classes are exposed to end-users, all of these extra protocols will become unnecessary
   and should be removed. */

@import LMGData;

@protocol LMGCollectionScreen

- (void)setId:(nonnull LMGPlatformId *)id;
- (void)setHeaderView:(nullable UIView *)view;

@end
