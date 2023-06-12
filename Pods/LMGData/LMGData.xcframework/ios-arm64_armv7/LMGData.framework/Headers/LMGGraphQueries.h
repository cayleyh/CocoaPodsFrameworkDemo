//
//  LMGGraphQueries.h
//  LMGData
//
//  Created by Cayley Humphries on 2019-08-02.
//  Copyright © 2019 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

// Sessions

extern NSString *const LMGGraphQueryCreateSessionMutation;
extern NSString *const LMGGraphQueryIdentifySessionMutation;
extern NSString *const LMGGraphQueryExtendSessionMutation;

// Collections

extern NSString *const LMGGraphQueryCollectionListQuery;
extern NSString *const LMGGraphQueryCollectionDetailsQuery;

// Businesses

extern NSString *const LMGGraphQueryCollectionBusinessesListQuery;
extern NSString *const LMGGraphQueryBusinessDetailsQuery;
extern NSString *const LMGGraphQueryBusinessesListQuery;


// Locations

extern NSString *const LMGGraphQueryLocationsListQuery;
extern NSString *const LMGGraphQueryLocationDetailsQuery;
extern NSString *const LMGGraphQueryOffersByLocationQuery;

// User

extern NSString *const LMGGraphQueryUpdateUserTraitsMutation;
extern NSString *const LMGGraphQueryGetUserTraitsQuery;

// Offers
extern NSString *const LMGGraphQueryOfferDetailsQuery;
extern NSString *const LMGGraphQueryOfferRedeemActionQuery;
extern NSString *const LMGGraphQueryRedeemOfferMutation;
extern NSString *const LMGGraphQueryBookmarkOfferMutation;
extern NSString *const LMGGraphQueryUnbookmarkOfferMutation;
