//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BKUserProtectedConfiguration : NSObject
{
    NSNumber *_unlockEnabled;
    NSNumber *_identificationEnabled;
    NSNumber *_loginEnabled;
    NSNumber *_applePayEnabled;
    NSNumber *_attentionDetectionEnabled;
}

@property(retain, nonatomic) NSNumber *attentionDetectionEnabled; // @synthesize attentionDetectionEnabled=_attentionDetectionEnabled;
@property(retain, nonatomic) NSNumber *applePayEnabled; // @synthesize applePayEnabled=_applePayEnabled;
@property(retain, nonatomic) NSNumber *loginEnabled; // @synthesize loginEnabled=_loginEnabled;
@property(retain, nonatomic) NSNumber *identificationEnabled; // @synthesize identificationEnabled=_identificationEnabled;
@property(retain, nonatomic) NSNumber *unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1 effective:(_Bool)arg2;

@end
