//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface DCSettings : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (id)sharedSettings;
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)setFinishAfterFirstScanBoxed:(id)arg1;
- (id)finishAfterFirstScanBoxed;
- (void)setEnableViewServiceBoxed:(id)arg1;
- (id)enableViewServiceBoxed;
@property(readonly, nonatomic) _Bool finishAfterFirstScan;
@property(readonly, nonatomic) _Bool enableViewService;
- (id)init;

@end
