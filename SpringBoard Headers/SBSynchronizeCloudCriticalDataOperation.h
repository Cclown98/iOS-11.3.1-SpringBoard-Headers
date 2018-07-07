//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue, SBBootDefaults;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject
{
    _Bool _needsSync;
    SBBootDefaults *_queue_bootDefaults;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_queue_operationGroup;
    unsigned long long _queue_operationCount;
    _Bool _queue_isComplete;
    double _queue_startTime;
    NSMutableArray *_testOperations;
}

- (void).cxx_destruct;
- (void)_addTestOperation:(id)arg1;
- (void)_fetchDomains:(id)arg1 fromIndex:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_pendingOperationCount;
- (void)_queue_addOperation:(id)arg1;
- (id)_queue_fetchCloudAccountOperation;
- (id)_queue_fetchCloudDefaultsOperation;
- (id)_queue_fetchMDMProfilesOperation;
- (_Bool)_queue_isComplete;
- (id)_queue_migrateSoundPreferencesOperation;
- (void)_queue_startFetchingCloudCriticalData;
- (id)init;
- (id)initWithDefaults:(id)arg1 userManager:(id)arg2;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
- (void)startSynchronize;
- (_Bool)waitForSynchronizeToCompleteWithTimeout:(double)arg1;

@end
