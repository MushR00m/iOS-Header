//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>
{
}

+ (id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)userReviewItem;
@property(retain, nonatomic) SAUIDecoratedText *reviewer;
@property(retain, nonatomic) SAUIDecoratedText *reviewText;
@property(retain, nonatomic) SAUIDecoratedText *reviewDate;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
