//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsSubscription/NPFamilySharingSetupPresenterType-Protocol.h>

@protocol NPFamilyEligibilityProviderType;

@interface NPFamilySharingSetupPresenter : NSObject <NPFamilySharingSetupPresenterType>
{
    id <NPFamilyEligibilityProviderType> _familyEligibilityProvider;
}

@property(readonly, nonatomic) id <NPFamilyEligibilityProviderType> familyEligibilityProvider; // @synthesize familyEligibilityProvider=_familyEligibilityProvider;
- (void).cxx_destruct;
- (void)presentFamilySharingSetupWith:(id)arg1;
- (id)initWithFamilyEligibilityProvider:(id)arg1;

@end
