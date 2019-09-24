//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactBufferDecoder, CNContactFetchRequest, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABContactBuffersDecoder : NSObject
{
    CNContactBufferDecoder *_decoder;
    NSMutableArray *_contactsWaitingForUnification;
    NSMutableDictionary *_matchInfosWaitingForUnification;
    CNContactFetchRequest *_fetchRequest;
}

@property(readonly, nonatomic) CNContactFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) NSMutableDictionary *matchInfosWaitingForUnification; // @synthesize matchInfosWaitingForUnification=_matchInfosWaitingForUnification;
@property(readonly, nonatomic) NSMutableArray *contactsWaitingForUnification; // @synthesize contactsWaitingForUnification=_contactsWaitingForUnification;
@property(readonly, nonatomic) CNContactBufferDecoder *decoder; // @synthesize decoder=_decoder;
- (void).cxx_destruct;
- (id)unifyContacts:(id)arg1 moreComing:(_Bool)arg2;
- (id)contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;
- (id)_contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;
- (void)_addContactMatchInfoFromABMatchInfos:(id)arg1 forContact:(id)arg2 toDictionary:(id)arg3;
- (id)contactsFromData:(id)arg1 moreComing:(_Bool)arg2 error:(id *)arg3;
- (id)initWithFetchRequest:(id)arg1;
- (id)init;

@end
