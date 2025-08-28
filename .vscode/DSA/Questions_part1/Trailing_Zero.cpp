#include<iostream>
using namespace std;
/*
Trailing Zeros in Factorial of a Number.

Q1.test cases:n=5
Output:1
Explanation:5! = 120, which has one trailing zero.
Q2.test cases:n=11
Output:2
Explanation:11! = 39916800, which has two trailing zeros.



*/
int main()
{
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    int No_of_Zero=0;
    int q=0;
    while(n!=0)
    {
        q=n/5;
        No_of_Zero=No_of_Zero+q;
        n=n/5;

    }
    cout<<"No of Trailing Zero in Factorial of Given Number is:"<<No_of_Zero<<endl;
    return 0;




}