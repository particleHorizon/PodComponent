//
//  PodUtil.h
//  PodUtil
//
//  Created by yinjianpeng on 2021/4/17.
//

#import <Foundation/Foundation.h>

@interface PodUtil : NSObject

@end

@interface Teacher : NSObject
{


//    @public
//    NSString *_name;
//    //类的外部内部都可以使用，尽量不要使用
//
//
//
//    @protected

//
//    NSString *_gender;
//    //只能在类的内部和子类中才能使用,如果没有写关键字，默认为protected。
//
//    @private
//    NSInteger _age;      //在java中是类，在objective-c中是基本类型，只是typedef了一下；
//    //只能在类的外部和子类中使用，除非特殊的情况下才能用到。




    NSString *_name;
    NSString *_gender;
    NSInteger _age;
}


//oc中的方法分两种，类方法，实例方法

/*类方法只能用类调用   [ 类名  类方法名],   用  +   开头


    实例方法只能用对象调用， [对象 实例方法名];
 */


+(void)sayHi;
-(void)sayHello;


//函数名是由修饰词组成的，就是冒号：前面的词.
//方法名使用驼峰命名法:首字母小写，第一个参数修饰符，第二个参数修饰符首字母小写，同样使用驼峰命名法
-(void)setname:(NSString *)name setAge:(NSInteger )age;

//有返回值，无参数
-(NSString *)getName;

//无返回值有参数（1个参数）,参数以：开头，类型用（）括起来
-(void)eat:(NSString *)food;

//操作实例变量的setter和getter方法,这是一个特殊的方法，编译器在@property时会自动给你提供。
/*
1 .设置_name的值,
2. 是实例方法，只有一个参数跟操作的实例变量有关。
3. 方法名  set + 实例变量名（忽略_，遵守驼峰命名法)
4. 参数类型跟操作的实例变量的类型一致
5. 参数名是    实例变量名（忽略下划线_)
 */


-(void)setname:(NSString *)name;


//getter方法不用get开头。因为！@#￥%……&*（

//getter方法不用get开头。因为！@#￥%……&*（
/*
 1.getter方法是实例方法
 2.没有参数
 3.有返回值，返回值类型与操作的实例变量保持一致
 4.方法名  实例变量名（忽略_)  切记：不要以get开头
 */

-(NSString *)name;

@end
