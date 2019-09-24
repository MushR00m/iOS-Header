//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXAPIAuthenticatedOperation.h>

#import <ActionKit/BOXURLSessionDownloadTaskDelegate-Protocol.h>

@class NSMutableData, NSString;

@interface BOXStreamOperation : BOXAPIAuthenticatedOperation <BOXURLSessionDownloadTaskDelegate>
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _progressBlock;
    NSString *_fileID;
    NSMutableData *_receivedDataBuffer;
    unsigned long long _bytesReceived;
}

@property(nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(retain, nonatomic) NSMutableData *receivedDataBuffer; // @synthesize receivedDataBuffer=_receivedDataBuffer;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (_Bool)canBeReenqueued;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)reenqueDelay;
- (void)reenqueOperationDueTo202Response;
- (void)sessionTask:(id)arg1 processIntermediateData:(id)arg2;
- (void)sessionTask:(id)arg1 processIntermediateResponse:(id)arg2;
- (long long)contentLength;
- (void)performCompletionCallback;
- (void)processResponseData:(id)arg1;
- (id)createSessionTaskWithError:(id *)arg1;
- (id)encodeBody:(id)arg1;
- (id)initWithURL:(id)arg1 HTTPMethod:(id)arg2 body:(id)arg3 queryParams:(id)arg4 session:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
