#include <iostream>
using namespace std;
//空指针调用成员函数
class Person
{
public:
    int m_A;
    void func1()
    {
        cout<<"this is func1";
    }
    void func2()
    {
        if(this == NULL)
        {
            return;
        }

        cout<<"this is func2"<<m_A;
    }
};

void test01()
{
    Person * p = NULL;
    p->func1();
    //p->func2();
}



int main()
{
    test01();
    system("pause");
    return 0;
}