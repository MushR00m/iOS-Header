//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

#import <UIKitCore/UICollectionViewTableAllRowAttributes-Protocol.h>

@class UIColor, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface UITableViewCollectionCell : UITableViewCell <UICollectionViewTableAllRowAttributes>
{
}

@property(nonatomic) _Bool drawsSeparatorAtBottomOfSection;
@property(nonatomic) _Bool drawsSeparatorAtTopOfSection;
@property(nonatomic) double sectionBorderWidth;
@property(nonatomic) struct UIEdgeInsets backgroundInset;
@property(retain, nonatomic) UIVisualEffect *separatorEffect;
@property(nonatomic) _Bool insetsContentViewsToSafeArea;
@property(nonatomic) _Bool separatorInsetIsRelativeToCellEdges;
@property(nonatomic) double indexBarExtentFromEdge;
@property(nonatomic) double defaultTrailingCellMarginWidth;
@property(nonatomic) double defaultLeadingCellMarginWidth;

// Remaining properties
@property(nonatomic) long long accessoryType;
@property(copy, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) long long editingStyle;
@property(nonatomic) long long indentationLevel;
@property(nonatomic) _Bool layoutMarginsFollowReadableWidth; // @dynamic layoutMarginsFollowReadableWidth;
@property(nonatomic) int sectionLocation; // @dynamic sectionLocation;
@property(copy, nonatomic) UIColor *separatorColor; // @dynamic separatorColor;
@property(nonatomic) struct UIEdgeInsets separatorInset;
@property(nonatomic) long long separatorStyle; // @dynamic separatorStyle;
@property(nonatomic) _Bool shouldIndentWhileEditing;
@property(nonatomic) _Bool showsReorderControl;

@end
