//
//  LMGData.h
//  LMGData
//
//  Created by Myroslav Pomazan on 2018-11-20.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for LMGData.
FOUNDATION_EXPORT double LMGDataVersionNumber;

//! Project version string for LMGData.
FOUNDATION_EXPORT const unsigned char LMGDataVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LMGData/PublicHeader.h>

// ------------------------------------
// LMGData

#import <LMGData/LMGCancellable.h>
#import <LMGData/LMGClient+Shared.h>
#import <LMGData/LMGClient.h>
#import <LMGData/LMGClientConfiguration.h>
#import <LMGData/LMGCoordinate+CoreLocation.h>
#import <LMGData/LMGDataProvider.h>
#import <LMGData/LMGDataProviderObserver.h>
#import <LMGData/LMGDateFormatter.h>
#import <LMGData/LMGOperationFactory.h>
#import <LMGData/LMGRedemptionController.h>
#import <LMGData/LMGRedemptionObserver.h>
#import <LMGData/LMGSafeObservable.h>
#import <LMGData/LMGUseCaseOperation+Cancellable.h>
#import <LMGData/LMGUseCaseOperation.h>
#import <LMGData/LMGUseCaseOperationFactory.h>
#import <LMGData/NSInvocation+Helpers.h>


// ------------------------------------
// Domain

// Common junk
#import <LMGData/LMGBaseUseCase.h>
#import <LMGData/LMGObservable.h>
#import <LMGData/LMGSessionRequiredUseCase.h>
#import <LMGData/NSArray+Monads.h>
#import <LMGData/NSError+Domain.h>
#import <LMGData/NSSet+Monads.h>
#import <LMGData/NSString+EmptyCheck.h>
#import <LMGData/LMGDeepCopying.h>
#import <LMGData/NSArray+DeepCopy.h>

// Business Use Cases
#import <LMGData/LMGBusinessRepository.h>
#import <LMGData/LMGGetBusinessInfo.h>
#import <LMGData/LMGGetBusinessesWithParams.h>
#import <LMGData/LMGGetCollectionBusinesses.h>

// Collecitons Use Cases
#import <LMGData/LMGCollectionRepository.h>
#import <LMGData/LMGGetCollectionInfo.h>
#import <LMGData/LMGGetCollectionsList.h>

// Initialization Use Cases
#import <LMGData/LMGGetSession.h>
#import <LMGData/LMGRenewSession.h>
#import <LMGData/LMGResetSession.h>
#import <LMGData/LMGRestartSession.h>
#import <LMGData/LMGSessionRepository.h>
#import <LMGData/LMGSessionUseCaseFactory.h>
#import <LMGData/LMGStartSession.h>
#import <LMGData/LMGUpdateSessionUser.h>

// Locations Use Cases
#import <LMGData/LMGGetLocationsMap.h>
#import <LMGData/LMGGetLocationInfo.h>
#import <LMGData/LMGLocationsRepository.h>

// Offer Use Cases
#import <LMGData/LMGBookmarkOffer.h>
#import <LMGData/LMGJoinRewards.h>
#import <LMGData/LMGGetOfferInfo.h>
#import <LMGData/LMGGetRedeemAction.h>
#import <LMGData/LMGOfferRepository.h>
#import <LMGData/LMGTransitionRedemptionState.h>

// Search Term Use Cases
#import <LMGData/LMGAddSearchTerm.h>
#import <LMGData/LMGGetSearchTerms.h>
#import <LMGData/LMGSearchTermsRepository.h>

// User Use Cases
#import <LMGData/LMGGetUser.h>
#import <LMGData/LMGIdentifyUser.h>

// Device GeoPoint Use Cases
#import <LMGData/LMGDeviceLocationRepository.h>
#import <LMGData/LMGGetDeviceLocation.h>

// Notifications
#import <LMGData/LMGBusinessCalled.h>
#import <LMGData/LMGBusinessShared.h>
#import <LMGData/LMGBusinessShown.h>
#import <LMGData/LMGBusinessViewed.h>
#import <LMGData/LMGBusinessWebsiteVisited.h>
#import <LMGData/LMGCollectionViewed.h>
#import <LMGData/LMGCollectionsListed.h>
#import <LMGData/LMGContentFilterDidChange.h>
#import <LMGData/LMGDeviceLocationChanged.h>
#import <LMGData/LMGNotification.h>
#import <LMGData/LMGNotificationCenter.h>
#import <LMGData/LMGNotifications.h>
#import <LMGData/LMGOfferBookmarked.h>
#import <LMGData/LMGOfferCardSwiped.h>
#import <LMGData/LMGOfferRedeemed.h>
#import <LMGData/LMGOfferShared.h>
#import <LMGData/LMGOfferShown.h>
#import <LMGData/LMGOfferStateChangeError.h>
#import <LMGData/LMGOfferStateChanged.h>
#import <LMGData/LMGOfferStateRefreshed.h>
#import <LMGData/LMGOfferUnbookmarked.h>
#import <LMGData/LMGOfferViewed.h>
#import <LMGData/LMGSDKInitialized.h>
#import <LMGData/LMGSDKVersionDeprecated.h>
#import <LMGData/LMGSessionError.h>
#import <LMGData/LMGSessionIdentified.h>
#import <LMGData/LMGSessionStarted.h>
#import <LMGData/LMGUseCaseFinished.h>
#import <LMGData/LMGUseCaseStarted.h>

