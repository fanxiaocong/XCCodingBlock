//
//  XCOtherCodingBlock.h
//  XCCodingBlockExample
//
//  Created by 樊小聪 on 2017/10/9.
//  Copyright © 2017年 樊小聪. All rights reserved.
//

#ifndef XCOtherCodingBlock_h
#define XCOtherCodingBlock_h


/// extension代码 fxcextension
@interface <#class#> ()

@end



/// ignored代码 fxcignore
#pragma clang diagnostic push
#pragma clang diagnostic ignored <#"-Wdeprecated-declarations"#>
<#code#>
#pragma clang diagnostic pop



/// singleTon代码 fxcsingle
static id *_instance = nil;

+ (instancetype)shareInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance = [[self alloc] init];
    });
    return _instance;
}



/// init代码 fxcinit
#pragma mark - 👀 Init Method 👀 💤

- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super initWithCoder:aDecoder])
    {
        // 设置默认参数
        [self setupDefaults];
    }
    
    return self;
}

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame])
    {
        // 设置默认参数
        [self setupDefaults];
    }
    
    return self;
}

// 设置默认参数
- (void)setupDefaults
{
    
}




/// lazyLoad代码 fxclazy
- (<#Class#> *)<#para#>
{
    if (!<#para#>)
    {
        <#para#> = [<#Class#> <#classMethod#>];
    }
    return <#para#>;
}



/// afterDispath代码 fxcafter
dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(<#delayInSeconds#> * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
    <#code to be executed after a specified delay#>
});



/// cellRegister代码 fxcregister
[self.tableView registerNib:[UINib nibWithNibName:<#(nonnull NSString *)#> bundle:nil] forCellReuseIdentifier:<#(nonnull NSString *)#>];



/// tableViewDataSource代码 fxccell
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return <#section#>;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    <#cellClass#> *<#cell#> = [tableView dequeueReusableCellWithIdentifier:<#(nonnull NSString *)#> forIndexPath:<#(nonnull NSIndexPath *)#>];
    return <#cell#>;
}



/// alertViewController代码 fxcalertview

/// 弹出 警告框
UIAlertController *alertVc = [UIAlertController alertControllerWithTitle:<#title#> message:<#message#> preferredStyle:UIAlertControllerStyleAlert];

// 点击取消
UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:<#title#> style:UIAlertActionStyleDefault handler:<#^(UIAlertAction * _Nonnull action)handler#>];

// 点击确定
UIAlertAction *enterAction = [UIAlertAction actionWithTitle:<#title#> style:UIAlertActionStyleDefault handler:<#^(UIAlertAction * _Nonnull action)handler#>];

[alertVc addAction:cancelAction];
[alertVc addAction:enterAction];

[self presentViewController:alertVc animated:YES completion:NULL];


#endif /* XCOtherCodingBlock_h */
