#include<iostream>
using namespace std;
//Swaping is a process of exchanging the values of two variables.
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    //Swapping using third variable
    /*
    int temp;
    temp=a;
    a=b;
    b=temp;
    */
   //Swapping without using third variable
   /*
   a=a+b;
   b=a-b;
   a=a-b;
   */
   //Swapping using bitwise XOR operator
//    a=a^b;
//    b=a^b;
//    a=a^b;
//    cout<<"After swapping: "<<a<<" "<<b<<endl;
   //more methods of swapping
    //Using std::swap() function
  
    //swap(a,b);
    // cout<<"After swapping using std::swap(): "<<a<<" "<<b<<endl;
    // return 0;


}