// Models
#import <LMGData/LMGAccessToken.h>
#import <LMGData/LMGAddress.h>
#import <LMGData/LMGAuthTokenExpired.h>
#import <LMGData/LMGBranding.h>
#import <LMGData/LMGBusiness.h>
#import <LMGData/LMGBusinessesListRequestParams.h>
#import <LMGData/LMGCollection.h>
#import <LMGData/LMGCollectionRequestParams.h>
#import <LMGData/LMGCollectionsListRequestParams.h>
#import <LMGData/LMGContentFilter.h>
#import <LMGData/LMGCoordinate.h>
#import <LMGData/LMGDataRequestParams.h>
#import <LMGData/LMGDetailsRequestParams.h>
#import <LMGData/LMGLocation.h>
#import <LMGData/LMGLocationCategory.h>
#import <LMGData/LMGLocationRequestParams.h>
#import <LMGData/LMGLocationsMapRequestParams.h>
#import <LMGData/LMGOffer.h>
#import <LMGData/LMGOfferLimits.h>
#import <LMGData/LMGOfferLimitWindow.h>
#import <LMGData/LMGOffersListRequestParams.h>
#import <LMGData/LMGOfferStateMeta.h>
#import <LMGData/LMGPagedResult.h>
#import <LMGData/LMGPlatformId.h>
#import <LMGData/LMGRedemptionArgumentGroup.h>
#import <LMGData/LMGRedemptionArgumentPermissionRequired.h>
#import <LMGData/LMGRedemptionArgumentType.h>
#import <LMGData/LMGRedemptionState.h>
#import <LMGData/LMGRedemptionStateTransition.h>
#import <LMGData/LMGRedemptionStateType.h>
#import <LMGData/LMGRedemptionTransitionArgument.h>
#import <LMGData/LMGRedemptionTransitionRequestParams.h>
#import <LMGData/LMGRequestParams+ContentFilter.h>
#import <LMGData/LMGSchedule.h>
#import <LMGData/LMGSearchTermsRequestParams.h>
#import <LMGData/LMGSession.h>
#import <LMGData/LMGSocialMedia.h>
#import <LMGData/LMGUrlPath.h>
#import <LMGData/LMGUser.h>

// ------------------------------------
// Data Access

// Common
#import <LMGData/LMGDASaveableParams.h>

// Business
#import <LMGData/LMGDABusinessLocalStore.h>
#import <LMGData/LMGDABusinessRemoteStore.h>
#import <LMGData/LMGDABusinessRepository.h>
#import <LMGData/LMGDABusinessStore.h>
#import <LMGData/LMGDABusinessStoreFactory.h>

// Collection
#import <LMGData/LMGDACollectionLocalStore.h>
#import <LMGData/LMGDACollectionRemoteStore.h>
#import <LMGData/LMGDACollectionRepository.h>
#import <LMGData/LMGDACollectionStore.h>
#import <LMGData/LMGDACollectionStoreFactory.h>

// Device Location
#import <LMGData/LMGDADeviceLocationLocalStore.h>
#import <LMGData/LMGDADeviceLocationRepository.h>
#import <LMGData/LMGDADeviceLocationSensorStore.h>
#import <LMGData/LMGDADeviceLocationStore.h>
#import <LMGData/LMGDADeviceLocationStoreFactory.h>

// Location
#import <LMGData/LMGDALocationLocalStore.h>
#import <LMGData/LMGDALocationRemoteStore.h>
#import <LMGData/LMGDALocationRepository.h>
#import <LMGData/LMGDALocationStore.h>
#import <LMGData/LMGDALocationStoreFactory.h>

// Offer
#import <LMGData/LMGDAOfferLocalStore.h>
#import <LMGData/LMGDAOfferRemoteStore.h>
#import <LMGData/LMGDAOfferRepository.h>
#import <LMGData/LMGDAOfferStore.h>
#import <LMGData/LMGDAOfferStoreFactory.h>

