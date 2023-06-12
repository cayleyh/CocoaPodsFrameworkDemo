//
//  LMGRDRequestConfigurator.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-07-31.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMGSession.h"
#import "LMGCoordinate.h"

NS_ASSUME_NONNULL_BEGIN

@interface LMGRDRequestConfigurator : NSObject

@property (nonatomic) LMGSession *session;
@property (nonatomic) LMGCoordinate *deviceCoordinate;

- (void)configure:(NSMutableURLRequest *)request expect:(out NSError **)error;

@end

NS_ASSUME_NONNULL_END
