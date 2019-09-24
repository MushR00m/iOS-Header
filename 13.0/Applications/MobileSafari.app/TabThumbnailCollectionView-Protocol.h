//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TabCollectionView-Protocol.h"
#import "TabSnapshotSizing-Protocol.h"

@class NSArray, NSString;
@protocol TabCollectionItem, TabThumbnailCollectionViewDelegate;

@protocol TabThumbnailCollectionView <TabCollectionView, TabSnapshotSizing>
@property(readonly, nonatomic) NSArray *itemsMatchingSearchTerm;
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
@property(copy, nonatomic) NSString *searchTerm;
@property(readonly, nonatomic) long long presentationState;
@property(nonatomic) _Bool defersActivation;
@property(retain, nonatomic) id <TabCollectionItem> itemToActivate;
@property(readonly, nonatomic) NSArray *itemsFullyInView;
@property(nonatomic) __weak id <TabThumbnailCollectionViewDelegate> delegate;
- (void)endSearching;
- (void)beginSearching;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1;
- (void)enumerateItemsOrderedByVisibility:(void (^)(id <TabCollectionItem>))arg1;
@end
