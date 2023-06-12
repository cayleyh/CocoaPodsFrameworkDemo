//
//  LMGCoordinate+RemoteData.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-07-31.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGCoordinate.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGCoordinate (RemoteData)

- (NSArray *)toRemoteData;

@end

@interface NSArray<LMGCoordinate> (RemoteData)

- (NSArray *)areaToRemoteData;

@end

NS_ASSUME_NONNULL_END
