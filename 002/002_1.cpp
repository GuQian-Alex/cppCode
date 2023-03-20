//静态成员变量的使用
//私有变量也是类外初始化，但是初始化后就不能再访问
#include<iostream>
using namespace std;

class Person
{
public:

static int m_A;
void showB()
{
    cout<<m_B;
}
private:
static int m_B;
};

int Person::m_A = 200;
int Person::m_B = 300;
void test01()
{
Person p;
cout<<p.m_A;
Person b;
Person::m_A = 100;
cout<<b.m_A;
cout<<Person::m_A;
//Person::m_B = 400;无法再访问m_B了
b.showB();
}

int main()
{
    test01();
    return 0;
}
