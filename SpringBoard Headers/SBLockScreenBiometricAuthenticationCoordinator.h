//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "PKPassLibraryDelegate.h"
#import "SBBiometricUnlockBehaviorDelegate.h"
#import "SBUIBiometricResourceObserver.h"
#import "SBUIPasscodeBiometricMatchingAssertionFactory.h"
#import "SBWalletPrearmRecognizerDelegate.h"

@class NSHashTable, NSMutableOrderedSet, NSString, PKPassLibrary, SBUIBiometricResource, SBWalletPreArmController, SBWalletPrearmRecognizer, _SBPendingMesaUnlockBehaviorUnlockRequest;

@interface SBLockScreenBiometricAuthenticationCoordinator : NSObject <BSDescriptionProviding, SBUIBiometricResourceObserver, SBBiometricUnlockBehaviorDelegate, SBWalletPrearmRecognizerDelegate, PKPassLibraryDelegate, SBUIPasscodeBiometricMatchingAssertionFactory>
{
    SBUIBiometricResource *_biometricResource;
    id <BSInvalidatable> _fingerDetectEnabledAssertion;
    id <SBLockScreenBiometricAuthenticationCoordinatorDelegate> _delegate;
    id <SBBiometricUnlockBehavior> _autoUnlockBehavior;
    SBWalletPreArmController *_walletPreArmController;
    SBWalletPrearmRecognizer *_walletPrearmRecognizer;
    _Bool _presentingWalletInterface;
    _Bool _didMatchBeforeWalletPrearmRecognizerTimeout;
    PKPassLibrary *_passLibrary;
    unsigned long long _state;
    _Bool _isAuthenticated;
    id <BSInvalidatable> _matchingWantedAssertion;
    unsigned long long _matchingWantedAssertionMode;
    _Bool _bioAuthenticatedWhileMenuButtonDown;
    _SBPendingMesaUnlockBehaviorUnlockRequest *_pendingUnlockRequest;
    NSMutableOrderedSet *_activePasscodeMatchAssertions;
    NSHashTable *_disabledAssertions;
    NSHashTable *_disabledUnlockAssertions;
    NSHashTable *_disabledAutoUnlockAssertions;
}

- (void).cxx_destruct;
- (void)_addPasscodeMatchingAssertion:(id)arg1;
- (void)_clearFingerDetectAssertion;
- (void)_clearPendingUnlockRequest;
- (void)_createFingerDetectAssertion;
@property(retain, nonatomic, getter=_getPassLibrary, setter=_setPassLibrary:) PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
- (void)_handlePassKitDismissalIfNecessaryWithReason:(id)arg1;
- (_Bool)_hasActivePasscodeViews;
- (void)_invalidateWalletPreArmRecognizer;
- (_Bool)_isMatchingEffectivelyDisabled;
- (_Bool)_isWalletPreArmAllowed;
- (void)_noteMenuButtonDoublePress;
- (void)_noteMenuButtonSinglePress;
- (void)_pendUnlockRequest:(id)arg1;
- (void)_removePasscodeMatchingAssertion:(id)arg1;
- (void)_resetStateForReason:(id)arg1;
@property(retain, nonatomic, getter=_setAutoUnlockBehavior, setter=_setAutoUnlockBehavior:) id <SBBiometricUnlockBehavior> autoUnlockBehavior; // @synthesize autoUnlockBehavior=_autoUnlockBehavior;
- (void)_setState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_setupPreArmRecognizerIfPossibleForReason:(id)arg1;
@property(readonly, nonatomic, getter=_state) unsigned long long state; // @synthesize state=_state;
- (void)_stateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)_stateWantsMatching:(unsigned long long)arg1 outMatchMode:(unsigned long long *)arg2;
- (void)_toggleAutoUnlockBehaviorEnabled:(_Bool)arg1;
- (void)_updateMatchingForState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_walletPreArmDisabledDidChange:(id)arg1;
@property(readonly, nonatomic, getter=_walletPrearmRecognizer) SBWalletPrearmRecognizer *walletPrearmRecognizer; // @synthesize walletPrearmRecognizer=_walletPrearmRecognizer;
- (id)acquireDisableAutoUnlockAssertionForReason:(id)arg1;
- (id)acquireDisableCoordinatorAssertionForReason:(id)arg1;
- (id)acquireDisableUnlockAssertionForReason:(id)arg1;
- (id)acquireDisableWalletPreArmAssertionForReason:(id)arg1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
@property(nonatomic) _Bool bioAuthenticatedWhileMenuButtonDown; // @synthesize bioAuthenticatedWhileMenuButtonDown=_bioAuthenticatedWhileMenuButtonDown;
- (void)biometricResource:(id)arg1 matchingAllowedDidChange:(_Bool)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
@property(nonatomic) __weak id <SBLockScreenBiometricAuthenticationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithBiometricResource:(id)arg1 walletPreArmController:(id)arg2;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_isAuthenticated;
@property(readonly, nonatomic, getter=isAutoUnlockingDisabled) _Bool autoUnlockingDisabled;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isUnlockingDisabled) _Bool isUnlockingDisabled;
@property(readonly, nonatomic, getter=isWalletPreArmDisabled) _Bool walletPreArmDisabled;
- (void)passLibraryReceivedInterruption;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)walletPrearmRecognizer:(id)arg1 didFailToRecognizeForReason:(unsigned long long)arg2;
- (void)walletPrearmRecognizerDidRecognize:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

