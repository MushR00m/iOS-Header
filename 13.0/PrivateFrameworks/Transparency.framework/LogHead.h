//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData;

@interface LogHead : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int application; // @dynamic application;
@property(nonatomic) unsigned long long logBeginningMs; // @dynamic logBeginningMs;
@property(copy, nonatomic) NSData *logHeadHash; // @dynamic logHeadHash;
@property(nonatomic) unsigned long long logSize; // @dynamic logSize;
@property(nonatomic) int logType; // @dynamic logType;
@property(nonatomic) unsigned long long revision; // @dynamic revision;
@property(nonatomic) unsigned long long treeId; // @dynamic treeId;

@end
