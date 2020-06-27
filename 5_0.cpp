//语句作用域
//定义在控制结构中的变量只有在相应的作用域中可用


//条件语句
//if...else if...else if...else
//解决悬垂else问题:只与最近的if匹配
//switch
//需要注意不同的分支语句下的作用域问题


//迭代语句
//while

//传统for循环   
//for(起始条件;终止条件;步长)
//语言头的任意部分都可以省略,但;不能省
//范围for循环
//for(变量:序列)
//序列可以包括初始值列表,数组,vector或者string等(共同特点是拥有能返回迭代器的begin与end成员)

//do while
//不管怎样,至少执行一次循环


//跳转语句
//break         
//终止最近的迭代或者switch
//continue
//终止最近的当前迭代并开始下一次
//goto
//配合标签使用,可以在同一函数的语句之间实现无条件跳转
//return


//异常处理语句
//处理超出程序正常功能的反常行为

//throw表达式
//直接throw一种error

//try表达式
//try {
//    program statements
//}
//catch (exception declaration)
//{
//    handle statements
//}
//catch (exception declaration)
//{
//    handle statements
//}...

//异常类
