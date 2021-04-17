//
//  PodUtil2.m
//  PodUtil2
//
//  Created by yinjianpeng on 2021/4/17.
//

#import "PodUtil2.h"

@implementation PodUtil2

@end


@implementation Student

+(void)sayHi
{
    //类方法中，不能使用实例变量（调用类方法时，没有创建对象，所以不能调用实例变量）
    NSLog(@"hello,sdu");
}


//无返回值，方法的返回值用（）括起来。无参数
-(void)sayHello
{
    NSLog(@"hello,stu instance");
}

@end
