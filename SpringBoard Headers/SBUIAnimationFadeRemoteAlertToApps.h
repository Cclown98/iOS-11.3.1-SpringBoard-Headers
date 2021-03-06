//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class NSArray, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBUIAnimationFadeRemoteAlertToApps : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBMainAlertManager *_alertManager;
    SBSceneLayoutAnimationWrapperView *_appLayoutWrapperView;
    NSArray *_accessoryHostWrappers;
    UIView *_alertHostView;
}

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (id)_getTransitionWindow;
- (void)_prepareAnimation;
- (void)_setHidden:(_Bool)arg1;
- (_Bool)_shouldDismissBanner;
- (void)_startAnimation;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (double)animationDuration;
- (id)animationSettings;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

