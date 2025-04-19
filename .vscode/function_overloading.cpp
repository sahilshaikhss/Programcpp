#include<iostream>
using namespace std;

class A
{

    int a;
    public:
    A()
    {
        cout<<"A"<<endl;

    }

    void show()
    {
        cout<< "A:" << a<< endl;

    }

    void dummy (float val) // each duumy fucntion have same same but have diff paramerter its called function overloading 
                         // function overloading allows to use the same name of function inorder to achive diff functionality
    {
        cout<< val<<endl;
    }
    void dummy()
    {
        cout<< "val"<<endl;
    }
    void dummy(float val1,int val2)
    {
        cout<< val1<<"  "<<val2;
    }
};
class B: public A{
    public:
    B(){cout<< "B"<< endl;}

};
int main()
{
A a;
a.dummy(10.5);
a.dummy(10.23);
a.dummy(10.2, 10);
}
