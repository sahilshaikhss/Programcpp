/*/
Polymorphism in C++ allows methods to do different things based on the object that it is acting upon, even if they share the same name.
there are two types of polymorphism in C++: compile-time (static) and run-time (dynamic).

1.compile_time polymorphism: This is achieved through function overloading and operator overloading. 
  It allows the same function or operator to behave differently based on the parameters passed to it.
2.run_time polymorphism: This is achieved through inheritance and virtual functions. 
  It allows a function to behave differently based on the object that it is acting upon at runtime.
  
  
  */
// Pure Virtual function and abstract class
// An abstract class is a class that contains at least one pure virtual function and its object cannot be instantiated/created.
// It is used to define an interface that derived classes must implement. 
// A pure virtual function is a function that has no definition in the base class and must be implemented by derived classes.
/*
#include<iostream>
using namespace std;
class A {
// here the A is abstract class so it object cant be created 

    public:
    virtual void func1() = 0; 
    virtual void func2() = 0; 
    virtual void func3() = 0; 
        };
class B: public A{
    public:

    void func1(){
        cout<<"B class func"<<endl;
    }
    void func2(){
        cout<<"hello"<<endl;

    }
};
class C : public B{
    public:
    void func3(){
        cout<<"hello23"<<endl;

    }
};
int main(){
  A a;
  B b;
  C c;
 return 0;  
}
*/
// runtime polymorphism
//it only occurs when we actually using pointer of a superclass pointing  to an object of a base class and we are tying to call a fucntion whic is overread in are a subclass
#include<iostream>
using namespace std;
class A{

    public:

    //void func()
    virtual void func()
    {
        cout<< "A class func" << endl;
    }
    void func2()
    {
        cout<< "A class func2"<< endl;

    }
};

class B: public A
{
    public:
     void func()
     {
        cout<< "B class func"<< endl;

     }
};
int main()
{
    A *ptr;
    B b;
    ptr = &b;
    ptr ->func();
}