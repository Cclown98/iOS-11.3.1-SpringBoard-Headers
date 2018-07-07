//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UABestAppSuggestionManagerDelegate.h"

@class NSCountedSet, NSString, SBBestAppSuggestion, UABestAppSuggestion, UABestAppSuggestionManager, _DECConsumer, _DECResult;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate>
{
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    _DECConsumer *_expertCenterSuggestionMonitor;
    _DECResult *_currentExpertBestSuggestion;
    SBBestAppSuggestion *_currentBestSuggestion;
    NSCountedSet *_listeningReasons;
    NSCountedSet *_pauseListeningReasons;
    _Bool _isListeningForContinuitySuggestion;
    _Bool _isListeningForExpertCenterSuggestion;
    _Bool _screenOnDueToUserEvent;
    _Bool _screenOnAndLookingForEvent;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)_createSuggestionSources;
- (void)_destroySuggestionSources;
- (void)_evaluateSuggestionUpdates:(id)arg1;
- (void)_handleAppUninstall:(id)arg1;
- (void)_handleInitialSpringBoardLaunch;
- (void)_listenForNotifications;
- (void)_nextUserEventOccured:(id)arg1;
- (void)_screenDidDim:(id)arg1;
- (void)_screenDidUndim:(id)arg1;
- (void)_setContinuitySuggestionUpdatesEnabled:(_Bool)arg1 expertCenterSuggestionUpdatesEnabled:(_Bool)arg2;
- (void)_stopListeningForNotifications;
- (unsigned long long)_supportedExpertCenterCategories;
- (void)bestAppSuggestionChanged:(id)arg1;
- (id)currentSuggestedApp;
- (void)dealloc;
- (void)disableListeningForUpdatesForReason:(id)arg1;
- (void)disablePauseListeningForUpdatesForReason:(id)arg1;
- (void)enableListeningForUpdatesForReason:(id)arg1;
- (void)expertCenterSuggestionChanged:(id)arg1;
- (id)init;
- (void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)pauseListeningForUpdatesForReason:(id)arg1;
- (void)performWithCurrentSuggestedAppAndApplication:(CDUnknownBlockType)arg1;
- (void)startFetchingPayloadForAppSuggestion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
