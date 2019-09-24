//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;
@protocol SKUIMenuViewControllerDelegate;

@interface SKUIMenuViewController : UITableViewController
{
    id <SKUIMenuViewControllerDelegate> _delegate;
    long long _indexOfCheckedTitle;
    NSArray *_menuTitles;
    NSArray *_menuImages;
    long long _menuStyle;
}

@property(nonatomic) long long menuStyle; // @synthesize menuStyle=_menuStyle;
@property(nonatomic) long long indexOfCheckedTitle; // @synthesize indexOfCheckedTitle=_indexOfCheckedTitle;
@property(readonly, nonatomic) NSArray *menuImages; // @synthesize menuImages=_menuImages;
@property(readonly, nonatomic) NSArray *menuTitles; // @synthesize menuTitles=_menuTitles;
@property(nonatomic) __weak id <SKUIMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadView;
- (long long)preferredUserInterfaceStyle;
- (id)initWithMenuTitles:(id)arg1;
- (id)initWithMenuTitles:(id)arg1 images:(id)arg2;

@end
