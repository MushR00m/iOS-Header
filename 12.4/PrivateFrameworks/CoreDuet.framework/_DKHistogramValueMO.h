//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, _DKHistogramMO;

@interface _DKHistogramValueMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSNumber *count; // @dynamic count;
@property(retain, nonatomic) _DKHistogramMO *histogram; // @dynamic histogram;
@property(copy, nonatomic) NSNumber *integerValue; // @dynamic integerValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;

@end
