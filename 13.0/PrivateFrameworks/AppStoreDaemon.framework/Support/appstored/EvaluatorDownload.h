//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EvaluatorDownload : NSObject
{
    _Bool _automatic;
    _Bool _remaining;
    _Bool _update;
    unsigned long long _bytes;
    NSString *_logKey;
    NSString *_name;
}

+ (id)formatSize:(unsigned long long)arg1;
@property(getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(getter=isRemaining) _Bool remaining; // @synthesize remaining=_remaining;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property unsigned long long bytes; // @synthesize bytes=_bytes;
@property(getter=isAutomatic) _Bool automatic; // @synthesize automatic=_automatic;
- (void).cxx_destruct;

@end
