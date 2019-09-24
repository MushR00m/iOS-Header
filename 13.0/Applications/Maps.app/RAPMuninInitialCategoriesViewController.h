//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, RAPMuninQuestion, RAPReport;

__attribute__((visibility("hidden")))
@interface RAPMuninInitialCategoriesViewController : UITableViewController <RAPInstrumentableTarget>
{
    RAPReport *_report;
    RAPMuninQuestion *_question;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)_captureUserAction:(int)arg1;
@property(readonly, nonatomic) int analyticTarget;
- (void)didSelectCategoryOfType:(unsigned long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
