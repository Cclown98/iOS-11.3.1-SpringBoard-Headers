//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNestingViewController.h"

@class SBIconViewMap, SBLeafIcon, SBSceneLayoutAnimationWrapperView, SBSceneLayoutElementAnimationWrapperView, SBWorkspaceTransitionRequest;

@interface SBLeafIconViewController : SBNestingViewController
{
    SBSceneLayoutAnimationWrapperView *_sceneLayoutView;
    SBSceneLayoutElementAnimationWrapperView *_primaryAppView;
    SBLeafIcon *_leafIcon;
    long long _orientation;
    SBIconViewMap *_viewMap;
    SBWorkspaceTransitionRequest *_transitionRequest;
}

- (void).cxx_destruct;
- (void)_updateSceneLayoutView;
- (id)borrowPrimaryAppView;
- (id)initWithLeafIcon:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;
@property(readonly, nonatomic) SBLeafIcon *leafIcon; // @synthesize leafIcon=_leafIcon;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) SBSceneLayoutElementAnimationWrapperView *primaryAppView;
- (void)returnPrimaryAppView;
@property(retain, nonatomic) SBWorkspaceTransitionRequest *transitionRequest; // @synthesize transitionRequest=_transitionRequest;
- (void)viewDidLoad;
@property(readonly, nonatomic) SBIconViewMap *viewMap; // @synthesize viewMap=_viewMap;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;

@end
