#include<iostream>
using namespace std;
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
            //selection sort
            for(int i=0;i<n-1;i++)
            {
                int min_index=i;
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]<arr[min_index])
                    {
                        min_index=j;
                    }
                }
                swap(arr[i],arr[min_index]);
            }
            cout<<"Sorted array: ";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        /*
        Time complexity: O(n^2)
        Space complexity: O(1)
        Stable: No
        In place: Yes
        worst case: O(n^2)
        best case: O(n^2)
        average case: O(n^2)
        adaptive: No
        */