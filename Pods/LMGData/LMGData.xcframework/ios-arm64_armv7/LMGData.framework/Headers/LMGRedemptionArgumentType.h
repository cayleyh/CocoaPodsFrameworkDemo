//
//  LMGRedemptionArgumentType.h
//  LMGData
//
//  Created by Esteban Vallejo - GITL on 18/06/2020.
//  Copyright © 2020 GetintheLoop Marketing Ltd. All rights reserved.
//

#ifndef LMGRedemptionArgumentType_h
#define LMGRedemptionArgumentType_h

typedef NS_ENUM(NSUInteger, LMGRedemptionArgumentType) {
    LMGRedemptionArgumentTypeNone,
    LMGRedemptionArgumentTypeGeoPoint,
    LMGRedemptionArgumentTypeGeoPointAccuracy,
    LMGRedemptionArgumentTypeGeoPointAge,
    LMGRedemptionArgumentTypePrompt,
    LMGRedemptionArgumentTypePIN,
    LMGRedemptionArgumentTypeUnknown
};

#endif /* LMGRedemptionArgumentType_h */
