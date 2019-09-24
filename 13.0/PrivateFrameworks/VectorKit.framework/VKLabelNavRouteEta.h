//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKLabelNavFeature-Protocol.h>

@class NSString, VKLabelNavRoadLabel, VKRouteEtaDescription, VKRouteInfo;

__attribute__((visibility("hidden")))
@interface VKLabelNavRouteEta : NSObject <VKLabelNavFeature>
{
    VKLabelNavRoadLabel *_etaLabel;
    unsigned long long _etaLabelArtworkKey;
    _Bool _isAwayFromRoute;
    _Bool _isOnRoute;
    struct PolylineCoordinate _routeOffset;
    _Bool _selected;
    VKRouteInfo *_routeInfo;
    VKRouteEtaDescription *_displayEtaDescription;
    _Bool _isPicked;
    _Bool _isRepositioning;
    unsigned char _orientation;
}

+ (unsigned char)toStyleEtaComparison:(unsigned char)arg1;
+ (shared_ptr_c5d816ee)styleQueryForNavContext:(const struct NavContext *)arg1 selected:(_Bool)arg2 focused:(_Bool)arg3 etaComparison:(unsigned char)arg4 transportType:(unsigned char)arg5;
+ (id)artworkForEtaDescription:(id)arg1 navContext:(const struct NavContext *)arg2 styleQuery:(shared_ptr_c5d816ee)arg3 orientation:(unsigned char)arg4 artworkCache:(struct VKLabelNavArtworkCache *)arg5 selected:(_Bool)arg6;
@property(nonatomic) _Bool isRepositioning; // @synthesize isRepositioning=_isRepositioning;
@property(nonatomic) _Bool isPicked; // @synthesize isPicked=_isPicked;
@property(readonly, nonatomic) VKRouteEtaDescription *displayEtaDescription; // @synthesize displayEtaDescription=_displayEtaDescription;
@property(retain, nonatomic) VKRouteInfo *routeInfo; // @synthesize routeInfo=_routeInfo;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) VKLabelNavRoadLabel *label; // @synthesize label=_etaLabel;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) _Bool isAwayFromRoute; // @synthesize isAwayFromRoute=_isAwayFromRoute;
@property(readonly, nonatomic) _Bool isOnRoute; // @synthesize isOnRoute=_isOnRoute;
- (id).cxx_construct;
- (void)repositionAtRouteCoord:(struct PolylineCoordinate)arg1;
@property(readonly, nonatomic) _Bool isTrafficCameraFeature;
@property(readonly, nonatomic) _Bool isEtaFeature;
@property(readonly, nonatomic) long long intraRoadPriority;
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isRamp;
- (_retain_ptr_86da96eb)updateRoadSignWithNavContext:(const struct NavContext *)arg1 artworkCache:(struct VKLabelNavArtworkCache *)arg2;
- (Box_8bd38d92)labelRectForOrientation:(unsigned char)arg1 styleQuery:(const shared_ptr_c5d816ee *)arg2 navContext:(const struct NavContext *)arg3 anchorPosition:(Matrix_8746f91e)arg4 artworkCache:(struct VKLabelNavArtworkCache *)arg5;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
- (void)createLabelWithNavContext:(const struct NavContext *)arg1 orientation:(unsigned char)arg2 etaDescription:(id)arg3 selected:(_Bool)arg4 artworkCache:(struct VKLabelNavArtworkCache *)arg5;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)_clearLabel;
- (void)dealloc;
@property(readonly, nonatomic) unsigned char etaComparisonToMain;
- (id)initWithRouteInfo:(id)arg1 routeCoord:(struct PolylineCoordinate)arg2;
@property(nonatomic) unsigned char orientation;
@property(readonly, nonatomic) Matrix_6e1d3589 worldPoint;

@end
