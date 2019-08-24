//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, TUHandle;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isSuggested;
    TUHandle *_handle;
    NSString *_label;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isSuggested; // @synthesize isSuggested=_isSuggested;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToLabeledHandle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithHandle:(id)arg1 label:(id)arg2 isSuggested:(_Bool)arg3;

@end
