/*pointer are variables which can store address.
which help in dynamic memory allocation ,implement and managing complex data structure which allocate memory dynamically
pointer make it possible  to pass the address of a data struture rather than the entire structure to the fuction

The pointer variable is presented by (*) symbol
ex int *ptr,char *str;
//Type of pointers
1.Void pointer :
  special type of pointer where it is not associated to any data.
  ist an general purpose pointer
2.Null pointer :
  A pointer tha that point to  nothing
3.Dangling pointer :
  a pointer that point to a memory location that has been deallocated
4.Wild  pointer:
  An un initialised pointer is a wild pointer 

# Dynamic memory allocation  :
  it allows for manual allocation / deallocation memory
  dynamically allocated memory is allocated on heap
  new is used to allocate memory 
  delete is used to  release the allocated memory 
  
  */

  #include <iostream>
  using namespace std;
  
  int main()
  {
   // datatype *var_name;
   int a= 10;
   int *ptr = &a;
   // for allocate and deallocate
   int n=10;
   ptr= new int(n);
   delete ptr;
   // for an array
   int m=20;
   ptr =new int[n];
   delete []ptr;
   
   return 0;

  } 

  
