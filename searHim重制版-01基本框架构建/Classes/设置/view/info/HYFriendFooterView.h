//
//  HYFriendFooterView.h
//  searHim重制版-01基本框架构建
//
//  Created by 黄远 on 16/7/12.
//  Copyright © 2016年 黄远. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HYFriendFooterView;

@protocol HYFriendFooterViewDelegate <NSObject>
@required
- (void)didClickSendMsgWithFooterView:(HYFriendFooterView*)friendFooterView;

@end

@interface HYFriendFooterView : UIView

+ (instancetype)friendFooterView;

@property (nonatomic, weak) id<HYFriendFooterViewDelegate> delegate;

@end
