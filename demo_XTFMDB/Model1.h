//
//  Model1.h
//  XTkit
//
//  Created by teason23 on 2017/5/2.
//  Copyright © 2017年 teason. All rights reserved.


//#import "XTDBModel.h"
#import <Foundation/Foundation.h>

@interface Model1 : NSObject //XTDBModel

@property (nonatomic)       int             pkid        ;   //  继承XTDBModel时无需写这行

@property (nonatomic)       int             age         ;
@property (nonatomic)       float           floatVal    ;
@property (nonatomic)       long long       tick        ;
@property (nonatomic,copy)  NSString        *title      ;
@property (nonatomic,copy)  NSString        *abcabc     ;

@end
