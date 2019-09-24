//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFAddBookmarkActivity.h>

#import "_SFSingleBookmarkNavigationControllerDelegate-Protocol.h"

@class TabDocument, _SFSingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

@interface AddBookmarkUIActivity : _SFAddBookmarkActivity <_SFSingleBookmarkNavigationControllerDelegate>
{
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}

- (void).cxx_destruct;
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2 bookmark:(id)arg3;
- (void)activityDidFinish:(_Bool)arg1;
- (id)_embeddedActivityViewController;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (id)init;
- (id)initWithTabDocument:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <AddBookmarkActivityDelegate> delegate; // @dynamic delegate;

@end
