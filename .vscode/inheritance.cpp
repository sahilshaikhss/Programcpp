/*
inheritance
           derived class| derived class| derived class |
base class|  public mode|  private mode| protected mode|
private:  |  not interi | not          | not               |    
protected:|  protected  | private      | protected               |
public:   |  public     | private      | protected              |
*/

#include<iostream>
using namespace std;
class Base{
    int b;
    public:
    Base(){
        cout<<"Base"<<endl;

    }
    
    void basefunc()
    {
        cout<<"hello from the base"<<endl;

    }
};

class Derived: public Base{
    int a;
    public:
    Derived()
    {
        cout<<"Derived"<<endl;

    }
    Derived(int a)
    {
        cout<< a <<endl;
    }
    void functionInDerived()
    {
        cout<< "Hello form derived"<< endl;

    }
};
int main()
{
     // when defaault constructor of derived class is called it will call the base class constructor first
               // and laso for when the parameterized constructor is called also the base class default   constructor  called
    
    Derived d1(10); 
    return 0;
}


