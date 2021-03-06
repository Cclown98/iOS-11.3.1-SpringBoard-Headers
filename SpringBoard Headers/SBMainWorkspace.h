//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspace.h"

#import "BSPowerMonitorObserver.h"
#import "BSTransactionObserver.h"
#import "BSWatchdogDelegate.h"
#import "FBApplicationProcessObserver.h"
#import "FBProcessManagerObserver.h"
#import "FBSceneManagerObserver.h"
#import "FBSystemServiceDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "SBStarkScreenControllerObserver.h"
#import "SBStarkScreenManagerObserver.h"

@class BSEventQueueLock, BSWatchdog, FBDisplayLayoutTransition, FBSceneManager, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, SBAlertManager, SBAppStatusBarSettingsAssertion, SBHomeGestureArbiter, SBIdleTimerCoordinatorHelper, SBMainAlertManager, SBOrientationAggdLogger, SBWindow, SBWindowSelfHostWrapper, SBWorkspaceTransaction;

@interface SBMainWorkspace : SBWorkspace <BSTransactionObserver, SBAlertManagerDelegate, SBAlertManagerObserver, SBStarkScreenManagerObserver, SBStarkScreenControllerObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver, MCProfileConnectionObserver, BSPowerMonitorObserver>
{
    _Bool _initialized;
    SBMainAlertManager *_alertManager;
    BSEventQueueLock *_suspensionLock;
    _Bool _medusaEnabled;
    SBOrientationAggdLogger *_orientationAggdLogger;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    SBWorkspaceTransaction *_currentTransaction;
    BSEventQueueLock *_currentTransactionLock;
    BSWatchdog *_transactionWatchdog;
    SBWindow *_reachabilityWindow;
    SBWindowSelfHostWrapper *_reachabilityHostWrapper;
    SBWindow *_reachabilityEffectWindow;
    NSMutableDictionary *_extensionHandlersByType;
    NSObject<OS_dispatch_queue> *_foregroundAppPidsUpdateQueue;
    NSMutableSet *_foregroundAppPidsWhenDisplaySecureModeWasEnabled;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_activeSuspendedWorkspaceTransitions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    id <SBIdleTimerProviding> _activeIdleTimerProvider;
    SBHomeGestureArbiter *_homeGestureArbiter;
    FBSceneManager *_sceneManager;
}

