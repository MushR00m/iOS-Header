//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUIRingsView.h>

@class ARUICountdownController;

@interface ARUICountdownView : ARUIRingsView
{
    ARUICountdownController *_countdownController;
}

+ (id)countdownViewConfiguredForCompanion;
+ (id)countdownViewConfiguredForWatch;
- (void).cxx_destruct;
@property(readonly, nonatomic) ARUICountdownController *countdownController;
- (id)initWithCountdownController:(id)arg1;

@end
