#include <iostream>
using namespace std;
//静态成员函数的使用
class Person
{
public:
    static int m_A;
    int m_B;
    static void func1()
    {
    m_A = 200;
    cout<<m_A;
    //cout<<m_B;      非静态成员变量不可访问
    }
};
int Person::m_A = 100;

void test01()
{
Person p;
p.func1();
}
int main()
{
    test01();
    system("pause");
    return 0;
}