//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactStore, CNUIContactsEnvironment, CNUIPeopleGroup, NSArray, NSString;

@protocol CNUIPeopleSource <NSObject>
+ (id)sourceWithEnvironment:(CNUIContactsEnvironment *)arg1 contactStore:(CNContactStore *)arg2;
+ (NSString *)sourceKind;
- (NSArray *)peopleInGroup:(CNUIPeopleGroup *)arg1 keysToFetch:(NSArray *)arg2;
- (NSArray *)groups;
@end
