//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDTableUpgradeStep-Protocol.h>

@class NSString;

@interface EDAddThreadTablesUpgradeStep : NSObject <EDTableUpgradeStep>
{
}

+ (int)runWithConnection:(id)arg1;
+ (id)threadRecipientsTableSchema;
+ (id)threadSendersTableSchema;
+ (id)threadMailboxesTableSchema;
+ (id)threadsTableSchema;
+ (id)threadScopesTableSchema;
+ (id)_schemaWithMessagesTable:(id)arg1 mailboxesTable:(id)arg2 conversationsTable:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

