//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSCache;

@interface SearchUIContactStore : NSObject
{
    CNContactStore *_contactStore;
    NSCache *_contactCache;
}

+ (id)placeholderContact;
+ (id)contactForPhoneNumber:(id)arg1 email:(id)arg2;
+ (id)sharedStore;
@property(retain) NSCache *contactCache; // @synthesize contactCache=_contactCache;
@property(retain) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)contactForIdentifier:(id)arg1;
- (void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchContactForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cachedContactsForIdentifiers:(id)arg1;
- (id)cachedContactForIdentifier:(id)arg1;
- (id)init;

@end
