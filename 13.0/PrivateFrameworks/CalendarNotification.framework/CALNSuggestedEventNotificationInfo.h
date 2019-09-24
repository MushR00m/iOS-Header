//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendarSuggestionNotification, NSDate, NSString, NSURL;

@interface CALNSuggestedEventNotificationInfo : NSObject
{
    NSString *_sourceClientIdentifier;
    NSURL *_launchURL;
    NSDate *_expirationDate;
    EKCalendarSuggestionNotification *_suggestionNotification;
}

@property(readonly, nonatomic) EKCalendarSuggestionNotification *suggestionNotification; // @synthesize suggestionNotification=_suggestionNotification;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(readonly, copy, nonatomic) NSString *sourceClientIdentifier; // @synthesize sourceClientIdentifier=_sourceClientIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceClientIdentifier:(id)arg1 launchURL:(id)arg2 expirationDate:(id)arg3 suggestionNotification:(id)arg4;

@end
