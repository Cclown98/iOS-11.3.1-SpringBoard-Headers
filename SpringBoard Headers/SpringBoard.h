//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSystemApp.h"

#import "MCProfileConnectionObserver.h"
#import "SBIdleTimerProviding.h"
#import "SBModalAlertPresentationCoordinatorDelegate.h"
#import "SBPowerDownControllerDelegate.h"
#import "SBRestartManagerDelegate.h"
#import "SSScreenCapturerDelegate.h"
#import "UIApplicationDelegate.h"
#import "UIStatusBarStyleDelegate_SpringBoardOnly.h"

@class BBDataProviderConnection, NSArray, NSCountedSet, NSDate, NSHashTable, NSMutableArray, NSMutableSet, NSNumberFormatter, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString, NSTimer, SBAccountStoreManager, SBAppStatusBarSettingsAssertion, SBApplication, SBApplicationAutoLaunchService, SBApplicationLaunchAlertService, SBBluetoothAccessoryBatteryMonitor, SBCarDoNotDisturbController, SBCardItemsController, SBCombinationHardwareButton, SBDeveloperBuildExpirationTrigger, SBExternalDisplayManager, SBFUserAuthenticationController, SBHomeHardwareButton, SBIdleTimerPolicyAggregator, SBLockHardwareButton, SBMainDisplayInterfaceOrientationAggregator, SBMainWorkspace, SBModalAlertPresentationCoordinator, SBModalAlertPresenter, SBModalUIFluidDismissGestureManager, SBNCNotificationDispatcher, SBPowerDownController, SBPressPrecedenceArbiter, SBProximitySensorManager, SBRestartManager, SBSStatusBarStyleOverridesAssertion, SBScreenTimeTrackingController, SBScreenshotManager, SBSpuriousScreenUndimmingAssertion, SBSynchronizeCloudCriticalDataOperation, SBUIController, SBUserAgent, SBUserSessionController, SBVolumeHardwareButton, SBWidgetController, SSScreenCapturer, UIWindow;

