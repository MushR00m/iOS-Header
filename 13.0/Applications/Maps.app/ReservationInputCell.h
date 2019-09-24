//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ReservationTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface ReservationInputCell : ReservationTableViewCell <UITextFieldDelegate>
{
    NSString *_previousValue;
    _Bool _required;
    long long _type;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool required; // @synthesize required=_required;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text;
- (id)detailTextColor;
- (void)setDetailTextColor:(id)arg1;
@property(copy, nonatomic) NSString *placeholderText;
- (void)updateTextColorForText:(id)arg1;
- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)configureTextField;
- (void)loadDetailView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
