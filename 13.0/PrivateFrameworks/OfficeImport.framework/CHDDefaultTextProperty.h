//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>

@class EDResources, EDRunsCollection, NSString;

__attribute__((visibility("hidden")))
@interface CHDDefaultTextProperty : NSObject <EDKeyedObject>
{
    EDResources *mResources;
    int mDefaultTextType;
    unsigned long long mContentFormatId;
    EDRunsCollection *mRuns;
    int mLabelPosition;
    _Bool mShowCategoryLabel;
    _Bool mShowValueLabel;
    _Bool mShowPercentageLabel;
    _Bool mShowSeriesLabel;
    _Bool mShowBubbleSizeLabel;
}

+ (id)defaultTextPropertyWithResources:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setIsShowSeriesLabel:(_Bool)arg1;
- (_Bool)isShowSeriesLabel;
- (void)setIsShowBubbleSizeLabel:(_Bool)arg1;
- (_Bool)isShowBubbleSizeLabel;
- (void)setIsShowPercentageLabel:(_Bool)arg1;
- (_Bool)isShowPercentageLabel;
- (void)setIsShowValueLabel:(_Bool)arg1;
- (_Bool)isShowValueLabel;
- (void)setIsShowCategoryLabel:(_Bool)arg1;
- (_Bool)isShowCategoryLabel;
- (void)setLabelPosition:(int)arg1;
- (int)labelPosition;
- (long long)key;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (void)setRuns:(id)arg1;
- (id)runs;
- (void)setDefaultTextType:(int)arg1;
- (int)defaultTextType;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
