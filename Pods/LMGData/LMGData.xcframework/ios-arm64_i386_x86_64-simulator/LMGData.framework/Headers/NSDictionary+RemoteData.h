//
//  NSDictionary+RemoteData.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-08-02.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (RemoteData)

- (nullable id)valueForKeyPathOrNil:(NSString *)keyPath;

@end

NS_ASSUME_NONNULL_END
