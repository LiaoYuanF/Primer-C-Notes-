//�����ռ������using


//��׼������string
//��Ҫ����ͷ�ļ�#include <string>

//string��ʾ�ɱ䳤���ַ�����
//string��ʼ������,ֱ�ӳ�ʼ���뿽����ʼ��
//���ʹ����=,��Ϊ������ʼ��,����Ϊֱ�ӳ�ʼ��
//string s = "hello world"
//string s("hello world")

//string�ĳ�������
//os<<s
//is>>s                 �����������ո�����,���Ҳ�ո�Ϊ��ֹ
//getline(is,s)         �������Ի��з�����
//s.size()              ����һ��string::size_type���͵�ֵ!����һ���ر���޷�������
//s.empty()             ����һ������ֵ
//s[n]
//string�����ıȽ�      ��ͷ��β�Ƚ�ֱ�������ַ�����,����̵�string�Ƚ�С

//ʹ��forѭ�� �����ַ���
//string s("hello world");
//for(auto c : s)
//cout<<c<<endl;

//ʹ��forѭ�� �޸��ַ���
//��Ҫʹ������
//string s("hello world");
//for(auto &c : s)
//c = toupper(c);
//cout<<s<<endl;

//ʹ��forѭ�� �������ַ���
//�����±��[]��׼���


//��׼������vector
//��Ҫ����ͷ�ļ�#include <vector>
//vector��һ������,�ܹ����ɴ󲿷����͵Ķ���

//�������ʼ��
//vector<T> v1;
//vector<T> v2(v1);
//vector<T> v2 = v1;
//vector<T> v1(n,val);
//vector<T> v1(n);
//vector<T> v1{a,b,c,d...};
//vector<T> v1={a,b,c,d...};
//{}������ʾ�б��ʼ��,()������ʾԪ������

//vector�Ĳ���
//v.size()
//v.empty()
//v.push_back()
//v[n]

//vector�����
//vector<int> v1;
//for(int i = 0;i != 100; i++)
//v2.push_back(i);

//string word;
//vector<string> v2;
//while(cin>>word)
//v2.push_back(word);

//ʹ��forѭ�� ����vector
//vector<int> v(10,1);
//for(auto c : v)
//cout<<c<<endl;

//ʹ��forѭ�� �޸�vector
//��Ҫʹ������
//vector<int> v(10,1);
//for(auto &c : s)
//c = c + 1;

//����ͨ���±�ķ�ʽΪvector���Ԫ��!


//������
//��������������ʹ�õ�����,��ֻ���������ֲ�֧���±����
//begin and end
//ͨ��++ʵ�ֵ��������ƶ�
//for (auto it = s.begin();it != s.end() && !isspace(*it);++i)
//*it = toupper(*it);

//�����ͷָʾ��->��ʾ���������Ա�������������Ľ��
//(*it).empty��Ϊit->empyt()

//��������push_back����ͬʱʹ��,��ʧЧ
//ʹ�õ��������ж��ֲ���
//auto beg = text.begin(),end = text.end()
//auto mid = text.begin() + text.size()/2
//while(mid != end && *mid != aim)
//{
//      if(aim < *mid) end = mid;
//      else end = beg + 1;
//      mid = beg + (end - beg)/2;
//}


//����
//����ĳ�ʼ��
//�ַ������β������һ�����ַ�'\0'
//����֮�䲻���໥�����븳ֵ

//���ӵ�ָ������
//int *p[10];               ���庬��10������ָ�������
//int &p[10];               ����!���������õ�����!
//int (*p)[10] = &a;        pָ��һ������ʮ������������
//int (&ar)[10] = a;        ar����һ������10������������

//ͨ��for�����±��������з���,��string��vector����
//ָ��������������ϵ����
//ָ��Ĭ��ָ�����鿪ͷ
//���� auto p(a) ��Ϊ auto p(&a[0])
//ָ�뱾��Ҳ��һ��������

//ָ����Ҳ��begin��end����,�������е�ͬ��
//��������,��������������
//int a[]={1,2,3};
//int *beg = begin(a);
//int *last = end(a);

//c���Ա�׼��string.h�ṩ��һ������ַ����ĺ���,��C++�ﱻ������cstringͷ�ļ���
//strlen(p)
//strcmp(p1,p2)
//strcat(p1,p2)
//strcpy(p1,p2)

