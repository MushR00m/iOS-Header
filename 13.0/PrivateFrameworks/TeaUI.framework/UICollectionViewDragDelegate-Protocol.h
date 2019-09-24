//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TeaUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, UICollectionView, UIDragPreviewParameters;
@protocol UIDragSession;

@protocol UICollectionViewDragDelegate <NSObject>
- (NSArray *)collectionView:(UICollectionView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional
- (_Bool)collectionView:(UICollectionView *)arg1 dragSessionIsRestrictedToDraggingApplication:(id <UIDragSession>)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 dragSessionAllowsMoveOperation:(id <UIDragSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (UIDragPreviewParameters *)collectionView:(UICollectionView *)arg1 dragPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)collectionView:(UICollectionView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint)arg4;
@end
