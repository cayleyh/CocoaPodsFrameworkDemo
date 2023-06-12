//
//  LMGLocationsMapRequestParams+RemoteData.h
//  LMGData
//
//  Created by Saurabh Gupta on 05/08/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGLocationsMapRequestParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGLocationsMapRequestParams (RemoteData)

- (nullable NSDictionary *)toRemoteData;

@end

NS_ASSUME_NONNULL_END
