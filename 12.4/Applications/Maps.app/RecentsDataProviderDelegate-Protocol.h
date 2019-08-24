//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RecentsDataProvider;

@protocol RecentsDataProviderDelegate <NSObject>
- (void)recentsDataProviderDidUpdate:(RecentsDataProvider *)arg1;

@optional
- (void)_recentsDataProviderDidLoadRecents:(RecentsDataProvider *)arg1;
- (void)_recentsDataProviderDidLoadSuggestions:(RecentsDataProvider *)arg1;
- (void)_recentsDataProviderDidEndLoadingSuggestions:(RecentsDataProvider *)arg1;
- (void)_recentsDataProviderWillBeginLoadingSuggestions:(RecentsDataProvider *)arg1;
@end
