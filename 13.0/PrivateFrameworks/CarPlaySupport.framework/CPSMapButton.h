//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSButton.h>

@class CPMapButton;

@interface CPSMapButton : CPSButton
{
    CPMapButton *_mapButton;
}

+ (id)buttonWithCPMapButton:(id)arg1;
@property(retain, nonatomic) CPMapButton *mapButton; // @synthesize mapButton=_mapButton;
- (void).cxx_destruct;
- (void)_updateButtonImages;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setCharge:(float)arg1;
- (float)charge;

@end
