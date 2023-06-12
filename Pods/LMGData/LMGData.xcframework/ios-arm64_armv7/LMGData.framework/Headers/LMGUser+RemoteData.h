//
//  LMGUser+RemoteData.h
//  LMGData
//
//  Created by Saurabh Gupta on 07/08/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGUser (RemoteData)

- (nullable NSDictionary *)toRemoteData;

@end

NS_ASSUME_NONNULL_END
