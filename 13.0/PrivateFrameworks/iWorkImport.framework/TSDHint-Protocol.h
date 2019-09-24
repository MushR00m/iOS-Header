//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSKSelectionPath;
@protocol TSDHint;

@protocol TSDHint <NSObject>
+ (Class)archivedHintClass;
- (id <TSDHint>)copyForArchiving;
- (id <TSDHint>)lastChildHint;
- (id <TSDHint>)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (_Bool)overlapsWithSelectionPath:(TSKSelectionPath *)arg1;

@optional
- (struct CGSize)effectiveSize;
- (struct CGSize)maximumSize;
- (_Bool)isFirstHint;
@end
