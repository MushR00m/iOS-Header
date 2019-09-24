//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/UITextPasteConfigurationSupporting-Protocol.h>

@class NSArray, NSAttributedString, UITextInputController, UITextRange;
@protocol UITextPasteSession;

@protocol UITextPasteConfigurationSupporting_Internal <UITextPasteConfigurationSupporting, UITextInput>
- (NSAttributedString *)_attributedStringForInsertionOfAttributedString:(NSAttributedString *)arg1;
- (_Bool)allowsEditingTextAttributes;
- (NSArray *)_implicitPasteConfigurationClasses;
- (UITextInputController *)_inputController;
- (void)removeInvisibleRange:(UITextRange *)arg1;
- (void)addInvisibleRange:(UITextRange *)arg1;
- (void)layoutIfNeeded;

@optional
+ (Class)_textPasteItemClass;
- (void)_pasteSessionDidFinish:(id <UITextPasteSession>)arg1;
@end
