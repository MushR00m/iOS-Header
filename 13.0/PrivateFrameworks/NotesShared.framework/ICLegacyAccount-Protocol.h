//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectID, NSSet, NSString;
@protocol ICLegacyFolder;

@protocol ICLegacyAccount <NSObject>
- (NSString *)localizedAttachmentsNotSupportedReason;
- (_Bool)preventMovingNotesToOtherAccounts;
- (_Bool)isManaged;
- (_Bool)supportsAttachments;
- (NSManagedObjectID *)objectID;
- (NSManagedObjectContext *)managedObjectContext;
- (id <ICLegacyFolder>)defaultFolder;
- (NSSet *)folders;
- (NSString *)emailAddress;
- (NSString *)accountIdentifier;
- (NSString *)objectIdentifier;
- (NSString *)name;
@end
