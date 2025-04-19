#include<iostream>
using namespace std;
// friend class
class A
{   int a;
    public:
    A()
    {
        a=0;
    }
    A(int a):a(a){}

    void modifyA()
    {
        a+=11;

    }

    void showA(){
        cout<< "A:"<<a<<endl;

    }

    friend class B;

};

class B{
    int b;

    public:
    B():b(0){}
    B(int b):b(b){}

    void modifyB()
    {
      b+=10;
      cout<<"B:" <<b<< endl;
    }

    void modifyAUsingB(A &obj)
    {
        cout<<"A using B:"<<obj.a <<endl;
        obj.a +=100;

    }

    void createAndmodifyNewA()
    {
        A obj(21);
        obj.showA();
        cout<<"A::" <<obj.a <<endl;
    }
};
// friend function:

class C;
class D
{
public:
 
void dIncrementdC(C &obj);

};

class C
{
   int c;

   public:
   C(): c(0) {}
   C(int c): c(c) {}

   void showC()
   {
    cout<<"C:" <<c << endl;

   }
    
   friend void increment(C &obj);
   friend void D::dIncrementdC(C &obj);
   
};

void increment(C &obj)
{

    cout<< "C:"<<obj.c+10 << endl;

}

void D::dIncrementdC(C &obj)
{
    obj.c +=100;
    cout<<"C:"<< obj.c << endl;

}

int main()
{

A obj(11);
 B obj2(11);
 obj.showA();
 obj2.modifyB();
 obj2.modifyAUsingB(obj);
 obj.showA();
 obj2.createAndmodifyNewA();

 C obj3(10);
 increment(obj3);
 D obj4;
 obj4.dIncrementdC(obj3) ;



 }