@interface SpringBoard : FBSystemApp <MCProfileConnectionObserver, SBPowerDownControllerDelegate, SBRestartManagerDelegate, SBModalAlertPresentationCoordinatorDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SSScreenCapturerDelegate, UIApplicationDelegate, SBIdleTimerProviding>
{
    SBUIController *_uiController;
    double _headsetButtonDownTime;
    struct __IOHIDEvent *_headsetDownEvent;
    int _headsetClickCount;
    int _ringerSwitchState;
    unsigned int _headsetButtonClickCount:8;
    unsigned int _menuButtonClickCount:8;
    unsigned int _screenWasDimOnMenuDown:1;
    unsigned int _screenshotWasTaken:1;
    unsigned int _headsetDownDelayedActionPerformed:1;
    unsigned int _isSeekingInMedia:1;
    unsigned int _ignoringCurrentLockButtonPress:1;
    int _mediaSeekDirection;
    unsigned int _springBoardRequestsAccelerometerEvents;
    long long _activeInterfaceOrientation;
    NSMutableSet *_activeInterfaceOrientationObservers;
    NSMutableArray *_activeInterfaceOrientationOverrideStack;
    _Bool _wantsOrientationEvents;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    _Bool _expectsFaceContact;
    _Bool _expectsFaceContactInLandscape;
    _Bool _proximityEventsEnabled;
    _Bool _smartCoverClosed;
    _Bool _keybagRefetchTransactionIsActive;
    _Bool _menuButtonDown;
    NSSet *_restrictionDisabledApplications;
    SBApplication *_nowRecordingApp;
    SBApplication *_inCallApp;
    SBApplication *_menuButtonInterceptApp;
    _Bool _menuButtonInterceptAppEnabledForever;
    NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;
    NSMutableArray *_appsRegisteredForVolumeEvents;
    NSMutableArray *_appsRegisteredForLockButtonEvents;
    SBApplication *_lastLockButtonEventRecipient;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    struct _opaque_pthread_t *_backgroundMIGServerThread;
    struct _opaque_pthread_t *_iconGenerationMIGServerThread;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    NSMutableArray *_blocksAwaitingAvailableMemory;
    BBDataProviderConnection *_bulletinBoardConnection;
    NSObject<OS_dispatch_queue> *_bulletinBoardQueue;
    SBCardItemsController *_cardItemsController;
    SBNCNotificationDispatcher *_notificationDispatcher;
    struct __CFBoolean *_shouldDelaySleepForHeadsetClick;
    _Bool _didPlayLockSound;
    SBUserSessionController *_userSessionController;
    id <SBFLockOutStatusProvider> _lockOutController;
    SBFUserAuthenticationController *_authenticationController;
    NSHashTable *_disableActiveOrientationChangeAssertions;
    NSCountedSet *_ignoringInteractionEventsReasons;
    _Bool _hasFinishedLaunching;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_showStatusBarAssertion;
    SBSStatusBarStyleOverridesAssertion *_recordingStatusBarStyleOverrideAssertion;
    _Bool _atHomescreen;
    NSString *_logFile;
    SBBluetoothAccessoryBatteryMonitor *_bluetoothBatteryMonitor;
    SBDeveloperBuildExpirationTrigger *_developerBuildExpirationTrigger;
    SBScreenshotManager *_screenshotManager;
    SSScreenCapturer *_screenCapturer;
    SBSynchronizeCloudCriticalDataOperation *_synchronizeCloudCriticalDataOperation;
    SBRestartManager *_restartManager;
    struct __GSEvent *_pendingDeviceOrientationChangeEventDuringStartupTransition;
    SBModalAlertPresenter *_systemModalAlertPresenter;
    SBModalAlertPresentationCoordinator *_modalAlertPresentationCoordinator;
    SBMainDisplayInterfaceOrientationAggregator *_orientationAggregator;
    _Bool _inUserTransition;
    _Bool _determiningBootTransition;
    _Bool _dontLockEver;
    SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
    id <SBIdleTimer> _idleTimer;
    SBPressPrecedenceArbiter *_pressPrecedenceArbiter;
    SBApplicationAutoLaunchService *_applicationAutoLaunchService;
    SBApplicationLaunchAlertService *_applicationLaunchAlertService;
    SBMainWorkspace *_mainWorkspace;
    SBModalUIFluidDismissGestureManager *_modalUIFluidDismissGestureManager;
    long long _lastUpdatedMirroredDisplayOrientation;
    SBCarDoNotDisturbController *_carDoNotDisturbController;
    SBScreenTimeTrackingController *_screenTimeTrackingController;
    SBProximitySensorManager *_proximitySensorManager;
    id <SBProximityBacklightPolicy> _proximityBacklightPolicy;
    SBExternalDisplayManager *_externalDisplayManager;
    SBUserAgent *_pluginUserAgent;
    SBSpuriousScreenUndimmingAssertion *_preventPowerSourceAlertsDarkBootAssertion;
    long long _lastSeekRequestSource;
    _Bool _requestingStatusBarStyleWithoutConsideringAlerts;
    _Bool _typingActive;
    _Bool _batterySaverModeActive;
    int _nowPlayingProcessPID;
    NSMutableArray *_nowLocatingApps;
    SBWidgetController *_widgetController;
    double _bottomEdgeAmbiguousActivationMargin;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    SBAccountStoreManager *_accountStoreController;
    SBPowerDownController *_powerDownController;
    NSTimer *_daylightSavingsTimer;
    SBCombinationHardwareButton *_combinationHardwareButton;
}

