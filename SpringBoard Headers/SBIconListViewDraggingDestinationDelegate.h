//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSpringLoadedInteractionBehaviorDelegate.h"
#import "SBSpringLoadedInteractionEffectDelegate.h"
#import "UIDropInteractionDelegate.h"

@class NSMapTable, NSMutableSet, NSString, SBIconListView, SBIconListViewDraggingDataPolicyHandler, UIDropInteraction;

@interface SBIconListViewDraggingDestinationDelegate : NSObject <SBSpringLoadedInteractionBehaviorDelegate, SBSpringLoadedInteractionEffectDelegate, UIDropInteractionDelegate>
{
    NSMapTable *_dragObservers;
    NSMutableSet *_activeDragSessions;
    NSMutableSet *_dragSessionsWaitingForConcludeDrop;
    _Bool _waitingForConcludeDrag;
    SBIconListView *_iconListView;
    UIDropInteraction *_dropInteraction;
    unsigned long long _currentDragType;
    id <SBIconListViewDraggingPolicyHandling> _currentPolicyHandler;
    SBIconListViewDraggingDataPolicyHandler *_springLoadingPolicyHandler;
}

+ (unsigned long long)dragTypeForDropSession:(id)arg1;
- (void).cxx_destruct;
- (void)_handleSpringloadAndComplete:(id)arg1;
- (void)addDragObserver:(id)arg1 forDropSession:(id)arg2;
@property(nonatomic) unsigned long long currentDragType; // @synthesize currentDragType=_currentDragType;
@property(retain, nonatomic) id <SBIconListViewDraggingPolicyHandling> currentPolicyHandler; // @synthesize currentPolicyHandler=_currentPolicyHandler;
@property(readonly, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)enumerateDragObserversForDropSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) __weak SBIconListView *iconListView; // @synthesize iconListView=_iconListView;
- (id)initWithIconListView:(id)arg1;
- (_Bool)isDropSessionWaitingForConcludeDrop:(id)arg1;
@property(nonatomic, getter=isWaitingForConcludeDrag) _Bool waitingForConcludeDrag; // @synthesize waitingForConcludeDrag=_waitingForConcludeDrag;
- (void)markDropSessionAsWaitingForConcludeDrop:(id)arg1;
- (void)removeAllDragObserversForDropSession:(id)arg1;
@property(retain, nonatomic) SBIconListViewDraggingDataPolicyHandler *springLoadingPolicyHandler; // @synthesize springLoadingPolicyHandler=_springLoadingPolicyHandler;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint)arg2 forDropSession:(id)arg3;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;
- (void)unmarkDropSessionAsWaitingForConcludeDrop:(id)arg1;
- (_Bool)updateCurrentPolicyHandlerForDropSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

