//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface _UITextSelectionCaretRect : UITextSelectionRect
{
    struct CGRect _rect;
}

+ (id)selectionRectWithRect:(struct CGRect)arg1;
- (_Bool)isVertical;
- (_Bool)containsEnd;
- (_Bool)containsStart;
- (long long)writingDirection;
- (struct CGRect)rect;

@end

