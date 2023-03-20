#include <iostream>
using namespace std;
//c++对象模型
class Person
{
public:
     int m_A;
     static int m_B;
     void func1(){}
     static void func2(){}
};
int Person::m_B = 100;
void test01()
{
    Person p;
  cout<<"the sizeof p is "<<sizeof(p);
}


int main()
{
    test01();
    system("pause");
    return 0;
}