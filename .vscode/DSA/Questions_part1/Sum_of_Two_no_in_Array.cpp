#include<iostream>
using namespace std;
//Sum of Two no in Array
/*
Q1.test cases:arr[]={10,20,10,40,50,60,70},sum=50
Output:20 30
Q2.test cases:arr[]={1,2,3,4,5,6},sum=6
Output:1 5
*/
int main()
{
    int arr[]={10,20,40,50,60,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=101;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            else
            {   
                continue;
            }
        }
        
    }

}
/*
Two pinter approach
#include<iostream>
sort(arr,arr+n);
using namespace std;
//Sum of Two no in Array
/*
Q1.test cases:arr[]={10,20,10,40,50,60,70},sum=50
Output:20 30
sort(arr,arr+n);
left=0;
right=n-1;

while(left<right)
{
    if(arr[left]+arr[right]==sum)
    {
        cout<<arr[left]<<" "<<arr[right]<<endl;
        left++;
        right--;
    }
    else if(arr[left]+arr[right]<sum)
    {
        left++;
    }
    else
    {
        right--;
    }
}


*/