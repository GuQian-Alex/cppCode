#include <iostream>
using namespace std;

int a;
void func(int a){
    a=10;
}


int main()
{

    func(a);
    cout<<a<<endl;

    system("pause");
    return 0;
}