//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VenueCardFactory-Protocol.h"
#import "VenueCardStackObserver-Protocol.h"

@class NSMapTable;
@protocol VenueCardFactoryDelegate, VenueChangeNotifier;

__attribute__((visibility("hidden")))
@interface VenueCardFactory : NSObject <VenueCardFactory, VenueCardStackObserver>
{
    id <VenueChangeNotifier> _changeNotifier;
    NSMapTable *_cardItemToViewControllerMapping;
    id <VenueCardFactoryDelegate> _delegate;
}

@property(nonatomic) __weak id <VenueCardFactoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cardStack:(id)arg1 didChangeStack:(id)arg2;
- (id)existingViewControllerForCardItem:(id)arg1;
- (id)viewControllerForCardItem:(id)arg1;
- (id)init;
- (id)initWithChangeNotifier:(id)arg1;

@end
