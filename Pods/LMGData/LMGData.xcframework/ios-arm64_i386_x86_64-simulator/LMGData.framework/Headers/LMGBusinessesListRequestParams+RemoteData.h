//
//  LMGBusinessesListRequestParams+RemoteData.h
//  LMGData
//
//  Created by Saurabh Gupta on 09/08/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGBusinessesListRequestParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGBusinessesListRequestParams (RemoteData)

- (nullable NSDictionary *)toRemoteData;

@end

NS_ASSUME_NONNULL_END
