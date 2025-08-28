#include<iostream>
using namespace std;
//buuble sort
//works by repeatedly swapping the adjacent elements if they are in wrong order
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //bubble sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
/*
time complexity: O(n^2)
space complexity: O(1)
stable: Yes
in place: Yes
worst case: O(n^2)
best case: O(n)
average case: O(n^2)
adaptive: Yes
*/
