//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocomplete/NSObject-Protocol.h>

@class CNAutocompleteFetchRequest;
@protocol CNCancelable;

@protocol CNAutocompleteSearch <NSObject>
- (id <CNCancelable>)executeRequest:(CNAutocompleteFetchRequest *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end

