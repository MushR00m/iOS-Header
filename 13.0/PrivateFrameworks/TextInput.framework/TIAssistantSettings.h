//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TIAssistantSettings : NSObject
{
}

+ (void)launchDictationSettings;
+ (void)launchKeyboardSettings;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissDialog;
+ (void)promptToEnableDictationWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)presentDialogForType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)connectForOperations:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
+ (void)setTestBlock:(CDUnknownBlockType)arg1;

@end
