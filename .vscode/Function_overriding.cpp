#include<iostream>
using namespace std;

class A
{
    public:
    void func()
    {
        cout<< "A class func"<<endl;
    }
    void func2()
    {
        cout<< "A class func2"<<endl;

    }
};

class B :public A{

    public:
    void func()
    {
        cout <<" B class func"<<endl;

    }
};

int main()
{
    A a;
    B b;
    a.func();
    a.func2();
    b.func();
    b.func2();
}