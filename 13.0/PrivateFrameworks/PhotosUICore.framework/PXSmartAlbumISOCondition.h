//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumISOCondition : PXSmartAlbumEXIFCondition
{
    NSArray *_ISOValues;
}

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PXLabeledValue *secondISOValue;
@property(retain, nonatomic) PXLabeledValue *ISOValue;
@property(readonly, nonatomic) NSArray *ISOValues;

@end
