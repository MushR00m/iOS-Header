//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface COSTritiumDetailController : PSListController
{
    PSSpecifier *_privacyGroupSpecifier;
    PSSpecifier *_privacySpecifier;
}

- (void).cxx_destruct;
- (id)tritiumPrivacyEnabled:(id)arg1;
- (void)setTritiumPrivacyEnabled:(id)arg1 specifier:(id)arg2;
- (id)tritiumEnabled:(id)arg1;
- (void)setTritiumEnabled:(id)arg1 specifier:(id)arg2;
- (void)_updatePrivacyRowVisibility;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end
