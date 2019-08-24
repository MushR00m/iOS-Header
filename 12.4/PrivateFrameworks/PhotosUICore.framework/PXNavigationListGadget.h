//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNavigationListController.h>

#import <PhotosUICore/PLNavigableCollectionContainer-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXGadgetSpec;
@protocol PXGadgetDelegate;

@interface PXNavigationListGadget : PXNavigationListController <PXGadget, PLNavigableCollectionContainer>
{
    _Bool _visibleContentRectIsStale;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    struct CGRect _visibleContentRect;
}

@property(nonatomic) struct CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (void)_updateTableViewForVisibleContentRect;
- (void)_updateTableViewLayoutMargins;
- (id)_listItemForCollection:(id)arg1;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canNavigateToCollection:(id)arg1;
@property(readonly, nonatomic) unsigned long long headerStyle;
- (struct NSObject *)contentViewController;
@property(readonly, nonatomic) NSString *localizedTitle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)tableViewContentSizeDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;

@end
