#include<iostream>
using namespace std;
int main()
{
 //Insertion sort
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   
//time complexity: O(n^2)
//space complexity: O(1)
//stable: Yes
//in place: Yes
//worst case: O(n^2)
//best case: O(n)
//average case: O(n^2)
//adaptive: Yes
 

}