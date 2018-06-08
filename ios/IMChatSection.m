//
//  IMChatSection.m
//  MobIMDemo
//
//  Created by scj on 2018/6/7.
//  Copyright © 2018年 Facebook. All rights reserved.
//

#import "IMChatSection.h"

@implementation IMChatSection

RCT_EXPORT_MODULE()

RCT_EXPORT_METHOD(IMChatPage){
  NSLog(@"goToChat");
  [[NSNotificationCenter defaultCenter]postNotificationName:@"goToChat"  object:nil];
}

@end
