//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, MSStickerView;
@protocol MSStickerPrivate;

__attribute__((visibility("hidden")))
@interface _MSStickerCollectionViewCell : UICollectionViewCell
{
    MSStickerView *_stickerView;
    CALayer *_borderLayer;
}

@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
- (void).cxx_destruct;
- (void)setAnimating:(_Bool)arg1;
- (void)showCellBorder:(_Bool)arg1;
@property(retain, nonatomic) id <MSStickerPrivate> sticker;
@property(readonly, nonatomic) MSStickerView *stickerView; // @synthesize stickerView=_stickerView;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end
