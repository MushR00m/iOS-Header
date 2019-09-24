//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSDecimalNumber, NSNumberFormatter, NSString, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;
@protocol PKEnterValueNewBalanceViewDelegate;

@interface PKEnterValueNewBalanceView : UIView <UIGestureRecognizerDelegate>
{
    NSDecimalNumber *_additionalAmount;
    _Bool _subtractAdditionalAmountFromCurrentAmount;
    _Bool _showSpinner;
    NSNumberFormatter *_currentAmountFormatter;
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _amountIsWithdrawal;
    NSString *_promptText;
    NSString *_updatedBalancePromptText;
    NSString *_maxLoadAmountText;
    NSString *_currencyCode;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_maxBalance;
    NSDecimalNumber *_minBalance;
    NSDecimalNumber *_maxLoadAmount;
    NSDecimalNumber *_minLoadAmount;
    id <PKEnterValueNewBalanceViewDelegate> _delegate;
}

@property(nonatomic) _Bool amountIsWithdrawal; // @synthesize amountIsWithdrawal=_amountIsWithdrawal;
@property(nonatomic) __weak id <PKEnterValueNewBalanceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDecimalNumber *minLoadAmount; // @synthesize minLoadAmount=_minLoadAmount;
@property(copy, nonatomic) NSDecimalNumber *maxLoadAmount; // @synthesize maxLoadAmount=_maxLoadAmount;
@property(copy, nonatomic) NSDecimalNumber *minBalance; // @synthesize minBalance=_minBalance;
@property(copy, nonatomic) NSDecimalNumber *maxBalance; // @synthesize maxBalance=_maxBalance;
@property(copy, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSString *maxLoadAmountText; // @synthesize maxLoadAmountText=_maxLoadAmountText;
@property(copy, nonatomic) NSString *updatedBalancePromptText; // @synthesize updatedBalancePromptText=_updatedBalancePromptText;
@property(copy, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
- (void).cxx_destruct;
- (void)_addSubviews;
- (void)_createAmountFormatter;
- (void)currentBalanceTapRecognized;
- (void)_updateBalanceText;
- (id)_textForPrompt:(id)arg1 amount:(id)arg2;
- (id)_minimalFormattedStringForAmount:(id)arg1;
- (void)_updateAdditionalAmount:(id)arg1 subtractAdditionalAmountFromCurrentAmount:(_Bool)arg2;
- (void)subtractAmountFromBalance:(id)arg1;
- (void)addAmountToBalance:(id)arg1;
- (void)showSpinner:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCurrencyCode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
