//
//  LMGMulticastDelegate.h
//  LMGUI
//
//  Created by Saurabh Gupta on 23/08/19.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Multicast delegate dispatcher
 
 Easily allows multiple responders to be attached as the delegate of an object. This enables
 unrelated behaviour code that relies on delegate calls to be easily separated.
 
 Delegates are called IN THE ORDER THEY WERE ADDED. This means you can, by controlling the initialization
 order, control cascading or dependent behaviour.
 
 Also important to note: All matching delegate methods are called for each call. It is not currently possible
 to cancel a delegate responder chain.
 
 Based on:
 - http://blog.scottlogic.com/2012/11/19/a-multicast-delegate-pattern-for-ios-controls.html
 - https://github.com/robbiehanson/XMPPFramework/wiki/MulticastDelegate
 
 
 ### Simple Usage ###
 
 GITLMulticastDelegate *delegates = [GITLMulticastDelegate new];
 [delegates addDelegate:[FirstBehaviour new]];
 [delegates addDelegate:[SecondBehaviour new]];
 
 self.delegate = (id)delegates;
 // IMPORTANT: some delegates, like tableview, order is IMPORTANT... ie. the source will immediately
 // call delegate methods when when the delegate is added to do initial setup & configuration. If
 // delegate is attached to source before delegate handlers are added, somethings like measuring heights
 // of TableView cells won't work.
 
 self.delegates = [GITLMulticastDelegate new];
 [self.delegates addDelegate:self];
 
 self.tableView.delegate = (id)self.delegates;
 
 ### Advanced Usage ###
 
 To simplify adding multicast delegate behaviour to existing classes, the classes can be extended
 with custom Multicast categories, as described http://blog.scottlogic.com/2012/11/19/a-multicast-delegate-pattern-for-ios-controls.html
 
 */

@interface LMGMulticastDelegate : NSObject

/**
 Add a delegate by id.
 
 Does NOT currently prevent duplicates from being added (!)
 */
- (void)addDelegate:(id)delegate;

/**
 Removes a specific delegate instance by id
 */
- (void)remove:(id)delegate;

/**
 Removes all delegates
 
 Called automatically on `dealloc`
 */
- (void)removeAllDelegates;

@end
