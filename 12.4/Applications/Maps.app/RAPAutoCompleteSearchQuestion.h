//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPQuestion.h"

@class NSArray, RAPAutoCompleteSearchIssue, RAPCommentQuestion;

__attribute__((visibility("hidden")))
@interface RAPAutoCompleteSearchQuestion : RAPQuestion
{
    NSArray *_selectableIssues;
    RAPAutoCompleteSearchIssue *_selectedIssue;
    RAPCommentQuestion *_commentQuestion;
    NSArray *_suggestionLists;
}

@property(retain, nonatomic) NSArray *suggestionLists; // @synthesize suggestionLists=_suggestionLists;
@property(retain, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
@property(retain, nonatomic) RAPAutoCompleteSearchIssue *selectedIssue; // @synthesize selectedIssue=_selectedIssue;
@property(retain, nonatomic) NSArray *selectableIssues; // @synthesize selectableIssues=_selectableIssues;
- (void).cxx_destruct;
- (void)_fillSubmittableProblem:(id)arg1;
- (_Bool)isComplete;
- (id)image;
- (id)localizedDescription;
- (long long)questionCategory;
- (id)localizedTitle;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

@end
