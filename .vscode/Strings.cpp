#include<iostream>
#include<string.h>
using namespace std;

void replaceblankwithch(string &str, char ch)
{
int n;
while((n==str.find(' ',n))!= string::npos)
{
    str[n]=ch;
}



}
int main()
{
char arr1[100] ="Hello1";
char arr2[100] ="hello4";
char arr3[100] ="new one";

cout<<strlen(arr1) <<endl;
cout<<strcmp(arr1, arr1) <<endl;
cout<<arr3<<endl;

for (char ch :arr1)
{
    cout<<(int)ch<<endl;
    if ((int)ch ==0)
    {break;}


string s;
getline(cin , s);
cout<<"before:"<<s<<endl;
cout<<s.length()<<endl;
s.push_back('!');
cout<<"After:"<<s<<endl;
cout<<s.length()<<endl;

cout<<s.substr()<<endl;
string s2(s, 0, 2);
cout<<"sub:"<<s2<<endl;

int pos =s.find('a');
if(pos == string::npos)
{
cout<<"not found"<<endl;
}
else{
    cout<<"found:"<<pos<<endl;

}
cout<<s.compare(s2)<<endl;
cout<< s + s2<<endl;
s.append(s2);
cout<<s<<endl;





}










