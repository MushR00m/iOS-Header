//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class NSAttributedString, NSMutableDictionary, TTMergeableStringVersionedDocument;

@protocol ICNoteUI <NSObject>

@optional
- (NSAttributedString *)uiAttributedString;
- (void)createMissingAttachmentsInTextStorage;
- (void)didMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)willMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (void)noteWillTurnIntoFault;
- (_Bool)shouldReleaseTextStorageWhenTurningIntoFault;
@end
