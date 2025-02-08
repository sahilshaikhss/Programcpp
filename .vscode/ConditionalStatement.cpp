#include<iostream>
using namespace std;

/*
Conditional Statement also know as decison making statement.
which help to take decision in program using the logical conditions 
Example:
1.if (condition)

2.if else.

3. if else if.

4.nested if.
  in nested if the if condition in in if block
  like 
  if(condition)
    {
        if(condition)
          {
              block of code
          }  
        else
          {
              block of code
          }
    }

5. swich case.
int n=4;
switch (n)
{
case 1: cout<<"True1"; if (n=1)
break;
case 2: cout<<"True2"; if (n=2)
break;
case 3: cout<<"True3"; if (n=3)
break;
default:cout<<"flase"<<endl;
}

int a=100;
if (a>10)
{
cout<<"True"<<endl;
}
else if (a>50)
{
    cout<<"True"<<endl;

}
else
{
    cout<<"Flase"<<endl;
}
return 0;

}
*/


void is_even(int num)
{
if (num%2 == 0)
{
    cout<<" is even"<<endl;
}
else
{
cout<<"id odd"<<endl;
}
}

void sign_of_number(int num)
{
if(num>0)
{
cout<<" + Positive"<<endl;
}
else if(num<0)
{
    cout<<"- Negative"<<endl;
}
else
{
cout<<"the number is 0"<<endl;
}
}

int main()
{
    int choice, num;
    cout<<"1. Check if even"<<endl;
    cout<<"2. Check the sign of the number"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Enter the choice of your:"<<endl;
cin>>choice;
switch (choice)
{
case 1:
      cout<<"Enter the number:"<<endl;
      cin>>num;
      is_even(num);
      break;
case 2:
      cout<<"Enter the number:"<<endl;
      cin>>num;
      sign_of_number(num);
      break;
case 3:
default:cout<<"invalide choice";
    break;
}

}
