//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UITextPasteCoordinator : NSObject
{
    NSMutableArray *_items;
    NSObject<OS_dispatch_group> *_wait;
    id <UITextPasteCoordinatorDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <UITextPasteCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_finish;
- (void)_determineFinished;
- (_Bool)performBlockingWait:(double)arg1;
- (void)setResult:(id)arg1 forItem:(id)arg2;
- (void)addItem:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
