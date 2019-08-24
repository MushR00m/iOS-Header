//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <ScreenTimeUI/STAllowanceDetailListControllerDelegate-Protocol.h>
#import <ScreenTimeUI/STAllowanceSetupListControllerDelegate-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol STRootViewModelCoordinator;

@interface STAllowanceListController : PSListController <STAllowanceDetailListControllerDelegate, STAllowanceSetupListControllerDelegate>
{
    NSObject<STRootViewModelCoordinator> *_coordinator;
    NSArray *_allowanceSpecifiers;
}

@property(copy) NSArray *allowanceSpecifiers; // @synthesize allowanceSpecifiers=_allowanceSpecifiers;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)showStoreDemoAlert;
- (void)allowanceSetupListControllerDidCancel:(id)arg1;
- (void)allowanceSetupListController:(id)arg1 didSelectAllowanceIdentifiers:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)addAllowance:(id)arg1;
- (void)_showAllowanceDetailController:(id)arg1;
- (id)_subtitleTextForAllowance:(id)arg1;
- (id)_specifierForAllowance:(id)arg1;
- (id)_allAllowancesEnabled:(id)arg1;
- (void)_setAllAllowancesEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
@property(readonly) _Bool shouldShowCompatibilityAlert;
- (void)_adjustCellHeightForAllowanceSpecifier:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_allowancesDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