+ (id)_instanceIfExists;
+ (id)_sharedInstanceWithNilCheckPolicy:(long long)arg1;
+ (id)debugDescription;
+ (id)sharedInstance;
+ (id)start;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_activeIdleTimerProvider, setter=_setActiveIdleTimerProvider:) id <SBIdleTimerProviding> activeIdleTimerProvider; // @synthesize activeIdleTimerProvider=_activeIdleTimerProvider;
- (void)_addStateCaptureHandlers;
- (id)_applicationForIdentifier:(id)arg1;
- (_Bool)_applicationProcessExited:(id)arg1 withContext:(id)arg2;
- (void)_attemptUnlockToApplication:(id)arg1 showPasscode:(_Bool)arg2 origin:(id)arg3 givenOrigin:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_canImplicitlyUnlockAtLockScreenWhileAuthenticatedFromOrigin:(id)arg1 givenOrigin:(id)arg2 trustedRequest:(_Bool)arg3 outReason:(id *)arg4;
- (id)_commonActivationSettingsForRequestWithOptions:(id)arg1 isTrustedRequest:(_Bool)arg2 clientProcess:(id)arg3;
- (void)_coversheetDidDismiss;
- (void)_coversheetDidPresent;
- (void)_determineSourceForTransitionRequest:(id)arg1;
- (void)_deviceWillDisableDisplaySecureMode:(id)arg1;
- (void)_deviceWillEnableDisplaySecureMode:(id)arg1;
- (void)_disableReachabilityImmediately:(_Bool)arg1;
- (_Bool)_executeAlertTransitionRequest:(id)arg1;
- (_Bool)_executeApplicationTransitionRequest:(id)arg1;
- (_Bool)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(CDUnknownBlockType)arg3;
- (void)_finishInitialization;
- (id)_generateIdleTimerDescriptorForReason:(id)arg1;
- (void)_handleBuddyLaunchFinished;
- (void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)_handleOpenURLRequest:(id)arg1 application:(id)arg2 options:(id)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (_Bool)_handleSetupExited:(id)arg1;
- (id)_handlerForExtensionPoint:(id)arg1;
- (void)_initializeAndObserveDefaults;
- (_Bool)_isApplicationRunningAsViewService:(id)arg1;
- (void)_noteDidWakeFromSleep;
- (_Bool)_preflightTransitionRequest:(id)arg1;
- (void)_proposeIdleTimerDescriptorForReason:(id)arg1;
- (void)_registerHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)_resume;
- (id)_selectTransactionForAlertActivationRequest:(id)arg1;
- (id)_selectTransactionForAppActivationRequest:(id)arg1;
- (id)_selectTransactionForAppActivationRequest:(id)arg1 canDeactivateAlerts:(_Bool)arg2;
- (id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)_selectTransactionForAppActivationUnderMainScreenLockRequest:(id)arg1;
- (id)_selectTransactionForAppExited:(id)arg1;
- (id)_selectTransactionForAppRelaunch:(id)arg1;
- (id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 animated:(_Bool)arg2 forceToBuddy:(_Bool)arg3 withResult:(CDUnknownBlockType)arg4;
- (id)_selectTransactionForReturningToTheLockScreenWithRequest:(id)arg1 fromApp:(id)arg2;
- (_Bool)_setCurrentTransactionForRequest:(id)arg1 fallbackProvider:(CDUnknownBlockType)arg2;
- (void)_suspend;
- (id)_transactionForTransitionRequest:(id)arg1 canDeactivateAlerts:(_Bool)arg2;
- (void)_unregisterHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)_updateFrontMostApplicationEventPort;
- (void)_updateMedusaEnablementAndNotify:(_Bool)arg1;
- (id)_validateRequestToOpenApplication:(id)arg1 options:(id)arg2 origin:(id)arg3 error:(out id *)arg4;
@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
- (long long)alertManager:(id)arg1 defaultInterfaceOrientationForPresentationOfAlert:(id)arg2;
- (_Bool)alertManager:(id)arg1 defaultShouldAutorotateForAlert:(id)arg2;
- (unsigned long long)alertManager:(id)arg1 defaultSupportedInterfaceOrientationsForAlert:(id)arg2;
- (void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 didChangeTopAlertFromAlert:(id)arg2 toAlert:(id)arg3;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2;
- (id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
- (_Bool)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
- (void)alertManager:(id)arg1 topAlert:(id)arg2 requestsWallpaperStyleChangeWithAnimationFactory:(id)arg3;
- (void)alertManager:(id)arg1 topAlertDidChangeOrientationEventsEnabled:(id)arg2;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)applicationProcessDidLaunch:(id)arg1;
- (void)applicationProcessWillLaunch:(id)arg1;
@property(readonly, nonatomic) double autoDimTime;
@property(readonly, nonatomic) double autoLockTime;
- (_Bool)canExecuteTransitionRequest:(id)arg1;
- (id)coordinatorRequestedIdleTimerDescriptor:(id)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2;
- (id)createRequestWithOptions:(unsigned long long)arg1;
@property(retain, nonatomic) SBWorkspaceTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)executeTransitionRequest:(id)arg1;
- (_Bool)executeTransitionRequest:(id)arg1 withValidator:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSSet *foregroundAppPidsWhenDisplaySecureModeWasEnabled;
@property(readonly, nonatomic) SBHomeGestureArbiter *homeGestureArbiter; // @synthesize homeGestureArbiter=_homeGestureArbiter;
@property(retain, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;
- (id)idleTimerProvider:(id)arg1 didProposeDescriptor:(id)arg2 forReason:(id)arg3;
- (id)init;
- (id)initWithEventQueue:(id)arg1;
@property(readonly, nonatomic, getter=isMedusaEnabled) _Bool medusaEnabled; // @synthesize medusaEnabled=_medusaEnabled;
@property(readonly, nonatomic, getter=isSpringBoardActive) _Bool springBoardActive;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)powerMonitorSystemSleepRequestAborted:(id)arg1;
- (void)powerMonitorSystemWillSleep:(id)arg1;
- (void)powerMonitorSystemWillWakeFromSleep:(id)arg1;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processDidExit:(id)arg1;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)requestTransitionWithBuilder:(CDUnknownBlockType)arg1;
- (_Bool)requestTransitionWithOptions:(unsigned long long)arg1 builder:(CDUnknownBlockType)arg2 validator:(CDUnknownBlockType)arg3;
- (struct CGRect)sceneFrameForAlerts:(id)arg1;
- (double)sceneLevelForAlerts;
@property(readonly, nonatomic) FBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic) _Bool shouldDisableAutoLockWarn;
- (void)starkScreenController:(id)arg1 didChangeStateFromState:(long long)arg2 toState:(long long)arg3;
- (void)starkScreenManagerDidChangeCurrentController:(id)arg1;
- (void)starkScreenManagerWillChangeCurrentController:(id)arg1;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 dataReset:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg2;
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(_Bool)arg2;
- (void)systemServicePrepareForShutdown:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)transactionDidComplete:(id)arg1;
- (id)transactionForTransitionRequest:(id)arg1;
- (id)transactionForTransitionRequestDeactivatingAlerts:(id)arg1;
- (void)updateFrontMostApplicationEventPort;
@property(readonly, nonatomic) _Bool wantsIdleTimerDisabled;
- (void)watchdogFired:(id)arg1;
- (void)watchdogStarted:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

