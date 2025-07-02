#include<iostream>
#include<limits>
#include<exception>
using namespace std;
int main()
{
int x;
cout<<"Enter a number: ";
cin>>x;

try
{
    if(x<=0) throw 'm';
    x+=1;
}
catch(int e)
{
    cout<<"Exception caught: "<<e<<endl;
}
catch(char ch)
{
    cout<<"Character exception caught: "<<ch<<endl;
}



catch(...)
{
    cout<<"Unknown exception caught"<<endl;

}
    cout<<"Value of x: "<<x<<endl;
    return 0;
}