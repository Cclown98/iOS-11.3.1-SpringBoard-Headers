//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSSettings, NSString;

@protocol BSSettingDescriptionProvider <NSObject>

@optional
- (NSString *)keyDescriptionForSetting:(unsigned long long)arg1;
- (NSString *)settings:(BSSettings *)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (NSString *)settings:(BSSettings *)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
@end

