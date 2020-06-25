//命名空间的声明using


//标准库类型string
//需要声明头文件#include <string>

//string表示可变长的字符序列
//string初始化问题,直接初始化与拷贝初始化
//如果使用了=,则为拷贝初始化,否则为直接初始化
//string s = "hello world"
//string s("hello world")

//string的常见操作
//os<<s
//is>>s                 输入流对左侧空格不敏感,以右侧空格为终止
//getline(is,s)         输入流对换行符敏感
//s.size()              返回一个string::size_type类型的值!这是一种特别的无符号类型
//s.empty()             返回一个布尔值
//s[n]
//string函数的比较      从头到尾比较直到相异字符出现,否则短的string比较小

//使用for循环 遍历字符串
//string s("hello world");
//for(auto c : s)
//cout<<c<<endl;

//使用for循环 修改字符串
//需要使用引用
//string s("hello world");
//for(auto &c : s)
//c = toupper(c);
//cout<<s<<endl;

//使用for循环 处理部分字符串
//借助下标符[]精准打击


//标准库类型vector
//需要声明头文件#include <vector>
//vector是一种容器,能够容纳大部分类型的对象

//定义与初始化
//vector<T> v1;
//vector<T> v2(v1);
//vector<T> v2 = v1;
//vector<T> v1(n,val);
//vector<T> v1(n);
//vector<T> v1{a,b,c,d...};
//vector<T> v1={a,b,c,d...};
//{}用来表示列表初始化,()用来表示元素数量

//vector的操作
//v.size()
//v.empty()
//v.push_back()
//v[n]

//vector的添加
//vector<int> v1;
//for(int i = 0;i != 100; i++)
//v2.push_back(i);

//string word;
//vector<string> v2;
//while(cin>>word)
//v2.push_back(word);

//使用for循环 遍历vector
//vector<int> v(10,1);
//for(auto c : v)
//cout<<c<<endl;

//使用for循环 修改vector
//需要使用引用
//vector<int> v(10,1);
//for(auto &c : s)
//c = c + 1;

//不能通过下标的方式为vector添加元素!


//迭代器
//所有容器都可以使用迭代器,但只有少数几种才支持下标访问
//begin and end
//通过++实现迭代器的移动
//for (auto it = s.begin();it != s.end() && !isspace(*it);++i)
//*it = toupper(*it);

//定义箭头指示符->表示解引用与成员访问两个操作的结合
//(*it).empty即为it->empyt()

//迭代器与push_back不能同时使用,会失效
//使用迭代器进行二分查找
//auto beg = text.begin(),end = text.end()
//auto mid = text.begin() + text.size()/2
//while(mid != end && *mid != aim)
//{
//      if(aim < *mid) end = mid;
//      else end = beg + 1;
//      mid = beg + (end - beg)/2;
//}


//数组
//数组的初始化
//字符数组结尾处具有一个空字符'\0'
//数组之间不能相互拷贝与赋值

//复杂的指针声明
//int *p[10];               定义含有10个整型指针的数组
//int &p[10];               错误!不存在引用的数组!
//int (*p)[10] = &a;        p指向一个含有十个整数的数组
//int (&ar)[10] = a;        ar引用一个含有10个整数的数组

//通过for或者下标对数组进行访问,与string和vector类似
//指针往往与数组联系紧密
//指针默认指向数组开头
//例如 auto p(a) 即为 auto p(&a[0])
//指针本身也是一个迭代器

//指针中也有begin与end函数,与容器中的同名
//功能类似,不过参数是数组
//int a[]={1,2,3};
//int *beg = begin(a);
//int *last = end(a);

//c语言标准库string.h提供了一组操作字符串的函数,在C++里被包含在cstring头文件中
//strlen(p)
//strcmp(p1,p2)
//strcat(p1,p2)
//strcpy(p1,p2)

