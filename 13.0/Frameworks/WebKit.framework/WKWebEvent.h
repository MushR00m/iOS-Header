//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/WebEvent.h>

@class UIEvent;

__attribute__((visibility("hidden")))
@interface WKWebEvent : WebEvent
{
    struct RetainPtr<UIEvent> _uiEvent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UIEvent *uiEvent;
- (id)initWithEvent:(id)arg1;

@end
