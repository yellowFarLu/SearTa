//
//  HYPinyinOC.h
//  searHim重制版-01基本框架构建
//
//  Created by 黄远 on 16/7/12.
//  Copyright © 2016年 黄远. All rights reserved.
//

#import <Foundation/Foundation.h>
#define ALPHA	@"ABCDEFGHIJKLMNOPQRSTUVWXYZ#"


@interface HYPinyinOC : NSObject

//char pinyinFirstLetter(unsigned short hanzi);

+ (char)pinyinFirstLetter:(unsigned short)hanzi;

@end
