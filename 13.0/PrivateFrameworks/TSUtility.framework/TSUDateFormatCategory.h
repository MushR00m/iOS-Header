//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject
{
    struct __CFDateFormatter *mInitialFormatter;
    NSMutableArray *mEntries;
}

- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(const struct __CFString **)arg3 perfect:(_Bool *)arg4;
- (id)entryForSeparator:(unsigned short)arg1;
- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(struct __CFLocale *)arg3;
- (void)dealloc;
- (id)initWithInitialPattern:(id)arg1 locale:(struct __CFLocale *)arg2;

@end
