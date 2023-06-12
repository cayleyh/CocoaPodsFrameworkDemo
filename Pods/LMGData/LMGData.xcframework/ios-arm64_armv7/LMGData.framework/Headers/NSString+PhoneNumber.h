//
//  NSString+PhoneNumber.h
//  LMGUI
//
//  Created by GetInTheLoop on 23/09/2019.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (PhoneNumber)

- (nullable NSString *)cleanedAndValidatedPhoneNumber;

@end
