//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIPluginHost.h"

#import "SBDashBoardExternalBehaviorProviding.h"
#import "SBHomeGestureParticipantDelegate.h"
#import "SBIdleTimerProviding.h"
#import "_UISettingsKeyObserver.h"

@class BSEventQueue, FBDisplayLayoutElement, FBUIApplicationSceneDeactivationAssertion, NSHashTable, NSMutableSet, NSString, SBAssistantWindow, SBFAuthenticationAssertion, SBHomeGestureParticipant, SBMiscellaneousSystemAnimationSettings, UIViewController<SBUIPluginViewControllerInterface>;

@interface SBAssistantController : SBUIPluginHost <SBDashBoardExternalBehaviorProviding, _UISettingsKeyObserver, SBHomeGestureParticipantDelegate, SBIdleTimerProviding>
{
    BSEventQueue *_operationQueue;
    NSString *_appDisplayIDBeingHosted;
    SBAssistantWindow *_assistantWindow;
    _Bool _unlockedDevice;
    _Bool _launchedInStark;
    _Bool _isHidingOtherWindows;
    int _activationEvent;
    SBFAuthenticationAssertion *_disableAssertion;
    NSMutableSet *_dismissingReasons;
    long long _pendingDismissViewType;
    NSHashTable *_observers;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBHomeGestureParticipant *_homeGestureParticipant;
    UIViewController<SBUIPluginViewControllerInterface> *_mainScreenViewController;
    FBDisplayLayoutElement *_mainDisplayLayoutElement;
    FBDisplayLayoutElement *_starkDisplayLayoutElement;
    id <BSInvalidatable> _hideApplicationModalAlertsAssertion;
    NSString *_pendedCarPlayActivationBundleIdentifier;
    SBMiscellaneousSystemAnimationSettings *_settings;
    id <SBIdleTimer> _idleTimer;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
}

+ (_Bool)isAssistantRunningHidden;
+ (_Bool)isAssistantViewVisible:(long long)arg1;
+ (_Bool)isAssistantVisible;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (_Bool)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1;
+ (_Bool)shouldEnterAssistant;
+ (_Bool)supportedAndEnabled;
- (void).cxx_destruct;
- (id)_activationSettingsWithDismissalDisallowed:(_Bool)arg1;
- (void)_bioAuthenticated:(id)arg1;
- (void)_createAssistantWindowIfNecessary;
- (double)_defaultAnimatedDismissDurationForMainScreen;
- (void)_dismissForMainScreenWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissUIPlugin:(id)arg1 animated:(_Bool)arg2;
- (id)_fakeStatusBarForOrientation:(long long)arg1;
@property(nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
- (id)_idleTimerDescriptor;
- (_Bool)_isDismissingAllViews;
- (_Bool)_isPluginLoaded;
- (void)_loadPlugin;
- (void)_notePluginVisibilityDidChange;
- (void)_notifyObserversViewDidAppear:(long long)arg1;
- (void)_notifyObserversViewDidDisappear:(long long)arg1;
- (void)_notifyObserversViewWillAppear:(long long)arg1;
- (void)_notifyObserversViewWillDisappear:(long long)arg1;
- (void)_presentForMainScreenAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prototypeSettingsChanged;
- (void)_removeFakeStatusBar:(id)arg1;
- (void)_starkSiriDidAppear:(id)arg1;
- (void)_starkSiriDidDisappear:(id)arg1;
- (void)_starkSiriWillAppear:(id)arg1;
- (void)_starkSiriWillDisappear:(id)arg1;
- (void)_toggleModalAlertHidingAssertion:(_Bool)arg1;
- (void)_updateRootViewControllerOwnsHomeGesture;
- (void)_updateSceneClientSettings;
- (void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 setShowsStatusBar:(_Bool)arg2;
- (void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2;
- (void)_viewDidAppearOnMainScreen:(_Bool)arg1;
- (void)_viewDidAppearWithType:(long long)arg1;
- (void)_viewDidDisappearOnMainScreen:(_Bool)arg1;
- (void)_viewDidDisappearWithType:(long long)arg1;
- (void)_viewWillAppearOnMainScreen:(_Bool)arg1;
- (void)_viewWillDisappearOnMainScreen:(_Bool)arg1;
- (_Bool)activateIgnoringTouches;
- (_Bool)activatePluginForEvent:(int)arg1 eventSource:(int)arg2 context:(void *)arg3;
- (id)activationSettings;
- (void)addObserver:(id)arg1;
- (id)coordinatorRequestedIdleTimerDescriptor:(id)arg1;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)dealloc;
- (void)dismissAssistantView:(long long)arg1 forAlertActivation:(id)arg2;
- (void)dismissAssistantViewIfNecessary:(long long)arg1;
- (void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2;
- (void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAssistantViewIfNecessary:(long long)arg1 withAnimation:(long long)arg2 factory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissPluginForEvent:(int)arg1;
- (_Bool)handleSiriButtonDownEventFromSource:(int)arg1 activationEvent:(int)arg2;
- (void)handleSiriButtonUpEventFromSource:(int)arg1;
- (void)handleSiriPreheatCommand;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
- (id)init;
- (_Bool)isAssistantViewVisible:(long long)arg1;
- (id)mainScreenView;
@property(readonly, nonatomic) long long notificationBehavior;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) long long participantState;
- (_Bool)pluginSuppressesNotifications;
- (_Bool)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;
- (_Bool)pluginWantsInterfaceOrientation:(long long *)arg1;
- (_Bool)pluginWantsScreenDimInterval:(double *)arg1;
- (void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
@property(readonly, nonatomic) long long proximityDetectionMode;
- (void)removeObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(nonatomic) _Bool unlockedDevice; // @synthesize unlockedDevice=_unlockedDevice;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1;
- (_Bool)shouldEnterAssistant;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)supportedAndEnabled;
- (id)transferOwnershipOfAuthenticationAssertion;
- (void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(long long)arg2 animated:(_Bool)arg3;
- (void)uiPlugin:(id)arg1 isNowRunning:(_Bool)arg2;
- (_Bool)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(_Bool)arg4;
- (_Bool)uiPlugin:(id)arg1 openURL:(id)arg2;
- (void)uiPlugin:(id)arg1 setExpectsFaceContact:(_Bool)arg2;
- (void)uiPluginAttemptBiometricUnlock;
- (_Bool)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
- (void)uiPluginUserEventOccurred:(id)arg1;
- (_Bool)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)window;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

