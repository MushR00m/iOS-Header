//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LSAltIconManager : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)_setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 withIconsDictionary:(id)arg3 error:(id *)arg4;
- (_Bool)isValidAlternateIcon:(id)arg1 forIconsDict:(id)arg2;
- (void)_setPreferredIconName:(id)arg1 forIdentifier:(id)arg2;
- (id)_getPreferredIconNameForIdentifier:(id)arg1;
- (void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getAlternateIconNameForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)clearAlternateNameForBundleIdentifier:(id)arg1 validationDictionary:(id)arg2;
- (id)init;

@end
