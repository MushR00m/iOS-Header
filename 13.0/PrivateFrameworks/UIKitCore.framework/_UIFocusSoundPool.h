//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface _UIFocusSoundPool : NSObject
{
    NSURL *_soundFileURL;
    unsigned int _originalSystemSoundID;
    NSArray *_queue;
    unsigned long long _queueIndex;
}

- (void).cxx_destruct;
- (unsigned int)playableSystemSoundID;
- (id)initWithSoundFileURL:(id)arg1;
- (id)initWithSystemSoundID:(unsigned int)arg1;

@end
