//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMAssociatedMessageItem.h>

@interface IMAssociatedMessageItem (IMTranscriptChatItemRules)
- (_Bool)shouldGenerateTopLevelChatItem;
- (id)_newChatItemsWithFilteredChat:(_Bool)arg1 isBusiness:(_Bool)arg2 parentChatIsSpam:(_Bool)arg3 hasKnownParticipants:(_Bool)arg4;
- (id)_newChatItems;
- (_Bool)isIncomingTypingOrCancelTypingMessage;
- (_Bool)isTypingOrCancelTypingMessage;
- (_Bool)isCancelTypingMessage;
- (_Bool)isIncomingTypingMessage;
@end
