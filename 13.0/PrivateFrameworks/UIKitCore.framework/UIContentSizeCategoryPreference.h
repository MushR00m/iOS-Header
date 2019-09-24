//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIContentSizeCategoryPreference : NSObject
{
    NSString *_preferredContentSizeCategory;
    NSString *_preferredContentSizeCategoryCarPlay;
}

+ (void)_populateUserDefaultsContentSizeCategory:(id *)arg1 carPlay:(id *)arg2;
+ (id)system;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(CDUnknownBlockType)arg2;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1;
+ (void)_resetSystemPreferenceOverride;
+ (void)resetSystemPreferenceOverride;
+ (void)overrideSystemWithPreference:(id)arg1;
+ (void)overrideSystemWithPreference:(id)arg1 forBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *preferredContentSizeCategoryCarPlay; // @synthesize preferredContentSizeCategoryCarPlay=_preferredContentSizeCategoryCarPlay;
@property(retain, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)checkForChanges;
- (id)init;
- (id)initWithRawUserDefaults;
- (id)initWithContentSizeCategory:(id)arg1 carPlay:(id)arg2;
- (id)initWithContentSizeCategory:(id)arg1;

@end
