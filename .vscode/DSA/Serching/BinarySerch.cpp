#include<iostream>
using namespace std;
//Binary Search
//working: Repeatedly divide the search interval in half.
// If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. 
//Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.
int binarySearch(int arr[], int n, int key){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2; // To avoid overflow
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int result = binarySearch(arr, n, key);
    if(result == -1){
        cout<<"Element not found in the array"<<endl;
    }
    else{
        cout<<"Element found at index: "<<result<<endl;
    }
    return 0;
}
//Time Complexity: O(log n)
//Space Complexity: O(1)
//Auxiliary Space: O(1)
//Stable: Yes
//Inplace: Yes
//Online: No
//Note: The array must be sorted focr binary search to work..