//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;

@interface CTRadioAccessTechnology : NSObject
{
    CTTelephonyNetworkInfo *_networkInfo;
}

@property(readonly) NSString *radioAccessTechnology;
- (void)dealloc;
- (id)initWithCTTelephonyNetworkInfo:(id)arg1;
- (id)init;

@end
