//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse;

@interface _SFSearchResult : NSObject
{
    NSHTTPURLResponse *_response;
    NSData *_data;
    long long _searchType;
}

@property(readonly, nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)description;
- (id)initWithVoiceSearchResult:(id)arg1;

@end
