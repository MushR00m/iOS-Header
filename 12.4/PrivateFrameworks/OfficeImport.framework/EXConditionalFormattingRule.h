//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXConditionalFormattingRule : NSObject
{
}

+ (void)readFrom:(struct _xmlNode *)arg1 x14:(_Bool)arg2 edConditionalFormatting:(id)arg3 edReference:(id)arg4 state:(id)arg5;
+ (void)initialize;
+ (int)edTimePeriodFromXmlTimePeriodString:(id)arg1;
+ (int)edOperatorFromXmlOperatorString:(id)arg1;
+ (int)edRuleTypeFromXmlRuleTypeString:(id)arg1;

@end
