#include<iostream>
using namespace std;
/*
syntax:
auto lambda_name = [capture_list](parameter_list) -> return_type {
    // function body
};

*/

int main()
{

    int a=10;
    int b=11;
    int c=12;

    auto func=[&](int c)-> int {
        a+=c;
        b+=c;
        return a;
    };
    auto func2=[a,&b](int c)-> int {//if we use & then only we can modified value and
        // if we use only = or only variable like a ,b then onlt read the value
        b=a+c;
        return b;
    };
    cout<<func(100)<<endl; // 100
    cout<<func2(10)<<endl; // 20
}