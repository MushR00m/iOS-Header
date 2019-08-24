//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class FCFeedDescriptor, FCOperation, FRFeedCollectionViewLayoutBlueprintRefreshDetector, FRFeedDataStorage, FRSectionHeaderButtonController, FRSubscriptionPlacardCreator, NFLFeedSettings, NSString, TSBlockingPluginManager;
@protocol FRFeldsparContext, TSChannelIssuesPluginFactoryType, TSForYouMagazinesPluginFactoryType, TSMoreVideosPluginFactoryType, TSTopVideosPluginFactoryType;

@interface FRFeedCollectionViewLayoutBlueprintRefreshModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    _Bool _offline;
    _Bool _waitable;
    id <FRFeldsparContext> _feldsparContext;
    NFLFeedSettings *_feedSettings;
    FRFeedDataStorage *_feedDataStorage;
    unsigned long long _refreshKind;
    FRFeedCollectionViewLayoutBlueprintRefreshDetector *_refreshDetector;
    FCFeedDescriptor *_feed;
    FCOperation *_inPlaceRefreshOperation;
    FCOperation *_fullRefreshOperation;
    FRSectionHeaderButtonController *_buttonController;
    TSBlockingPluginManager *_pluginManager;
    id <TSTopVideosPluginFactoryType> _topVideosPluginFactory;
    id <TSMoreVideosPluginFactoryType> _moreVideosPluginFactory;
    id <TSChannelIssuesPluginFactoryType> _channelIssuesPluginFactory;
    id <TSForYouMagazinesPluginFactoryType> _magazinesPluginFactory;
    FRSubscriptionPlacardCreator *_subscriptionPlacardCreator;
    unsigned long long _modification;
    NSString *_identifier;
    long long _priority;
}

@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
@property(nonatomic) _Bool waitable; // @synthesize waitable=_waitable;
@property(readonly, nonatomic) FRSubscriptionPlacardCreator *subscriptionPlacardCreator; // @synthesize subscriptionPlacardCreator=_subscriptionPlacardCreator;
@property(retain, nonatomic) id <TSForYouMagazinesPluginFactoryType> magazinesPluginFactory; // @synthesize magazinesPluginFactory=_magazinesPluginFactory;
@property(retain, nonatomic) id <TSChannelIssuesPluginFactoryType> channelIssuesPluginFactory; // @synthesize channelIssuesPluginFactory=_channelIssuesPluginFactory;
@property(retain, nonatomic) id <TSMoreVideosPluginFactoryType> moreVideosPluginFactory; // @synthesize moreVideosPluginFactory=_moreVideosPluginFactory;
@property(retain, nonatomic) id <TSTopVideosPluginFactoryType> topVideosPluginFactory; // @synthesize topVideosPluginFactory=_topVideosPluginFactory;
@property(retain, nonatomic) TSBlockingPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(retain, nonatomic) FRSectionHeaderButtonController *buttonController; // @synthesize buttonController=_buttonController;
@property(nonatomic) __weak FCOperation *fullRefreshOperation; // @synthesize fullRefreshOperation=_fullRefreshOperation;
@property(nonatomic) __weak FCOperation *inPlaceRefreshOperation; // @synthesize inPlaceRefreshOperation=_inPlaceRefreshOperation;
@property(copy, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintRefreshDetector *refreshDetector; // @synthesize refreshDetector=_refreshDetector;
@property(nonatomic) unsigned long long refreshKind; // @synthesize refreshKind=_refreshKind;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) FRFeedDataStorage *feedDataStorage; // @synthesize feedDataStorage=_feedDataStorage;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (_Bool)isTopStoriesSectionContentAreSame:(id)arg1 after:(id)arg2;
- (_Bool)shouldContinueForAnimationWithDiff:(id)arg1 leftBlueprint:(id)arg2 rightBlueprint:(id)arg3;
- (_Bool)shouldAttemptFullRefreshBasedOnCurrentBlueprint:(id)arg1;
- (id)bookmarkForTopOfBlueprint:(id)arg1;
- (unsigned long long)requestAnimationForDiff:(id)arg1;
- (void)runFullRefreshOperationAroundBookmark:(id)arg1 ifRequired:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runInPlaceRefreshOperationInBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(readonly, copy) NSString *description;
- (id)initWithFeldsparContext:(id)arg1 feedSettings:(id)arg2 feedDataStorage:(id)arg3 offline:(_Bool)arg4 refreshKind:(unsigned long long)arg5 refreshDetector:(id)arg6 feed:(id)arg7 buttonController:(id)arg8 pluginManager:(id)arg9 topVideosPluginFactory:(id)arg10 moreVideosPluginFactory:(id)arg11 channelIssuesPluginFactory:(id)arg12 magazinesPluginFactory:(id)arg13 subscriptionPlacardCreator:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
