//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString;

@protocol KNAnimationPluginArchiving <NSObject>
+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(NSString *)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
@end

