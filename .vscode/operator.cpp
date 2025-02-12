#include<iostream>
using namespace std;
int main()
{
int a=30;
int b=20;
// Arthmetic operator
cout<< a + b <<endl;
cout<< a - b <<endl;
cout<< a % b <<endl;
cout<< a * b <<endl;
cout<< a / b <<endl;

// logical operator
cout<< (a>b) <<endl;
if(a>b)
{cout<<"A is greater"<<endl;
}
//Relational operator
// && , || 
if(a>b && b!=0)
{
    cout<<"True"<<endl;
}
else{
    cout<<"Flase"<<endl;
}
if(a<b  || b!=0)
{
    cout<<"True"<<endl;
}
else{
    cout<<"Flase"<<endl;
}
// Bitwise Operator
// & ,|, <<,>>,~,^
cout<< (2 | 1) <<endl;
cout<< (2 & 1) <<endl;
cout<< (2 ^ 1) <<endl;
cout<< (4 >> 1) <<endl;
// 0100 to right shift by 1 to 0010 
cout<< (2 << 1) <<endl;
// 0010 to left shift by 1 to 0010
cout<< (~4) <<endl;
// ternary operator ?:
// condition if true? if flase?
int c;
if(a>b)
{
    c=a;
    cout<<c<<endl;
}
else{
    c=b;
    cout<<c<<endl;
}
c= (a>b)? a : b;
cout<<c<<endl;
// Unary operator
int l=1;
int k;
k= l++;
cout<< k<< " " <<l<<endl;
l=1;
k= ++l;
cout<< k<< " " <<l<<endl;
l=1;
k= l--;
cout<< k<< " " <<l<<endl;
l=1;
k= --l;
cout<< k<< " " <<l<<endl;

//shotcut assi operator
// += , -=, *=
c= c + a;
c+= a;
cout<<c<<"  "<< a<<endl;

c= c - a;
c-= a;
cout<<c<<"  "<< a<<endl;
c= c * a;
c*= a;
cout<<c<<"  "<< a;








}