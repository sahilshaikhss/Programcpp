/*
Loop:
its help to execute one statement for serval times
there are four loops 
1.for loop
2.while loop
3.do while loop
4.nested lopp
diffrent loop control statement are
1. break- its used to come out from loop
2. continue - its used to skip to the next iteration
3. goto -its used to transfered control to the label statement 
*/
#include<iostream>
using namespace std;

void forloopinfi(int n)
{
/*its an infinite loop
for not infinite or gor flase loop chnage it to for(;0;)*/
for (;;)
{   
    
cout<<n<<endl;
}
}
bool forloop(int n)

{
    

  
    for(int i=2; i<=n/2; i++)
  {
       if(n%i == 0)
      {
        return false;
      }
}
}
void whileloop(int n)
{
    /*
    while(condition){
    block of statment
    i++

    }
    */
int i=1;
while(true)
{
    i++; 
    if(i>20)
    {
      break;
    }
    if(i%2==0)
    {
        continue;
    }
    cout<<i<<endl;
    
}
}

int main()
{
int n;
cout<<"Enter the number n:"<<endl;
//forloop(10);
//whileloop(100);
for (int i=1;i<=100;i++)
{

    if(forloop(i))
    {
        cout<<"prime number are::"<<i<<endl;
    }
}
return 0;
}

