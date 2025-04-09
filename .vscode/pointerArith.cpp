#include<iostream>
using namespace std;
//int main(){
//int arr[6] = {0,1,2,3,4,5};
//int str[10] = {'D','e','v','t','o','w','n'};

/*int *ptr=arr;
char *s;
ptr =&arr[2];
//ptr++;
//ptr +=2;//it print the value of index 2
cout<< (*ptr)<<endl;//it defoult print value of o index
//cout<< sizeof(ptr)<<endl;
//cout<< sizeof(s)<< endl;
*/
/*
int arr[6] = {0,1,2,3,4,5};
in one dimentional array evry element or an array is an intiger
int arr2[2][3] ={{1,2,3},{4,5,6}};
in two dimention array every array is an pointer 
arr2[i][j]'
arr2[i][j]=> *(*(arr2 +1) +j); its give the two dimentional array

ptr 1 =[1,2,3]

int *ptr = new int[10];
int *ptr2 =new (int *)[5];
for (int row = 0; row<5; row ++){
   ptr2[row] = new int[6];
   this is for allocation of two d array withe row fo 5
   
   and for deallocation of it
   delete []pter2[row];
}
   delete []pter2;

*/

//double pointer 
/*
int a=10;
int *ptr = &a;
int **ptr2 = &ptr;

cout<< ptr2<<" "<<   &ptr <<endl;
cout<<*ptr2<<" "<<   ptr  <<endl;
cout<<**ptr2<<" "<< *ptr  <<endl;
return 0;
*/
int sumofArray (int *arr, int n)
{
int totalsum=0;
for (int i=0; i<n;i++)
{
    totalsum +=*(arr +i);
}
return totalsum;
}
int main()
{
int arr[6] = {0,1,2,3,4,5};
int *ptr =arr;
int n;
cout<<"Enter the no of array index to be sum:5"<<endl;
cin>>n;
cout<<sumofArray(arr,n)<<endl;

return 0;
}
