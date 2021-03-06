//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconModel.h"

@class NSArray, NSString;

@interface SBCarPlayIconModel : SBIconModel
{
    NSArray *_metadata_hiddenBundleIdentifiers;
    struct CGRect _metadata_screenBounds;
    _Bool _metadata_showsOEMIcon;
    NSString *_metadata_OEMIconLabel;
    _Bool _current_isSet;
    struct CGRect _current_screenBounds;
    _Bool _current_showsOEMIcon;
    NSString *_current_OEMIconLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *OEMIconLabel;
- (void)_importStateWithoutLayout:(id)arg1;
@property(readonly, nonatomic) unsigned long long columnCount;
- (void)didUnarchiveMetadata:(id)arg1;
- (id)exportStateForCarKit;
@property(readonly, nonatomic) NSArray *hiddenBundleIdentifiers; // @synthesize hiddenBundleIdentifiers=_metadata_hiddenBundleIdentifiers;
- (id)iconModelMetadata;
- (_Bool)importState:(id)arg1;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;
- (_Bool)isIconVisible:(id)arg1;
- (void)persistIconStateWithoutLayout;
- (void)resetCurrentIconState;
@property(readonly, nonatomic) unsigned long long rowCount;
@property(readonly, nonatomic) struct CGRect screenBounds;
- (void)setCurrentConnectionScreenBounds:(struct CGRect)arg1 oemVisibility:(_Bool)arg2 withLabel:(id)arg3;
@property(readonly, nonatomic) _Bool showsOEMIcon;

@end

