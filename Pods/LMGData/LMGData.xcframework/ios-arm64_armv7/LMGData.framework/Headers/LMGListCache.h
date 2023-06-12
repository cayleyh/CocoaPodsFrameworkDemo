//
//  LMGListCache.h
//  LMGData
//
//  Created by Brian Giupponi on 06/08/2021.
//  Copyright © 2021 GetintheLoop Marketing Ltd. All rights reserved.
//

@import UIKit;
#import "LMGCache.h"
#import "LMGDASaveableParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGListCache <ObjectType> : LMGCache

- (nullable ObjectType)objectForListParams:(id<LMGDASaveableListParams>)params;

@end

NS_ASSUME_NONNULL_END
