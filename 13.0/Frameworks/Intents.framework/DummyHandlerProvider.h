//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INIntentHandlerProvidingPrivate-Protocol.h>

@class NSString;

@interface DummyHandlerProvider : NSObject <INIntentHandlerProvidingPrivate>
{
    id _handler;
}

@property(readonly, nonatomic) id handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)handlerForIntent:(id)arg1;
- (id)initWithHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
