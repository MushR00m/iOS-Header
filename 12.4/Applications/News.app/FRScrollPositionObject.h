//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface FRScrollPositionObject : NSObject <NSSecureCoding>
{
    _Bool _wantsRestoreToScrollIdentifier;
    NSString *_sourceIdentifier;
    struct CGPoint _scrollOffset;
    struct CGSize _windowSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool wantsRestoreToScrollIdentifier; // @synthesize wantsRestoreToScrollIdentifier=_wantsRestoreToScrollIdentifier;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) struct CGPoint scrollOffset; // @synthesize scrollOffset=_scrollOffset;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
