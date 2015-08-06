//
//  KTJNightVersionHelper.h
//  Demo - KTJNightVersion
//
//  Created by 孙继刚 on 15/8/5.
//  Copyright (c) 2015年 Madordie. All rights reserved.
//

#ifndef Demo___KTJNightVersion_KTJNightVersionHelper_h
#define Demo___KTJNightVersion_KTJNightVersionHelper_h

#import "KTJNightVersion.h"
#import "UIView+KTJNightVersion.h"
#import "UILabel+KTJNightVersion.h"
#import "UIImageView+KTJNightVersion.h"
#import "UIButton+KTJNightVersion.h"
#import "UITableView+KTJNightVersion.h"
#import "UIBarButtonItem+KTJNightVersion.h"
#import "UINavigationBar+KTJNightVersion.h"

#endif


#if 0   //  使用例子

- (void)configureNightStyle {
    //  1、
    [KTJNightVersion addClassToSet:self.view.class];
    [KTJNightVersion addClassToSet:[UILabel class]];
    [KTJNightVersion addClassToSet:[UIButton class]];
    [KTJNightVersion addClassToSet:[UIImageView class]];
    [KTJNightVersion addClassToSet:[UINavigationBar class]];
    
    //  2、
    self.view.backgroundColor = [UIColor colorWithRed: 0.8686 green: 0.8686 blue: 0.8686 alpha: 1.0];
    self.view.ktj_nightBackgroudColor = [UIColor grayColor];
    
    self.label.textColor = [UIColor colorWithRed: 0.769 green: 0.1828 blue: 0.7604 alpha: 1.0];
    self.label.ktj_nightTextColor = [UIColor colorWithRed: 1.0 green: 0.2528 blue: 1.0 alpha: 1.0];
    
    self.button.ktj_normalTitleColor = [UIColor blueColor];
    self.button.ktj_nightTitleColor = [UIColor colorWithRed: 0.0077 green: 0.128 blue: 0.7078 alpha: 1.0];
    
    self.imageView.ktj_normalImage = [UIImage imageNamed:@"01"];
    self.imageView.ktj_nightImage = [UIImage imageNamed:@"02"];
    
    
    self.navigationController.navigationBar.ktj_normalBarTintColor = [UIColor orangeColor];
    self.navigationController.navigationBar.ktj_nightBarTintColor = [UIColor greenColor];
    
    //  3、请根据需要自由玩耍。
    //     正常
    [KTJNightVersion changeToNormal];
    //      夜间
    [KTJNightVersion changeToNight];
    
#if 0
    
    如果你想使用
    [UINavigationBar appearance].ktj_normalBarTintColor = [UIColor orangeColor];
    [UINavigationBar appearance].ktj_nightBarTintColor = [UIColor greenColor];
    
    请放置在 UINavigationController 创建之前。比如：
    
    [UINavigationBar appearance].ktj_normalBarTintColor = [UIColor orangeColor];
    [UINavigationBar appearance].ktj_nightBarTintColor = [UIColor greenColor];
    self.window.rootViewController = [[UINavigationController alloc] initWithRootViewController:[RootViewController new]];
    即可
    
#endif
}

#endif