//
//  LMGRedemptionArgumentGroup.h
//  LMGData
//
//  Created by Esteban Vallejo - GITL on 18/06/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#ifndef LMGRedemptionArgumentGroup_h
#define LMGRedemptionArgumentGroup_h

/**
 Groups Arguments acording to its type and how they should behave
 */
typedef NS_ENUM(NSUInteger, LMGRedemptionArgumentGroup) {
    ///Doesn't require the User interaction to be completed.
    LMGRedemptionArgumentGroupSilent,
    
    ///Requires te User interaction to be completed.
    LMGRedemptionArgumentGroupUserInteraction,
    
    ///Has no defined behaviour.
    LMGRedemptionArgumentGroupNone
};

#endif /* LMGRedemptionArgumentGroup_h */
