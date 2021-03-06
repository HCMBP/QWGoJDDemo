//
//  QWCatelogListParam.h
//  QW京东Demo
//
//  Created by mac on 16/1/21.
//  Copyright © 2016年 mac. All rights reserved.
//  应用级别输入参数(获取商品类目信息接口)

#import <Foundation/Foundation.h>

@interface QWCatelogListParam : NSObject

/**
 *  类目编号
 */
@property (nonatomic, copy) NSString *catelogyId;
/**
 *  类目分类
 */
@property (nonatomic, copy) NSString *level;
/**
 *  是否加载下级图标
 */
@property (nonatomic, copy) NSString *isIcon;
/**
 *  是否加载下级描述
 */
@property (nonatomic, copy) NSString *isDescription;
/**
 *  客户端类型(目前暂时只支持apple)
 */
@property (nonatomic, copy) NSString *client;

@end