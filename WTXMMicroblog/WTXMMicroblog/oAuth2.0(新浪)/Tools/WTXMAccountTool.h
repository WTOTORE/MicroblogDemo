//
//  WTXMAccountTool.h
//  WTXMMicroblog
//
//  Created by 王涛 on 15/8/20.
//  Copyright (c) 2015年 王涛. All rights reserved.
//

#import <Foundation/Foundation.h>
@class WTXMAccountModel;
@interface WTXMAccountTool : NSObject
+ (void)saveAccount:(WTXMAccountModel *)account;
+ (WTXMAccountModel *)account;
@end
