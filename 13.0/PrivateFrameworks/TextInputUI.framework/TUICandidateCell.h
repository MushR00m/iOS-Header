//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidate, UILabel;

@interface TUICandidateCell : TUICandidateBaseCell
{
    _Bool _shouldShowCandidateNumber;
    _Bool _rowSelected;
    TIKeyboardCandidate *_candidate;
    unsigned long long _candidateNumber;
    long long _alignment;
    double _minimumTextLabelHeight;
    UILabel *_textLabel;
    UILabel *_alternativeTextLabel;
    UILabel *_candidateNumberLabel;
    UILabel *_annotationTextLabel;
}

+ (double)widthForCandidate:(id)arg1 showCandidateNumber:(_Bool)arg2 style:(id)arg3;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *annotationTextLabel; // @synthesize annotationTextLabel=_annotationTextLabel;
@property(retain, nonatomic) UILabel *candidateNumberLabel; // @synthesize candidateNumberLabel=_candidateNumberLabel;
@property(retain, nonatomic) UILabel *alternativeTextLabel; // @synthesize alternativeTextLabel=_alternativeTextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double minimumTextLabelHeight; // @synthesize minimumTextLabelHeight=_minimumTextLabelHeight;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool rowSelected; // @synthesize rowSelected=_rowSelected;
@property(nonatomic) _Bool shouldShowCandidateNumber; // @synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber;
@property(nonatomic) unsigned long long candidateNumber; // @synthesize candidateNumber=_candidateNumber;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (void).cxx_destruct;
- (void)updateColors;
- (void)updateLabels;
- (void)updateStyle;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)isFocused;
- (_Bool)_canFocusProgrammatically;
- (void)setStyle:(id)arg1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end
