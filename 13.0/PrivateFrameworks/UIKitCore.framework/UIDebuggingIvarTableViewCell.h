//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIDebuggingIvar, UILabel;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvarTableViewCell : UITableViewCell
{
    UIDebuggingIvar *_ivar;
    UILabel *_nameLabel;
    UILabel *_typeLabel;
    UILabel *_valueLabel;
}

@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIDebuggingIvar *ivar; // @synthesize ivar=_ivar;
- (void).cxx_destruct;
- (void)_prepareConstraints;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

