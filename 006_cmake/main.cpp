#include<iostream>
#include"swap.h"
using namespace std;


void func1(){
    cout<<"Hello World!"<<endl;
}

int main(){
    int val1=10;
    int val2=20;
    func1();
    cout<<"Before swap: "<<endl;
    cout<<"val1 = "<<val1<<endl;
    cout<<"val2 = "<<val2<<endl;
    swap(val1,val2);
    cout<<"After swap: "<<endl;
    cout<<"val1 = "<<val1<<endl;
    cout<<"val2 = "<<val2<<endl;
    func1();
    return 0;
}
