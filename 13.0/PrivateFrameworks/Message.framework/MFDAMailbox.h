//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFDAMailbox : MFMailboxUid
{
    NSString *_folderID;
}

- (void).cxx_destruct;
- (id)_privacySafeDescription;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)URLWithAccount:(id)arg1;
- (id)_folderID;
@property(copy) NSString *folderID;
- (_Bool)mergeWithUserInfo:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 account:(id)arg3 folderID:(id)arg4;

@end
