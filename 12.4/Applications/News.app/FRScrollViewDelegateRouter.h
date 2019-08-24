//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIScrollView;
@protocol UIScrollViewDelegate;

@interface FRScrollViewDelegateRouter : NSObject <UIScrollViewDelegate>
{
    _Bool _sidechainRespondsToScrollViewDidScroll;
    _Bool _otherRespondsToScrollViewDidScroll;
    UIScrollView *_scrollView;
    id <UIScrollViewDelegate> _sidechain;
    id <UIScrollViewDelegate> _otherScrollViewDelegate;
}

@property(nonatomic) _Bool otherRespondsToScrollViewDidScroll; // @synthesize otherRespondsToScrollViewDidScroll=_otherRespondsToScrollViewDidScroll;
@property(readonly, nonatomic) _Bool sidechainRespondsToScrollViewDidScroll; // @synthesize sidechainRespondsToScrollViewDidScroll=_sidechainRespondsToScrollViewDidScroll;
@property(nonatomic) __weak id <UIScrollViewDelegate> otherScrollViewDelegate; // @synthesize otherScrollViewDelegate=_otherScrollViewDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> sidechain; // @synthesize sidechain=_sidechain;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 sidechainDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
