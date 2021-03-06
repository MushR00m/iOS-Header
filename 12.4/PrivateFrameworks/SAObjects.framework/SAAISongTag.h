//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAAISongTag : SADomainObject
{
}

+ (id)songTagWithDictionary:(id)arg1 context:(id)arg2;
+ (id)songTag;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSURL *radioStationUri;
@property(retain, nonatomic) SAUIImageResource *previewImage;
@property(copy, nonatomic) NSURL *iTunesUri;
@property(copy, nonatomic) NSString *contentRating;
@property(copy, nonatomic) NSString *artistAdamId;
@property(copy, nonatomic) NSString *artist;
@property(copy, nonatomic) NSString *albumAdamId;
@property(copy, nonatomic) NSString *album;
@property(copy, nonatomic) NSString *adamId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

