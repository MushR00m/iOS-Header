//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem
{
}

- (id)message;
@property(readonly, copy, nonatomic) NSString *locationText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (void)configureBalloonView:(id)arg1;
- (id)sender;
- (id)time;
- (_Bool)failed;
- (_Bool)isFromMe;
- (Class)balloonViewClass;
- (id)description;

@end
