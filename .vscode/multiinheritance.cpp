#include<iostream>
using namespace std;
class A
{  
    public:
    int a=0;
    A(){
        cout<< "A1"<<endl;

    }
    void show()
    {
        cout<<"a:"<<a<<endl;

    } 
};
class B : public virtual A
{
public:
    B()
    {
        cout<<"B1"<<endl;

    }
};
class C:public virtual A //bt using virtual the class C and B have only one copy of class A
{

     public:
    C()
    {
        cout<<"C1"<<endl;
    }
};

/*
// in code first D class run and its run b class first then B class have public A.
   which run A class then A1 printed then B class default constrctor run and B1 print.
   after that D class run public C whoch run Class C whihc have again Class A which again print A1
   then C1 printed then D class default  constructor print D1
*/
class D: public B ,public C 
{   public:

   /*
    void sample()
    {
        B::show();// scope resolution operator
        C::show();
        cout<< B::a<<endl;
        cout<< C::a<<endl;
    }
       // */
    D() 
     {
    cout<<"D1"<<endl;

     }
};

int main()
{ 
 D d;
 d.show();
 //A a;
//a.show();
//d.sample();
return 0;
}
