//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICApp, NSString, UIImage, WFAccessResource;

@interface WFGalleryService : NSObject
{
    NSString *_name;
    UIImage *_icon;
    ICApp *_app;
    WFAccessResource *_accessResource;
}

+ (id)serviceWithAccessResource:(id)arg1;
+ (id)serviceWithApp:(id)arg1;
+ (id)servicesForWorkflow:(id)arg1;
@property(readonly, nonatomic) WFAccessResource *accessResource; // @synthesize accessResource=_accessResource;
@property(readonly, nonatomic) ICApp *app; // @synthesize app=_app;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)loadIconWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
