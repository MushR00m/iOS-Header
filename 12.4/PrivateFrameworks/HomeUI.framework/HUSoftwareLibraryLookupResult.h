//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HUSoftwareLibraryLookupResult : NSObject
{
    NSSet *_matchedLibraryItems;
    NSSet *_unmatchedAccessories;
}

@property(retain, nonatomic) NSSet *unmatchedAccessories; // @synthesize unmatchedAccessories=_unmatchedAccessories;
@property(retain, nonatomic) NSSet *matchedLibraryItems; // @synthesize matchedLibraryItems=_matchedLibraryItems;
- (void).cxx_destruct;

@end
