//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/SGSuggestionViewControllerPresenter-Protocol.h>

@protocol SGSuggestion;

@protocol SGSuggestionDelegate <SGSuggestionViewControllerPresenter>
- (long long)suggestionsUIContext;
- (void)suggestionWasUpdated:(id <SGSuggestion>)arg1;
- (void)suggestion:(id <SGSuggestion>)arg1 actionFinished:(_Bool)arg2;
@end
