//基本内置类型
//整型（包括字符串与布尔值）与浮点型
# include<iostream>
using namespace std;
int main()
{
    unsigned u = 10;
    int i = -42;
    cout << i + u << endl;
    cout << u + i << endl;
    return 0;
}
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
//test