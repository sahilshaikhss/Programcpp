#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout;
ifstream fin;
/*
fin.open("cpp.cpp");
string str;
fin>>str;
cout<<str<<endl;

fin>>str;
cout<<str<<endl;
fin>>str;
cout<<str <<endl;
fin>>str;
cout<<str<<endl;
fin>>str;
cout<<str<<endl;
fin>>str;
cout<<str<<endl;
fin>>str;
cout<<str<<endl;
fin>>str;
cout<<str<<endl;
fin>>str;
cout<<str<<endl;
fin>>str;
cout<<str<<endl;

getline(fin, str);


fin.seekg(-10,ios::cur);
while (!fin.eof()){
    getline(fin,str,'\n');
    cout<<str<<endl;
}
fin.close();
*/
//for create and use it
fout.open("pan.txt");
fout<<"This is what i am writing to my file luffy dono hello"<< endl;
fout.close();
}
