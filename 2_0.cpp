//基本内置类型
//整型（包括字符串与布尔值）与浮点型

//常见的转义字符，比较搞的回车与换行符？
//变量：提供一个具名的，可供程序操作的存储空间
//初始化虽然有着“=”，但不等于赋值，初始化包含创建的过程
//列表初始化，一种有意思的初始化方法，{}或（）
//int main()
//{
//    long double ld = 3.1415926536;
//    int a( ld );
//    int b{ ld };
//    cout << a << endl;
//    return 0;
//}
//声明与定义，目的：支持分离式编译
//变量具有自己的作用域


//复合类型：引用与指针

//引用：Type &newName = oldName
//引用本身并不创建对象，只是为一个已存在的对象创建了一个别名

//指针：Type *Name = &Adress;（*为指针的定义符，&为取地址符）
//从左到右分别是定义了一个Type类型的指针Name，随后将其初始化，并指向了名为Adress的对象
//指针本身就是一个对象，指针不可以指向引用，因为指针必需指向对象
//允许使用解引用符*来访问对象
//对指针解引用的结果进行修改，会修改所指的对象

//要根据实际情况来确定*与&的含义
//# include<iostream>
//int main()
//{
//    int i = 42;             
//    int* p;         //定义指针
//    int*& r = p;    //对指针进行引用
//    r = &i;         //r是指针的引用，所以给r赋值就是给p赋值
//    *r = 0;         //对r进行解引用并将值改为0
//    std::cout << i << std::endl;
//    return 0;
//}

//const 限定常量，必须在初始化时被赋值
//const 的引用（常量引用），在创建一个const引用时，引用的对象是啥玩意儿都不重要,但常量引用之后
//就不能通过引用对对象进行修改,但对原本的对象进行修改则没事
//# include<iostream>
//int main()
//{
//    int i = 42;             
//    const int& r = i;
//    //r++;
//    //i++;
//    std::cout << r << std::endl;
//    return 0;
//}
//普通指针不能指向一个常量,需要常量指针表示指向常量对象
//const指针
//int Num = 0;
//int *const pNum = &Num;           //底层const表示这个指针是固定的指向,这个pNum的指针固定指向Num
//const double Pi = 3.1415;
//const double *const pPi = &pi;    //顶层const表示这是一个指向常量对象的常量指针

//constexpr类型,把常量的判断交给编译器
//但constexpr与指针一起使用的时候默认定义如同底层const

//使用typedef定义类型别名
//typedef oldName newName;

//auto自动类型说明符,定义的变量必须有初始值