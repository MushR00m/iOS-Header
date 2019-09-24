//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, NSBlockOperation, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CarSearchItemCellModel : NSObject
{
    NSBlockOperation *_markedAsUpdatedOperation;
    NSString *_firstLine;
    NSString *_secondLine;
    NSNumber *_rating;
    NSString *_address;
    MKMapItem *_mapItem;
    CDUnknownBlockType _updateBlock;
    NSSet *_observedKeyPaths;
    id _observedObject;
    NSString *_debugSubtitle;
}

+ (id)modelWithUpdateBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *debugSubtitle; // @synthesize debugSubtitle=_debugSubtitle;
@property(retain, nonatomic) id observedObject; // @synthesize observedObject=_observedObject;
@property(retain, nonatomic) NSSet *observedKeyPaths; // @synthesize observedKeyPaths=_observedKeyPaths;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *secondLine; // @synthesize secondLine=_secondLine;
@property(copy, nonatomic) NSString *firstLine; // @synthesize firstLine=_firstLine;
- (void).cxx_destruct;
- (void)markAsUpdated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeObject:(id)arg1 forKeyPaths:(id)arg2;
- (void)dealloc;

@end
