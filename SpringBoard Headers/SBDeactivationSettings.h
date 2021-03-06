//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSSettingDescriptionProvider.h"
#import "NSCopying.h"
#import "SBDeactivationSettings.h"

@class BSMutableSettings, NSString;

@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding>
{
    BSMutableSettings *_settings;
}

- (void).cxx_destruct;
- (void)applyDeactivationSettings:(id)arg1;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (void)clearDeactivationSettings;
- (id)copyDeactivationSettings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

