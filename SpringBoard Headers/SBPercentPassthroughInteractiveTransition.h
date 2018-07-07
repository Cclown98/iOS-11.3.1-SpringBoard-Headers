//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBViewControllerInteractiveTransitioning.h"

@class NSString;

@interface SBPercentPassthroughInteractiveTransition : NSObject <SBViewControllerInteractiveTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;
    double _completionSpeed;
    long long _completionCurve;
}

- (void).cxx_destruct;
- (void)cancelTransition;
@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
- (void)finishInteractiveTransition;
- (id)init;
- (void)startInteractiveTransition:(id)arg1;
- (_Bool)supportsRestarting;
- (void)updateTransition:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end
