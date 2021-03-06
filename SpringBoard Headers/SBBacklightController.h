//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, SBHIDUILockAssertion, SBIdleTimerDefaults;

@interface SBBacklightController : NSObject
{
    SBIdleTimerDefaults *_idleTimerDefaults;
    _Bool _isPendingScreenUnblankAfterCACommit;
    NSMutableSet *_temporaryDisabledReasons;
    long long _lastBacklightChangeSource;
    SBHIDUILockAssertion *_currentHIDUILockAssertion;
}

+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (void).cxx_destruct;
- (void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 silently:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_deferredScreenUnblankDone;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;
- (void)_startFadeOutAnimationFromLockSource:(int)arg1;
- (void)_suspendProxAndMultitouch:(_Bool)arg1 source:(long long)arg2;
- (void)_undimFromSource:(long long)arg1;
- (void)allowIdleSleep;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) double backlightFactor;
@property(retain, nonatomic) SBHIDUILockAssertion *currentHIDUILockAssertion; // @synthesize currentHIDUILockAssertion=_currentHIDUILockAssertion;
- (double)defaultLockScreenDimInterval;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (id)init;
@property(readonly, nonatomic) _Bool isPendingScreenUnblankAfterCACommit; // @synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit;
@property(readonly, nonatomic) long long lastBacklightChangeSource; // @synthesize lastBacklightChangeSource=_lastBacklightChangeSource;
- (void)preventIdleSleep;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)reloadDefaults;
@property(readonly, nonatomic) _Bool screenIsDim;
@property(readonly, nonatomic) _Bool screenIsOn;
- (void)setBacklightFactor:(float)arg1 source:(long long)arg2;
- (void)setBacklightFactorPending:(float)arg1;
- (void)setBacklightWakeTemporarilyDisabled:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)shouldTurnOnScreenForBacklightSource:(long long)arg1;
- (void)turnOnScreenFullyWithBacklightSource:(long long)arg1;

@end

