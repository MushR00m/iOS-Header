//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarListTableViewCell.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CarSharedTripCell : CarListTableViewCell
{
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    NSString *_contactIdentifier;
}

- (void).cxx_destruct;
- (void)updateColorsForCurrentState;
- (void)_updateImage:(id)arg1 forIdentifier:(id)arg2;
- (void)configureWithSharedTrip:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
