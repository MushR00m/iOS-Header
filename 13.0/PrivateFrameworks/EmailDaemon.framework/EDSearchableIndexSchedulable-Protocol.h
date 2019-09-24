//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSString;

@protocol EDSearchableIndexSchedulable <NSObject>
@property(readonly, nonatomic) unsigned long long pendingIndexItemsCount;
@property(readonly, copy, nonatomic) NSString *indexName;
@property(readonly, nonatomic, getter=isPluggedIn) _Bool pluggedIn;
@property(nonatomic, getter=isDataSourceIndexingPermitted) _Bool dataSourceIndexingPermitted;
@end
