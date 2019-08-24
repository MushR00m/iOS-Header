//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SFDeviceAssetQuery : NSObject
{
    _Bool _forEngagement;
    _Bool _legacyFormats;
    struct LogCategory *_ucat;
    NSString *_assetType;
    unsigned long long _version;
    NSString *_productType;
    NSString *_mappedProductType;
    NSString *_marketingProductNumber;
    NSString *_mappedMarketingProductNumber;
    NSString *_enclosureMaterial;
    NSString *_color;
    NSString *_colorHousing;
    NSString *_colorCoverGlass;
    NSDictionary *_additionalQueryParameters;
}

+ (_Bool)deviceWantsLegacyFormats;
@property(readonly, nonatomic) NSDictionary *additionalQueryParameters; // @synthesize additionalQueryParameters=_additionalQueryParameters;
@property(readonly, nonatomic) NSString *colorCoverGlass; // @synthesize colorCoverGlass=_colorCoverGlass;
@property(readonly, nonatomic) NSString *colorHousing; // @synthesize colorHousing=_colorHousing;
@property(readonly, nonatomic) NSString *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *enclosureMaterial; // @synthesize enclosureMaterial=_enclosureMaterial;
@property(retain, nonatomic) NSString *mappedMarketingProductNumber; // @synthesize mappedMarketingProductNumber=_mappedMarketingProductNumber;
@property(readonly, nonatomic) NSString *marketingProductNumber; // @synthesize marketingProductNumber=_marketingProductNumber;
@property(retain, nonatomic) NSString *mappedProductType; // @synthesize mappedProductType=_mappedProductType;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) _Bool legacyFormats; // @synthesize legacyFormats=_legacyFormats;
@property(readonly, nonatomic) _Bool forEngagement; // @synthesize forEngagement=_forEngagement;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) struct LogCategory *ucat; // @synthesize ucat=_ucat;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)loggingMarketingProductNumber;
@property(readonly, nonatomic) NSString *effectiveMarketingProductNumber;
- (id)loggingProductType;
@property(readonly, nonatomic) NSString *effectiveProductType;
@property(readonly, nonatomic) NSString *variantIdentifier;
@property(readonly, nonatomic) NSString *stringIdentifier;
- (void)dealloc;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(_Bool)arg3;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2 enclosureMaterial:(id)arg3;
- (id)initWithPhoneCaseProductType:(id)arg1 color:(id)arg2;
- (id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3;
- (id)initWithAssetType:(id)arg1 productType:(id)arg2;

@end
