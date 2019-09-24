//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIContextMenuInteractionDelegate-Protocol.h"
#import "UIDragInteractionDelegate-Protocol.h"
#import "UIDragInteractionDelegate_Private-Protocol.h"
#import "UIDropInteractionDelegate-Protocol.h"

@class NSMapTable, NSString, TabDocumentDropHandler;
@protocol TabDocumentDragDropDataSource, UIDragSession;

@interface TabDragDropInteractionController : NSObject <UIDragInteractionDelegate_Private, UIContextMenuInteractionDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate>
{
    NSMapTable *_placeholderDocumentsForSessions;
    NSMapTable *_insertedTabsForDragItems;
    NSMapTable *_hasHiddenDocumentsForDragSessions;
    id <UIDragSession> _pendingDragSession;
    id <TabDocumentDragDropDataSource> _dataSource;
    TabDocumentDropHandler *_dropHandler;
}

@property(readonly, nonatomic) TabDocumentDropHandler *dropHandler; // @synthesize dropHandler=_dropHandler;
@property(readonly, nonatomic) __weak id <TabDocumentDragDropDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)_autoscroller;
- (void)_transitionToDragState:(long long)arg1 fromDragState:(long long)arg2 forTabCollectionItemsInSession:(id)arg3;
- (id)_insertPlaceholderTabIfNeededForSession:(id)arg1;
- (id)_viewForTransitionToItem:(id)arg1 withTabCollectionView:(id)arg2;
- (void)_unhideTabDocumentsForLocalDragSession:(id)arg1;
- (id)_tabCollectionItemAtPoint:(struct CGPoint)arg1;
- (id)_newDragItemsAtPoint:(struct CGPoint)arg1 excludingTabDocuments:(id)arg2;
- (void)_cleanUpDragPreviewForSesssion:(id)arg1;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)_cleanUpDropPlaceholderForSession:(id)arg1;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (_Bool)_tabViewIsFilteringTabs:(id)arg1;
- (_Bool)_shouldMovePlaceholderItem:(id)arg1 overTargetItem:(id)arg2 withDropLocation:(struct CGPoint)arg3;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (id)initWithDataSource:(id)arg1 dropHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
