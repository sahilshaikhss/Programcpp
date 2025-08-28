#include<iostream>
using namespace std;
int main()
{
    // int arr[3][4]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // }; 
    // cout<<arr[0][0]<<endl; // 1

    int arr1[2][3];
    cout<<"Enter the elements of the array: "<<endl;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"The elements of the array are: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
}