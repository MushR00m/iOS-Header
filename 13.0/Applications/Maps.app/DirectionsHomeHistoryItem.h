//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarSearchItemCellDataSource-Protocol.h"
#import "RAPAutocompleteSearchResult-Protocol.h"
#import "RecentsItem-Protocol.h"

@class AddressBookAddress, NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface DirectionsHomeHistoryItem : NSObject <CarSearchItemCellDataSource, RAPAutocompleteSearchResult, RecentsItem>
{
    SearchResult *_currentLocation;
}

@property(retain, nonatomic) SearchResult *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) AddressBookAddress *homeAddress;
- (id)init;
- (void)updateModel:(id)arg1;
- (id)entryWithTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
