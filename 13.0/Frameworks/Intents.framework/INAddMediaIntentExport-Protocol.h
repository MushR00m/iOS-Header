//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INMediaDestination, INMediaSearch, NSArray;

@protocol INAddMediaIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INMediaDestination *mediaDestination;
@property(copy, nonatomic) INMediaSearch *mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems;
- (id)init;
@end

