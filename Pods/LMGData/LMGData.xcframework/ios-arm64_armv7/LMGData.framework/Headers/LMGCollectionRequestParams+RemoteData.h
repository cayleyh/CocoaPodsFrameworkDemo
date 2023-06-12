//
//  LMGCollectionRequestParams+RemoteData.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-08-02.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import "LMGCollectionRequestParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGCollectionRequestParams (RemoteData)

- (nullable NSDictionary *)toRemoteData;

@end

NS_ASSUME_NONNULL_END
