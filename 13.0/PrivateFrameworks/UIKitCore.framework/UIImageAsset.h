//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class CUINamedLayerStack, NSBundle, NSString, UITraitCollection, _UIAssetManager;

@interface UIImageAsset : NSObject <NSSecureCoding>
{
    _UIAssetManager *_assetManager;
    NSBundle *_containingBundle;
    _Bool _cacheContents;
    UITraitCollection *_defaultTraitCollection;
    struct {
        unsigned int hasRegisteredImages:1;
        unsigned int supportsBlockGeneration:1;
        unsigned int disconnectedFromAssetManager:1;
    } _assetFlags;
    CDUnknownBlockType _creationBlock;
    NSString *_assetName;
    CUINamedLayerStack *__layerStack;
}

+ (_Bool)supportsSecureCoding;
+ (id)_dynamicAssetNamed:(id)arg1 generator:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) CUINamedLayerStack *_layerStack; // @synthesize _layerStack=__layerStack;
@property(copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly, nonatomic) __weak _UIAssetManager *_assetManager; // @synthesize _assetManager;
- (void).cxx_destruct;
- (id)_cachedRenditionWithSize:(struct CGSize)arg1 tintColor:(id)arg2 traitCollection:(id)arg3 bold:(_Bool)arg4 letterpress:(_Bool)arg5 drawMode:(unsigned int)arg6;
- (void)_cacheRendition:(id)arg1 forSize:(struct CGSize)arg2 tintColor:(id)arg3 traitCollection:(id)arg4 bold:(_Bool)arg5 letterpress:(_Bool)arg6 drawMode:(unsigned int)arg7;
- (id)_renditionCache:(_Bool)arg1;
- (id)_registeredAppearanceNames;
- (id)_lookUpRegisteredObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(CDUnknownBlockType)arg2;
- (void)_disconnectFromAssetManager;
- (_Bool)_containsImagesInPath:(id)arg1;
- (void)_clearResolvedImageResources;
@property(readonly, nonatomic) UITraitCollection *_defaultTraitCollection;
- (id)_mutableCatalog;
- (id)_updateAssetFromBlockGenerationWithConfiguration:(id)arg1 resolvedCatalogImage:(id)arg2;
- (void)_registerImage:(id)arg1 withConfiguration:(id)arg2;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (_Bool)isEqual:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;
- (void)unregisterImageWithConfiguration:(id)arg1;
- (void)registerImage:(id)arg1 withConfiguration:(id)arg2;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (id)imageWithConfiguration:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (id)_symbolConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)init;

@end
