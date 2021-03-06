//
//  UIView+KTJNightVersion.h
//  Demo - KTJNightVersion
//
//  Created by 孙继刚 on 15/8/5.
//  Copyright (c) 2015年 Madordie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KTJNightVersion.h"

@interface UIView (KTJNightVersion) <KTJNightVersionChangeColorProtocol>

@property (nonatomic, strong) UIColor *ktj_nightBackgroudColor;
@property (nonatomic, strong) UIColor *ktj_normalBackgroudColor;

@property (nonatomic, strong) UIColor *ktj_nightTintColor;
@property (nonatomic, strong) UIColor *ktj_normalTintColor;

@end
