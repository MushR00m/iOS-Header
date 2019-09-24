//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFTVInputControlItem;

@interface HUQuickControlTVInputSourceViewController : HUQuickControlSingleControlViewController
{
}

+ (Class)controlItemClass;
+ (id)controlItemPredicate;
- (id)_toPickerViewItems:(id)arg1;
- (id)_filterInputValues:(id)arg1;
- (_Bool)_shouldWriteInputValue:(id)arg1;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;

// Remaining properties
@property(readonly, nonatomic) HFTVInputControlItem *controlItem; // @dynamic controlItem;

@end
