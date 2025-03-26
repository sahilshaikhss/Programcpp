#include<iostream>
using namespace std;
void modify(int a)
{

    a++;

}
void refmodify(int &a)
{
    a++;

}
int main()
{
int a=10;
int b=a;
int &ref =a;
a= a+1;
cout<< "a:"<<a<<endl;
cout<< "b:"<<b<<endl;
cout<< "ref:"<<ref<<endl;
a=11;
b=a;
ref = ref +1;
cout<< "a:"<<a<<endl;
cout<< "b:"<<b<<endl;
cout<< "ref:"<<ref<<endl;

b=10;
cout<<"before:"<<b<<endl;
modify(b);
cout<<"After:"<<b<<endl;

b=10;
cout<<"before:"<<b<<endl;
refmodify(b);
cout<<"After:"<<b<<endl;
/*
in reference variable the value of the ref variable is assign to the its equal
one and if any chnages in the ref or the one varibale is reflect to bothone. 
*/

}

