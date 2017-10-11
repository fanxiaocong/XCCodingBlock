//
//  XCPropertyCodingBlock.h
//  XCCodingBlockExample
//
//  Created by 樊小聪 on 2017/10/9.
//  Copyright © 2017年 樊小聪. All rights reserved.
//

#ifndef XCPropertyCodingBlock_h
#define XCPropertyCodingBlock_h

/**
 *  const属性 fxcconst
 */
static NSString *const <#varibleName#> = @"<#varibleValue#>";


/**
 *  weak属性 fxcweak
 */
@property (weak, nonatomic) <#class#> *<#pram#>;

/**
 *  strong属性 fxcstrong
 */
@property (strong, nonatomic) <#class#> *<#pram#>;

/**
 *  assign属性 fxcassign
 */
@property (assign, nonatomic) <#class#> <#pram#>;

/**
 *  copy属性 fxccopy
 */
@property (copy, nonatomic) <#class#> *<#pram#>;

/**
 *  NSString属性 fxcstring
 */
@property (copy, nonatomic) NSString *<#pram#>;

/**
 *  block属性 fxcblock
 */
@property (copy, nonatomic) <#ReturnType#>(^<#BlockName#>)(<#param#>);


#endif /* XCPropertyCodingBlock_h */
