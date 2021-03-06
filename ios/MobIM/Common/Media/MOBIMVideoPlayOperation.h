//
//  MOBIMVideoPlayOperation.h
//  MOBIMDemo
//
//  Created by hower on 2017/9/26.
//  Copyright © 2017年 MOB. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

//G－C－D
#define BACK(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define MAIN(block) dispatch_async(dispatch_get_main_queue(),block)


typedef void(^VideoCode)(UIImage *imageData,NSString *filePath, CGImageRef tpImage);
typedef void(^VideoStop)(NSString *filePath);


@interface MOBIMVideoPlayOperation : NSBlockOperation

@property (nonatomic, copy) VideoCode videoBlock;
@property (nonatomic, copy) VideoStop stopBlock;
- (void)videoPlayTask:(NSString *)filePath;
@end
