//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@protocol FCCoreConfiguration, FCCoreConfigurationManager;

@protocol FCCoreConfigurationObserving <NSObject>

@optional
- (void)configurationManager:(id <FCCoreConfigurationManager>)arg1 configurationDidChange:(id <FCCoreConfiguration>)arg2;
@end

