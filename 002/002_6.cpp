#include <iostream>
using namespace std;
//const修饰成员函数 

class Person
{
    public:
    int m_A = 200;
    mutable int m_B=10;
    void func1() const
    {
        //m_A = 100;
        cout<<m_A; //可以访问，但是不能修改
        m_B = 100;
    }
    void func2()
    {}
};
void test01()
{
    const Person p;
    
    p.m_B = 300;
    p.func1();
    //p.func2();   常对象不能调用普通函数
}

int main()
{ 
    test01();

    system("pause");
    return 0;
}