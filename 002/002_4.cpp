#include <iostream>
using namespace std;
//this 指针
class Person
{
public:
      Person(int age)
      {
        this->age = age;
      }
      int age;

      Person& addPerson(Person& p) //这里用的是Person的引用而不是值，返回的是对象本身，而不是重新拷贝一个对象
      {
        this->age += p.age;
        return *this; //用来实现链式编程
      }
};

void test01()
{
    Person p1(18);
    Person p2(30);
    p1.addPerson(p2).addPerson(p2);
    cout<<" the age of p1 is "<<p1.age;
}


int main()
{
    test01();
    system("pause");
    return 0;
}