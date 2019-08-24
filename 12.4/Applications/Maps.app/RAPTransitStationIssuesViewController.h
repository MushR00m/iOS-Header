//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPReportTableViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"
#import "RAPRouter-Protocol.h"

@class NSString, RAPQuestion, RAPReportComposerSnippetSection, RAPTablePart, RAPTransitStationIssuesSection;
@protocol RAPMenu;

__attribute__((visibility("hidden")))
@interface RAPTransitStationIssuesViewController : RAPReportTableViewController <RAPRouter, RAPInstrumentableTarget>
{
    RAPQuestion<RAPMenu> *_question;
    RAPTablePart *_snippetPart;
    RAPReportComposerSnippetSection *_snippet;
    RAPTablePart *_issuesPart;
    RAPTransitStationIssuesSection *_issues;
}

- (void).cxx_destruct;
- (void)proceedToTransitLineSelectionQuestion:(id)arg1;
- (void)proceedToTransitSubcategoryQuestion:(id)arg1;
- (void)proceedToStationAccessPointQuestion:(id)arg1;
- (void)proceedToProblemNotListedQuestion:(id)arg1;
- (void)proceedToPlaceClosureQuestion:(id)arg1;
- (void)proceedToPlaceCorrectionsQuestion:(id)arg1;
- (void)proceedToStationAccessPointSelectionQuestion:(id)arg1;
- (void)proceedToNextQuestion:(id)arg1;
- (id)tableParts;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
