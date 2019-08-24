//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADObjectID;

@protocol CADSourceInterface
- (void)CADSourceGetManagedConfigurationAccountAccess:(CADObjectID *)arg1 reply:(void (^)(int, int))arg2;
- (void)CADCountCalendarItemsOfType:(int)arg1 inSource:(CADObjectID *)arg2 reply:(void (^)(int, unsigned long long))arg3;
- (void)CADSourceRefresh:(CADObjectID *)arg1 isUserRequested:(_Bool)arg2 reply:(void (^)(int, _Bool))arg3;
- (void)CADSourceGetConstraints:(CADObjectID *)arg1 reply:(void (^)(int, int, int, unsigned long long))arg2;
- (void)CADDatabaseGetLocalSource:(void (^)(int, CADObjectID *))arg1;
- (void)CADDatabaseGetSources:(void (^)(int, NSArray *))arg1;
@end
