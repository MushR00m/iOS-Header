//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSMutableArray;

@interface _WBUDynamicMeCard : NSObject
{
    NSMutableArray *_blocksPendingMeCard;
    CNContact *_me;
    _Bool _meCardExists;
}

+ (id)_contactObjectComponentForString:(id)arg1;
@property(readonly, nonatomic) _Bool meCardExists; // @synthesize meCardExists=_meCardExists;
- (void).cxx_destruct;
- (void)performWhenReady:(CDUnknownBlockType)arg1;
- (id)valueForProperty:(id)arg1 contact:(id)arg2;
- (void)_meCardChanged:(id)arg1;
- (id)init;
- (id)me;

@end
