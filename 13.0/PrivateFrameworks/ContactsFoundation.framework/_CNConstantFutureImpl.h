//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFutureImpl-Protocol.h>

@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl>
{
    id _result;
}

- (void).cxx_destruct;
- (void)updateDescriptionWithBuilder:(id)arg1;
- (_Bool)cancel;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)initWithResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
