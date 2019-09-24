//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface AppReceiptHandleInvalidOperation : ISOperation
{
    CDUnknownBlockType _resultsBlock;
    NSString *_bundleIdentifier;
    NSString *_clientIdentifierHeader;
    NSString *_userAgent;
}

- (void)setResultsBlock:(CDUnknownBlockType)arg1;
- (void)run;
@property(retain, nonatomic) NSString *userAgent;
@property(retain, nonatomic) NSString *clientIdentifierHeader;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;

@end
