//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class REDataSourceManager, REElementDataSourceController;

@protocol REDataSourceManagerObserver <NSObject>
- (void)dataSourceManager:(REDataSourceManager *)arg1 willUnloadDataSourceController:(REElementDataSourceController *)arg2;
- (void)dataSourceManager:(REDataSourceManager *)arg1 didLoadDataSourceController:(REElementDataSourceController *)arg2;
@end
