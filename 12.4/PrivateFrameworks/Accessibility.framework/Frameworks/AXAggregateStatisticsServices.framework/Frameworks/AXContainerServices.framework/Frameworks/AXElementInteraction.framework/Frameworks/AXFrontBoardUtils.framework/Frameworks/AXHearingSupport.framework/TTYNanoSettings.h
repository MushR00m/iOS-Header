//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/TTYSettings.h>

@class NPSDomainAccessor;

@interface TTYNanoSettings : TTYSettings
{
    NPSDomainAccessor *_domainAccessor;
    NPSDomainAccessor *_globalDomainAccessor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // @synthesize globalDomainAccessor=_globalDomainAccessor;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
- (void).cxx_destruct;
- (id)valueForPreferenceKey:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)uuidFromContext:(id)arg1;
- (id)currentLocale;
- (id)init;

@end
