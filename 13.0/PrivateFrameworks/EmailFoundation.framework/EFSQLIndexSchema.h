//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol EFSQLExpressable;

@interface EFSQLIndexSchema : NSObject
{
    _Bool _unique;
    NSString *_name;
    NSString *_tableName;
    NSArray *_indexedColumns;
    id <EFSQLExpressable> _where;
}

@property(readonly, nonatomic) _Bool unique; // @synthesize unique=_unique;
@property(readonly, nonatomic) id <EFSQLExpressable> where; // @synthesize where=_where;
@property(readonly, copy, nonatomic) NSArray *indexedColumns; // @synthesize indexedColumns=_indexedColumns;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)definitionWithDatabaseName:(id)arg1;
- (id)initWithTableName:(id)arg1 columnNames:(id)arg2;
- (id)initWithTableName:(id)arg1 columnNames:(id)arg2 where:(id)arg3 unique:(_Bool)arg4;
- (id)initWithTableName:(id)arg1 indexedColumns:(id)arg2;
- (id)initWithTableName:(id)arg1 indexedColumns:(id)arg2 where:(id)arg3 unique:(_Bool)arg4;
- (id)initWithName:(id)arg1 tableName:(id)arg2 indexedColumns:(id)arg3 where:(id)arg4 unique:(_Bool)arg5;

@end
