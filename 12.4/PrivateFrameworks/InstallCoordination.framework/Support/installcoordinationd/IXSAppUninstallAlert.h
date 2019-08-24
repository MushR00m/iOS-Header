//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSUninstallAlert.h"

@class NSBundle, NSString;

@interface IXSAppUninstallAlert : IXSUninstallAlert
{
    NSBundle *_defaultStringsBundle;
    NSString *_defaultStringsFileName;
}

@property(readonly, nonatomic) NSString *defaultStringsFileName; // @synthesize defaultStringsFileName=_defaultStringsFileName;
@property(readonly, nonatomic) NSBundle *defaultStringsBundle; // @synthesize defaultStringsBundle=_defaultStringsBundle;
- (void).cxx_destruct;
- (id)cancelButtonLabel;
- (id)deleteButtonLabel;
- (id)message;
- (id)title;
- (id)_localizedStringForKey:(id)arg1;
@property(readonly, nonatomic) _Bool appHasiCloudDataOrDocuments; // @dynamic appHasiCloudDataOrDocuments;
- (id)initWithAppProxy:(id)arg1 isRemovable:(_Bool)arg2;

@end