+ (id)_newApplicationLibrary;
+ (void)initializeSystemServices;
+ (void)preFrontBoardInitializationHook;
+ (id)sharedApplicationLibrary;
+ (_Bool)shouldFixMainThreadPriority;
+ (long long)startupInterfaceOrientation;
+ (double)systemIdleSleepInterval;
- (void).cxx_destruct;
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (double)_accessibilityActivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (id)_accessibilityFrontMostApplication;
- (_Bool)_accessibilityIsSystemGestureActive;
- (_Bool)_accessibilityObjectWithinProximity;
- (id)_accessibilityRunningApplications;
- (void)_accessibilitySetSystemGesturesDisabledByAccessibility:(_Bool)arg1;
- (_Bool)_accessibilityShouldAllowAppLaunch;
- (_Bool)_accessibilityShouldAllowIconLaunch;
- (_Bool)_accessibilitySystemGesturesDisabledByAccessibility;
- (id)_accessibilityTopDisplay;
- (void)_activateSafariWithCompletion:(CDUnknownBlockType)arg1;
- (void)_adjustDaylightSavingsTimerAfterSleep;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_adjustSignificantTimersAfterSleep;
- (id)_appIconsToPutInFolderForTest;
- (_Bool)_application:(id)arg1 allowsDraggingItems:(id)arg2;
- (void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2;
- (void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 animating:(_Bool)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (id)_applicationToUseForOpenAndCloseTesting;
- (id)_applicationToUseForScrollTesting;
- (void)_basicRotationTestForCurrentConfigurationWithTeardown:(CDUnknownBlockType)arg1;
- (void)_batterySaverModeChanged:(int)arg1;
- (void)_bringUPSpotlight:(CDUnknownBlockType)arg1;
- (void)_bringUpControlCenter;
- (void)_bringUpCoverSheetWithSetup:(CDUnknownBlockType)arg1 whilePresented:(CDUnknownBlockType)arg2 afterDismiss:(CDUnknownBlockType)arg3;
- (void)_caseLatchWantsToAttemptLock;
- (long long)_classicMode;
- (void)_cleanUpLaunchTestState;
- (void)_cleanupMainWorkspaceForMedusaTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_continueRunningScrollAppSwitcherTest:(id)arg1 runColdTest:(_Bool)arg2;
- (long long)_currentNonFlatDeviceOrientation;
- (id)_dashBoardCombinedListViewController;
- (id)_dashBoardControllerForTesting;
- (id)_dashBoardTodayControllerForTestingIfExists;
- (void)_daylightSavingsTimeChanged;
- (void)_deactivateReachability;
- (id)_defaultExpirationComponents;
- (void)_enqueueWorkspaceEvent:(CDUnknownBlockType)arg1 withName:(id)arg2 ifSatisfiesCondition:(CDUnknownBlockType)arg3 cancelingEventsWithNames:(id)arg4;
- (void)_forceRotateToOrientation:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)_frontMostAppOrientation;
- (void)_handleApplicationExit:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (void)_handleDeviceOrientationChangedEvent:(struct __GSEvent *)arg1;
- (void)_handleGotoHomeScreenShortcut:(id)arg1;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;
- (void)_handleScreenShotShortcut:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleShutDownAndReboot;
- (void)_handleSnapshotButtonHIDEvent:(struct __IOHIDEvent *)arg1 buttonIsDown:(_Bool)arg2 fromSource:(int)arg3;
- (_Bool)_hasForegroundAppWithPID:(int)arg1;
- (void)_headsetButtonDown:(struct __IOHIDEvent *)arg1;
- (void)_headsetButtonUp:(struct __IOHIDEvent *)arg1;
- (void)_iapExtendedModeReset;
- (void)_iapServerConnectionDiedNotification:(id)arg1;
- (void)_imagesMounted;
- (void)_initializeAndStartObservingDefaultsIfNecessary;
- (void)_initializeDeferredItems;
- (_Bool)_isDim;
- (id)_keyWindowForScreen:(id)arg1;
- (void)_keyboardAvailabilityChanged;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1;
- (void)_launchFullscreenApplication:(id)arg1 withLaunchResult:(CDUnknownBlockType)arg2 transactionCompletion:(CDUnknownBlockType)arg3;
- (void)_localeChanged;
- (void)_lockdownActivationChanged:(id)arg1;
- (void)_logReliabilityInfoForEvent:(struct __IOHIDEvent *)arg1;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_medusaTestWithName:(id)arg1 testOptions:(id)arg2;
- (void)_midnightPassed;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (void)_openPIPVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_openURLCore:(id)arg1 display:(id)arg2 animating:(_Bool)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)_performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)_performDeferredLaunchWork;
- (void)_performDelayedHeadsetClickTimeout;
- (void)_performMainWorkspaceTransitionWithPrimaryWorkspaceEntity:(id)arg1 sideWorkspaceEntity:(id)arg2 floatingWorkspaceEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_postActiveInterfaceOrientationChangedNotificationAnimated:(_Bool)arg1;
- (void)_postSpringBoardSignificantTimeChangedNotificationWithLogMessage:(id)arg1;
- (id)_publishFakeCoverSheetNotificationsToDestination:(id)arg1 count:(unsigned long long)arg2;
- (void)_publishFakeLockScreenNotificationsWithCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_publishFakeNotificationsWithCount:(unsigned long long)arg1 requestDestination:(id)arg2 notificationScrollView:(id)arg3 publishBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_publishRequestsForCoverSheetNotificationTests;
- (void)_recordingStateChanged:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_removeRecordingStatusBarStyleOverrideAssertion;
- (void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1;
- (void)_resetForceRotate;
- (void)_retryLaunchTestWithOptions:(id)arg1;
- (void)_returnToHomeScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_returnToHomescreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ringerChanged:(struct __IOHIDEvent *)arg1;
- (void)_rotateFromPortrait:(CDUnknownBlockType)arg1 toLandscape:(CDUnknownBlockType)arg2 andFromLandscape:(CDUnknownBlockType)arg3 andBackToPortrait:(CDUnknownBlockType)arg4;
- (void)_rotateView:(id)arg1 toOrientation:(long long)arg2;
- (void)_rotationCompletion:(id)arg1;
- (void)_runAppOpen:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_runAppSearchDismiss;
- (void)_runAppSearchPresent;
- (void)_runAppSwitcherBringupTestOverApp:(_Bool)arg1 rotated:(_Bool)arg2;
- (void)_runAppSwitcherDismissTestOverApp:(_Bool)arg1 rotated:(_Bool)arg2;
- (void)_runAppSwitcherFourFingerSwipeTest;
- (void)_runBannerTestWithBlock:(CDUnknownBlockType)arg1;
- (void)_runClearLongLookTest;
- (void)_runControlCenterBringupOnLockScreenTest;
- (void)_runControlCenterBringupOverSafariTest;
- (void)_runControlCenterBringupTest;
- (void)_runControlCenterDismissOrbActionsTest;
- (void)_runControlCenterDismissTest;
- (void)_runControlCenterShowOrbActionsTest;
- (void)_runCoverSheetDismissTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runCoverSheetDismissToSafariTest;
- (void)_runCoverSheetNotificationListHistoryHideTest;
- (void)_runCoverSheetNotificationListHistoryRevealTest;
- (void)_runCoverSheetPresentOverSafariTest;
- (void)_runCoverSheetPresentTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runCoverSheetTestPresenting:(_Bool)arg1;
- (void)_runCoverSheetTestPresenting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runDashBoardDismissFromPasscodeViewAfterAuthenticationTest;
- (void)_runDashBoardDismissFromTodayViewWhileAuthenticatedTest;
- (void)_runDashBoardDismissTestFromPageIndex:(unsigned long long)arg1 showPasscodeView:(_Bool)arg2;
- (void)_runDashBoardDismissWhileAuthenticatedTest;
- (void)_runDashBoardPresentDismissPasscode;
- (void)_runDashBoardRotateCameraPage;
- (void)_runDashBoardRotateMainPage;
- (void)_runDashBoardRotateTodayViewPage;
- (void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1;
- (void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1 showSpotlight:(_Bool)arg2;
- (void)_runDashBoardScrollFromLeftToRightPageTestWithBlur:(_Bool)arg1;
- (void)_runDashBoardScrollTestFromPageIndex:(unsigned long long)arg1 toPageWithIndex:(unsigned long long)arg2 subTestName:(id)arg3 backSubTestName:(id)arg4 withBlur:(_Bool)arg5;
- (void)_runDashBoardScrollToLeftPageTestWithBlur:(_Bool)arg1;
- (void)_runDashBoardScrollToRightPageTestWithBlur:(_Bool)arg1;
- (void)_runDashboardTodayViewScrollWidgetsTestWithOptions:(id)arg1;
- (void)_runDismissContinuityBannerInSwitcherTest;
- (void)_runDisplayAlertTest:(id)arg1;
- (void)_runDoSiDoTest;
- (void)_runFloatingDockPresent:(_Bool)arg1 testName:(id)arg2;
- (void)_runHomeScreenIconPullToSpotlight;
- (void)_runHomeScreenIconPullToSpotlightDismiss;
- (void)_runHomeScreenSearchDismiss;
- (void)_runHomeScreenSearchPresent;
- (void)_runHomeScreenSwipeLeftToTodayView;
- (void)_runHomeScreenSwipeRightFromTodayView;
- (void)_runLockScreenScrollNotificationsTestWithOptions:(id)arg1;
- (void)_runLockScreenTodayViewFocusSearchFieldToSpotlight;
- (void)_runLockScreenTodayViewPullDownToSpotlight;
- (void)_runMedusaMoveFloatingApplicationTest:(id)arg1 withOptions:(id)arg2;
- (void)_runMedusaPinFloatingApplicationTest:(id)arg1 withOptions:(id)arg2;
- (void)_runMedusaSplitViewResizeTest:(id)arg1 withOptions:(id)arg2;
- (void)_runMedusaSplitViewSuspendTest:(id)arg1 withOptions:(id)arg2;
- (void)_runMedusaTest:(id)arg1 withMainWorkspaceTransition:(CDUnknownBlockType)arg2 options:(id)arg3;
- (void)_runMedusaUnpinFloatingApplicationTest:(id)arg1 withOptions:(id)arg2;
- (void)_runPresentBannerTest;
- (void)_runPresentContinuityBannerInSwitcherTest;
- (void)_runPresentLongLookTest;
- (void)_runReParkLongLookTest;
- (void)_runScrollAppSwitcherLandscapeTest:(id)arg1 overApp:(_Bool)arg2;
- (void)_runScrollAppSwitcherTest:(id)arg1 overApp:(_Bool)arg2;
- (void)_runScrollIconListTestEditing:(_Bool)arg1;
- (void)_runScrollTestWithScrollView:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runSiriBringUpImmediateBeepTest:(id)arg1;
- (void)_runSiriBringUpTest:(id)arg1 testOptions:(id)arg2;
- (void)_runSpotlightCoverSheetTodayViewRotation;
- (void)_runSpotlightPulldownRotation;
- (void)_runSpotlightTodayViewRotation;
- (void)_runTapContinuityBannerInSwitcherTest;
- (void)_runTestWithVariableFinish:(CDUnknownBlockType)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runTodayViewEditTest;
- (void)_runTodayViewFocusSearchFieldToSpotlight;
- (void)_runTodayViewPullDownToSpotlight;
- (void)_runTodayViewScrollWidgetsTestWithOptions:(id)arg1;
- (void)_runToggleSearchTest;
- (void)_runWidgetLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)_setAmbiguousControlCenterActivationMargin:(double)arg1;
- (void)_setDeferredHeadsetButtonDownEvent:(struct __IOHIDEvent *)arg1;
- (void)_setDeviceOrientation:(long long)arg1 animated:(_Bool)arg2 logMessage:(id)arg3;
@property(retain, nonatomic, setter=_setIdleTimer:) id <SBIdleTimer> idleTimer; // @synthesize idleTimer=_idleTimer;
- (void)_setReachabilitySupported:(_Bool)arg1;
- (void)_setStatusBarOrientation:(long long)arg1 animated:(_Bool)arg2 logMessage:(id)arg3;
- (void)_setStatusBarOrientation:(long long)arg1 logMessage:(id)arg2;
- (void)_setStatusBarShowsProgress:(_Bool)arg1;
- (id)_settingLanguageStringForNewLanguage;
- (void)_setupKeyboardAnimationSubTestsForTestName:(id)arg1;
- (void)_setupMainWorkspaceForMedusaTestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldPendAlertsForTest:(id)arg1;
- (_Bool)_shouldSwallowHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_significantTimeChangeNotificationReceived;
- (void)_significantTimeDidChange:(_Bool)arg1;
- (void)_simulateHomeButtonPress;
- (void)_simulateHomeButtonPressWithCompletion:(CDUnknownBlockType)arg1;
- (void)_simulateLockButtonPress;
- (void)_smartCoverDidClose:(struct __IOHIDEvent *)arg1;
- (void)_smartCoverDidOpen:(struct __IOHIDEvent *)arg1;
- (void)_smartCoverMightHaveOpened:(struct __IOHIDEvent *)arg1;
- (void)_startBulletinBoardServer;
- (void)_startScrollAppSwitcherTest:(id)arg1 overApp:(_Bool)arg2 runColdTest:(_Bool)arg3;
- (void)_startSeekWithDirection:(id)arg1;
- (_Bool)_statusBarOrientationFollowsWindow:(id)arg1;
- (long long)_testOrientation:(id)arg1 options:(id)arg2;
- (void)_toggleFloatingDockVisibility:(id)arg1;
- (void)_toggleSearch;
- (void)_turnScreenOnOnDashBoardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_unlockAnimationDidFinish:(id)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_unscatterWillBegin:(id)arg1;
- (void)_updateHomeScreenPresenceNotification:(id)arg1;
- (void)_updateRingerState:(int)arg1 withVisuals:(_Bool)arg2 updatePreferenceRegister:(_Bool)arg3;
- (_Bool)_useNewDeviceOrientationPropagation;
- (id)_windowForSystemAppButtonEventsForScreen:(id)arg1;
- (void)_withdrawCoverSheetNotificationRequests:(id)arg1;
@property(readonly, nonatomic) SBAccountStoreManager *accountStoreController; // @synthesize accountStoreController=_accountStoreController;
- (long long)activeInterfaceOrientation;
- (long long)activeInterfaceOrientationWithoutConsideringAlerts;
- (void)addActiveOrientationObserver:(id)arg1;
- (void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)addInCallApp:(id)arg1;
- (void)addNowLocatingApp:(id)arg1;
- (long long)alertInterfaceOrientation;
- (_Bool)allowCaseLatchLockAndUnlock;
- (_Bool)application:(id)arg1 canOpenURL:(id)arg2;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
@property(readonly, nonatomic) SBApplicationAutoLaunchService *applicationAutoLaunchService; // @synthesize applicationAutoLaunchService=_applicationAutoLaunchService;
- (void)applicationDidFinishLaunching:(id)arg1;
- (_Bool)applicationIsAliveForSystemWatchdog:(id)arg1;
@property(readonly, nonatomic) SBApplicationLaunchAlertService *applicationLaunchAlertService; // @synthesize applicationLaunchAlertService=_applicationLaunchAlertService;
- (void)applicationOpenURL:(id)arg1;
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 animating:(_Bool)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) NSArray *appsRegisteredForLockButtonEvents; // @synthesize appsRegisteredForLockButtonEvents=_appsRegisteredForLockButtonEvents;
@property(readonly, nonatomic) NSArray *appsRegisteredForVolumeEvents; // @synthesize appsRegisteredForVolumeEvents=_appsRegisteredForVolumeEvents;
- (void)assistant:(id)arg1 viewDidAppear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
@property(readonly, nonatomic) SBFUserAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
- (void)batteryStatusDidChange:(id)arg1;
- (void)beginIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEventsForReason:(id)arg1;
@property(nonatomic) double bottomEdgeAmbiguousActivationMargin; // @synthesize bottomEdgeAmbiguousActivationMargin=_bottomEdgeAmbiguousActivationMargin;
@property(readonly, nonatomic) BBDataProviderConnection *bulletinBoardConnection; // @synthesize bulletinBoardConnection=_bulletinBoardConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *bulletinBoardQueue; // @synthesize bulletinBoardQueue=_bulletinBoardQueue;
- (_Bool)canShowAlerts;
- (_Bool)canShowLockScreenCameraGrabber;
- (_Bool)caseIsEnabledAndLatched;
@property(readonly, nonatomic) SBCombinationHardwareButton *combinationHardwareButton; // @synthesize combinationHardwareButton=_combinationHardwareButton;
- (id)coordinatorRequestedIdleTimerDescriptor:(id)arg1;
@property(retain, nonatomic) NSTimer *daylightSavingsTimer; // @synthesize daylightSavingsTimer=_daylightSavingsTimer;
@property(readonly, copy) NSString *debugDescription;
- (void)didDismissActionSheet;
- (void)didDismissMiniAlert;
- (void)didReceiveMemoryWarning;
- (void)dismissPowerDownAlertWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endIgnoringInteractionEvents;
- (void)endIgnoringInteractionEventsForReason:(id)arg1;
- (void)endLaunchTest;
- (void)exitSpotlight:(id)arg1;
- (_Bool)expectsFaceContact;
- (_Bool)expectsFaceContactInLandscape;
- (void)failedTest:(id)arg1 withResults:(id)arg2;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(CDUnknownBlockType)arg4;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (id)formattedPercentStringForNumber:(id)arg1;
- (void)frontDisplayDidChange:(id)arg1;
- (void)handleDocumentsAndDataURL:(id)arg1 origin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1;
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)handleSignal:(int)arg1;
- (_Bool)hasDisableActiveInterfaceOrientationChangeAssertions;
- (_Bool)hasFinishedLaunching;
@property(readonly, nonatomic) SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
- (long long)homeScreenRotationStyle;
- (_Bool)homeScreenRotationStyleWantsUIKitRotation;
- (_Bool)homeScreenSupportsRotation;
- (_Bool)iapIsInExtendedMode;
@property(readonly, nonatomic) SBIdleTimerPolicyAggregator *idleTimerPolicyAggregator; // @synthesize idleTimerPolicyAggregator=_idleTimerPolicyAggregator;
- (id)inCallApp;
- (id)init;
- (void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (long long)interfaceOrientationForCurrentDeviceOrientation:(_Bool)arg1;
@property(nonatomic, getter=isBatterySaverModeActive) _Bool batterySaverModeActive; // @synthesize batterySaverModeActive=_batterySaverModeActive;
- (_Bool)isBundleIdentifierRestrictionDisabled:(id)arg1;
- (_Bool)isDeterminingBootTransition;
- (_Bool)isKeybagRefetchTransactionActive;
- (_Bool)isLocked;
- (_Bool)isNowPlayingAppPlaying;
- (_Bool)isPowerDownAlertFrontmost;
- (_Bool)isShowingHomescreen;
- (_Bool)isSpringBoardStatusBarHidden;
@property(nonatomic, getter=isTypingActive) _Bool typingActive; // @synthesize typingActive=_typingActive;
- (id)keyCommands;
- (void)languageChanged;
- (_Bool)launchApplicationWithIdentifier:(id)arg1 suspended:(_Bool)arg2;
- (void)launchMusicPlayerSuspended;
- (_Bool)launchedForUserTransition;
@property(readonly, nonatomic) SBApplication *leastRecentlyForegroundLocatingApp;
- (void)localeChanged;
- (void)lockAfterCallDidEndForLockPress:(_Bool)arg1;
@property(readonly, nonatomic) SBLockHardwareButton *lockHardwareButton; // @synthesize lockHardwareButton=_lockHardwareButton;
@property(readonly, nonatomic) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
- (_Bool)lockScreenCameraSupported;
- (id)menuButtonInterceptApp;
- (_Bool)menuButtonInterceptAppEnabledForever;
@property(readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator; // @synthesize modalAlertPresentationCoordinator=_modalAlertPresentationCoordinator;
- (void)modalAlertPresentationCoordinator:(id)arg1 didChangeShowingSystemModalAlert:(_Bool)arg2;
- (void)noteAlertView:(id)arg1 willChangeInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)noteBacklightFadeFinished;
- (void)noteBacklightLevelChanged;
- (void)noteCaseHardwarePresent;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 force:(_Bool)arg4 logMessage:(id)arg5;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 logMessage:(id)arg4;
- (void)noteInterfaceOrientationChanged:(long long)arg1 force:(_Bool)arg2 logMessage:(id)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 logMessage:(id)arg2;
- (void)noteKeybagRefetchTransactionIsActive:(_Bool)arg1;
- (void)noteSceneLayoutDidUpdateOnDisplayWithIdentity:(id)arg1;
- (void)noteSubstantialTransitionOccured;
@property(readonly, nonatomic) SBNCNotificationDispatcher *notificationDispatcher; // @synthesize notificationDispatcher=_notificationDispatcher;
- (void)nowLocatingAppDidEnterForeground:(id)arg1;
@property(retain, nonatomic) NSMutableArray *nowLocatingApps; // @synthesize nowLocatingApps=_nowLocatingApps;
@property(nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
- (id)nowRecordingApp;
@property(readonly, nonatomic) SBMainDisplayInterfaceOrientationAggregator *orientationAggregator;
@property(readonly, nonatomic) id <SBUIUserAgent> pluginUserAgent; // @synthesize pluginUserAgent=_pluginUserAgent;
- (void)popTransientActiveInterfaceOrientationForReason:(id)arg1;
- (void)powerDownCanceled:(id)arg1;
@property(retain, nonatomic) SBPowerDownController *powerDownController; // @synthesize powerDownController=_powerDownController;
- (void)powerDownRequested:(id)arg1;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)proximityEventsEnabled;
@property(readonly, nonatomic) SBProximitySensorManager *proximitySensorManager; // @synthesize proximitySensorManager=_proximitySensorManager;
- (void)pushTransientActiveInterfaceOrientation:(long long)arg1 forReason:(id)arg2;
- (long long)rawDeviceOrientationIgnoringOrientationLocks;
- (void)registerAnalyticsEventHandlers;
- (void)removeActiveOrientationObserver:(id)arg1;
- (void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)removeInCallApp;
- (void)removeNowLocatingApp:(id)arg1;
- (void)requestDeviceUnlock;
- (void)resetIdleTimerAndUndim;
@property(readonly, nonatomic) SBRestartManager *restartManager; // @synthesize restartManager=_restartManager;
- (void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;
- (void)restartManagerExitImminent:(id)arg1;
- (void)restartManagerWillReboot:(id)arg1;
- (void)restartManagerWillShutdown:(id)arg1;
- (void)rotateIfNeeded:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runFieldTestScript;
- (void)runFolderRotationTest:(int)arg1;
- (void)runHomeScreenRotationIterationWithRemainingIterations:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runHomeScreenRotationTest:(int)arg1;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)screenCapturer:(id)arg1 didCaptureScreenshotsOfScreens:(id)arg2;
@property(readonly, nonatomic) SBScreenshotManager *screenshotManager; // @synthesize screenshotManager=_screenshotManager;
- (void)setAppDisabledNowPlayingHUD:(_Bool)arg1 bundleIdentifier:(id)arg2;
- (void)setAppRegisteredForLockButtonEvents:(id)arg1 isActive:(_Bool)arg2;
- (void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(_Bool)arg2;
- (void)setExpectsFaceContact:(_Bool)arg1;
- (void)setExpectsFaceContact:(_Bool)arg1 inLandscape:(_Bool)arg2;
- (void)setMenuButtonInterceptApp:(id)arg1 forever:(_Bool)arg2;
- (void)setNextAssistantRecognitionStrings:(id)arg1;
- (id)setNextVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1 forProcessWithPID:(int)arg2;
- (void)setProximityEventsEnabled:(_Bool)arg1;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forAudioCategory:(id)arg2;
- (void)setUpDaylightSavingsTimer;
- (void)setWantsOrientationEvents:(_Bool)arg1 logMessage:(id)arg2;
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;
- (void)setupMidnightTimer;
- (_Bool)shouldNeverLock;
- (_Bool)shouldShowAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (void)showPowerDownAlert;
- (void)significantTimeChange;
- (_Bool)smartCoverIsClosed;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;
- (void)startedTest:(id)arg1;
- (int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (_Bool)supportsPortraitUpsideDownOrientation;
- (void)systemControllerRouteChanged:(id)arg1;
- (void)takeScreenshot;
- (void)takeScreenshotAndEdit:(_Bool)arg1;
- (void)toggleSearchWithWillBeginHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)underMemoryPressure;
- (void)updateMirroredDisplayOrientationWithLogMessage:(id)arg1;
- (void)updateNativeOrientationAndMirroredDisplays:(_Bool)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationAnimated:(_Bool)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationWithLogMessage:(id)arg1;
- (void)updateNativeOrientationWithOrientation:(long long)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationWithOrientation:(long long)arg1 updateMirroredDisplays:(_Bool)arg2 animated:(_Bool)arg3 logMessage:(id)arg4;
- (void)updateOrientationDetectionSettings;
- (void)updateProximitySettings;
- (void)userDefaultsDidChange:(id)arg1;
@property(readonly, nonatomic) SBUserSessionController *userSessionController; // @synthesize userSessionController=_userSessionController;
@property(readonly, nonatomic) SBVolumeHardwareButton *volumeHardwareButton; // @synthesize volumeHardwareButton=_volumeHardwareButton;
@property(readonly, nonatomic) _Bool wantsOrientationEvents;
@property(readonly, nonatomic) SBWidgetController *widgetController; // @synthesize widgetController=_widgetController;
- (void)willDismissMiniAlert;
- (void)willDisplayMiniAlert;
- (double)windowRotationDuration;
- (void)wipeDeviceNowWithReason:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

