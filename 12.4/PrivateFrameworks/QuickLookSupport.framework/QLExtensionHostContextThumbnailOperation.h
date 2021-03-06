//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookSupport/QLAsynchronousOperation.h>

@class QLThumbnailHostContext;
@protocol QLSExtensionThumbnailItem, QLThumbnailSurfaceGeneratorProtocol;

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation
{
    QLThumbnailHostContext *_hostContext;
    CDUnknownBlockType _serviceErrorHandler;
    CDUnknownBlockType _completionHandler;
    id <QLThumbnailSurfaceGeneratorProtocol> _ioSurfaceGenerator;
    id <QLSExtensionThumbnailItem> _item;
    double _minimumSize;
    double _scale;
    unsigned long long _badgeType;
    struct CGSize _size;
}

@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) id <QLSExtensionThumbnailItem> item; // @synthesize item=_item;
@property(retain, nonatomic) id <QLThumbnailSurfaceGeneratorProtocol> ioSurfaceGenerator; // @synthesize ioSurfaceGenerator=_ioSurfaceGenerator;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType serviceErrorHandler; // @synthesize serviceErrorHandler=_serviceErrorHandler;
@property(retain, nonatomic) QLThumbnailHostContext *hostContext; // @synthesize hostContext=_hostContext;
- (void).cxx_destruct;
- (void)finish;
- (void)main;
- (id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 minimumSize:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 ioSurfaceGenerator:(id)arg7 completionHandler:(CDUnknownBlockType)arg8 serviceErrorHandler:(CDUnknownBlockType)arg9;

@end

