//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIStatusBarStyleDelegate.h"

@class NSMutableSet, NSString, SBStarkStatusBarDockController, SBStarkStatusBarStateProvider, UIStatusBar, UIView;

@interface SBStarkStatusBarViewController : UIViewController <UIStatusBarStyleDelegate>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkStatusBarStateProvider *_statusBarStateProvider;
    UIStatusBar *_statusBarView;
    id <UIStatusBarStyleDelegate> _statusBarStyleDelegate;
    NSMutableSet *_statusBarHideReasons;
    long long _requestedStyle;
    _Bool _styleHasBeenRequested;
    double _statusBarWidth;
    UIView *_separatorView;
    _Bool _separatorHidden;
    id <SBStarkStatusBarViewControllerDelegate> _delegate;
    SBStarkStatusBarDockController *_dockController;
}

- (void).cxx_destruct;
- (void)_backPressed:(id)arg1;
- (_Bool)_isStatusBarHidden;
- (void)_layoutStatusBar:(id)arg1;
@property(readonly, nonatomic) SBStarkStatusBarDockController *dockController;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden;
- (void)loadView;
- (id)newFakeStatusBar;
- (id)newFakeStatusBarWithStyle:(long long)arg1;
- (void)setActiveBundleIdentifier:(id)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
@property(nonatomic) __weak id <UIStatusBarStyleDelegate> statusBarStyleDelegate;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
@property(readonly, nonatomic) SBStarkStatusBarStateProvider *statusBarStateProvider;
- (void)updateStatusBarWithRequestedStyle:(long long)arg1 animationFactory:(id)arg2;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

