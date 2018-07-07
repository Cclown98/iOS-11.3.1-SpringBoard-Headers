//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFTouchPassThroughView.h"

#import "CAAnimationDelegate.h"

@class NSArray, NSString;

@interface SBShakableView : SBFTouchPassThroughView <CAAnimationDelegate>
{
    CDUnknownBlockType _shakeCompletionBlock;
    SBFTouchPassThroughView *_containerView;
    NSArray *_prototypeSpringAnimations;
    double _shakeDistance;
}

- (void).cxx_destruct;
- (id)_defaultSpringAnimations;
- (void)_invokeCompletionBlockIfNecessary;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)beginShakingWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SBFTouchPassThroughView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSArray *prototypeSpringAnimations; // @synthesize prototypeSpringAnimations=_prototypeSpringAnimations;
@property(nonatomic) double shakeDistance; // @synthesize shakeDistance=_shakeDistance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