// Search Terms
#import <LMGData/LMGDASearchTermsLocalStore.h>
#import <LMGData/LMGDASearchTermsRepository.h>
#import <LMGData/LMGDASearchTermsStore.h>
#import <LMGData/LMGDASearchTermsStoreFactory.h>

// Session
#import <LMGData/LMGDASessionLocalStore.h>
#import <LMGData/LMGDASessionRemoteStore.h>
#import <LMGData/LMGDASessionRepository.h>
#import <LMGData/LMGDASessionStore.h>
#import <LMGData/LMGDASessionStoreFactory.h>

// User
#import <LMGData/LMGDAUserRemoteStore.h>
#import <LMGData/LMGDAUserStore.h>
#import <LMGData/LMGDAUserStoreFactory.h>

// ------------------------------------
// Event Logging

#import <LMGData/LMGAnalyticsDispatcher.h>
#import <LMGData/LMGDebugLogger.h>
#import <LMGData/LMGDebugLoggerLevel.h>
#import <LMGData/LMGLog.h>

// ------------------------------------
// Local Data

#import <LMGData/LMGCache.h>
#import <LMGData/LMGLDBusinessLocalSource.h>
#import <LMGData/LMGLDCollectionLocalSource.h>
#import <LMGData/LMGLDDeviceLocationSource.h>
#import <LMGData/LMGLDKeyValueStorage.h>
#import <LMGData/LMGLDLocationSource.h>
#import <LMGData/LMGLDOfferLocalSource.h>
#import <LMGData/LMGLDSearchTermsSource.h>
#import <LMGData/LMGLDSessionLocalSource.h>

// ------------------------------------
// Notification Bus

#import <LMGData/NSNotificationCenter+LMGNotificationCenter.h>
#import <LMGData/NSNotificationCenter+LMGNotificationCenter.h>
#import <LMGData/NSNotificationConvertable.h>
#import <LMGData/NSNotifications+NSNotificationConvertable.h>

#import <LMGData/LMGBusinessCalled+NSNotificationConvertable.h>
#import <LMGData/LMGBusinessShared+NSNotificationConvertable.h>
#import <LMGData/LMGBusinessShown+NSNotificationConvertable.h>
#import <LMGData/LMGBusinessViewed+NSNotificationConvertable.h>
#import <LMGData/LMGBusinessWebsiteVisited+NSNotificationConvertable.h>
#import <LMGData/LMGCollectionViewed+NSNotificationConvertable.h>
#import <LMGData/LMGCollectionsListed+NSNotificationConvertable.h>
#import <LMGData/LMGContentFilterDidChange+NSNotificationConvertable.h>
#import <LMGData/LMGDeviceLocationChanged+NSNotificationConvertable.h>
#import <LMGData/LMGOfferBookmarked+NSNotificationConvertable.h>
#import <LMGData/LMGOfferRedeemed+NSNotificationConvertable.h>
#import <LMGData/LMGOfferShared+NSNotificationConvertable.h>
#import <LMGData/LMGOfferShown+NSNotificationConvertable.h>
#import <LMGData/LMGOfferStateChangeError+NSNotificationConvertable.h>
#import <LMGData/LMGOfferStateChanged+NSNotificationConvertable.h>
#import <LMGData/LMGOfferStateRefreshed+NSNotificationConvertable.h>
#import <LMGData/LMGOfferUnbookmarked+NSNotificationConvertable.h>
#import <LMGData/LMGOfferViewed+NSNotificationConvertable.h>
#import <LMGData/LMGSDKInitialized+NSNotificationConvertable.h>
#import <LMGData/LMGSDKVersionDeprecated+NSNotificationConvertable.h>
#import <LMGData/LMGSessionError+NSNotificationConvertable.h>
#import <LMGData/LMGSessionIdentified+NSNotificationConvertable.h>
#import <LMGData/LMGSessionStarted+NSNotificationConvertable.h>
#import <LMGData/LMGUseCaseFinished+NSNotificationConvertable.h>
#import <LMGData/LMGUseCaseStarted+NSNotificationConvertable.h>

// ------------------------------------
// Sensor Data

#import <LMGData/LMGSDCLLocationManager.h>
#import <LMGData/LMGSDDeviceLocationSource.h>
#import <LMGData/NSError+SensorData.h>

// ------------------------------------
// Remote Data

// Models+DataAccess
#import <LMGData/LMGCoordinate+RemoteData.h>

// Session
#import <LMGData/LMGRDSessionRemoteSource.h>
