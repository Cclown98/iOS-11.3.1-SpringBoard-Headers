//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIBannerItem.h"

@class NSArray, NSDate, NSHashTable, NSMutableSet, NSString, UIImage;

@interface SBStarkBannerItem : SBUIBannerItem
{
    id <SBStarkSessionConfiguring> _configuration;
    NSHashTable *_observers;
    NSMutableSet *_displayReasons;
}

- (void).cxx_destruct;
- (void)_callOrFaceTimeStateChanged;
- (_Bool)_inCallOrFaceTime;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) UIImage *categoryImage;
@property(readonly, nonatomic) id <SBStarkSessionConfiguring> configuration; // @synthesize configuration=_configuration;
- (void)dealloc;
@property(readonly, nonatomic) long long defaultActionType;
@property(readonly, nonatomic) long long effectiveDefaultActionType;
- (CDUnknownBlockType)ignoreAction;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)isStarkBannerItem;
- (_Bool)matchesContext:(id)arg1;
@property(readonly, copy, nonatomic) NSString *message;
- (void)reloadDisplayProperties;
- (void)removeObserver:(id)arg1;
- (_Bool)shouldShowModalSubActions;
@property(readonly, nonatomic) NSDate *sourceDate;
@property(readonly, copy, nonatomic) NSArray *subActionLabels;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;

@end

