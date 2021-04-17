//
//  PodUtil.m
//  PodUtil
//
//  Created by yinjianpeng on 2021/4/17.
//

#import "PodUtil.h"

@implementation PodUtil

@end

@implementation Teacher

+(void)sayHi
{

    //类方法中，不能使用实例变量（调用类方法时，没有创建对象，所以不能调用实例变量）
    NSLog(@"hello,class");
}


//无返回值，方法的返回值用（）括起来。无参数
-(void)sayHello
{
    NSLog(@"hello,instance");
}


//有参数，无返回值
-(void)setname:(NSString *)name  setAge:(NSInteger)age
{
    _name = name;
    _age = age;
}


//有返回值，无参数
-(NSString *)getName
{
    return _name;
}

//无返回值有参数（1个参数）,参数以：开头，类型用（）括起来
-(void)eat:(NSString *)food
{
    NSLog(@"The food I eat is %@",food);
}

@end
