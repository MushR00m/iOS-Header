//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFAccount, NSString, SVSStarkView;

@protocol SVSStarkViewDataSource <NSObject>
- (long long)userAccountCountForStarkView:(SVSStarkView *)arg1;
- (AFAccount *)activeAccountForStarkView:(SVSStarkView *)arg1;
- (NSString *)assistantVersionForStarkView:(SVSStarkView *)arg1;
@end

