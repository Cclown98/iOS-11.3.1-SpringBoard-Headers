//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAutoUnlockRule.h"

@class NSMutableSet, NSString;

@interface SBAutoUnlockComposableRule : NSObject <SBAutoUnlockRule>
{
    NSMutableSet *_rules;
}

- (void).cxx_destruct;
- (void)addAutoUnlockRule:(id)arg1;
- (id)init;
- (void)removeAutoUnlockRule:(id)arg1;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

