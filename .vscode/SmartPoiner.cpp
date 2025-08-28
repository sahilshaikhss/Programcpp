#include<iostream>
using namespace std;
/*
Smart poiner:
Smart pointers are objects that manage the lifetime of dynamically allocated memory. They automatically deallocate memory when it is no longer needed, preventing memory leaks and dangling pointers. C++ provides several types of smart pointers, including:

types:
1.unique_ptr: Represents exclusive ownership of a dynamically allocated object. It cannot be copied, but it can be moved to transfer ownership.
2.shared_ptr: Represents shared ownership of a dynamically allocated object. Multiple shared pointers can point to the same object, and the object is deallocated when the last shared pointer goes out of scope.
3.weak_ptr: A weak reference to an object managed by a shared pointer. It does not affect the reference count of the shared pointer, allowing you to check if the object is still valid without preventing its deallocation.

1. unique_ptr Example:
#include<memory>

int main() {
    unique_ptr<int> ptr1 = make_unique<int>(10);
    cout << "Value of ptr1: " << *ptr1 << endl;

    unique_ptr<int> ptr2 = move(ptr1);
    cout << "Value of ptr2: " << *ptr2 << endl;

    return 0;
}

2. shared_ptr Example:
#include<memory>
int main() {
    shared_ptr<int> ptr1 = make_shared<int>(20);
    cout << "Value of ptr1: " << *ptr1 << endl;

    shared_ptr<int> ptr2 = ptr1; // Shared ownership
    cout << "Value of ptr2: " << *ptr2 << endl;

    return 0;
}

3. weak_ptr Example:
#include<memory>
int main() {
    shared_ptr<int> ptr1 = make_shared<int>(30);
    weak_ptr<int> weakPtr = ptr1; // Weak reference

    if (auto sharedPtr = weakPtr.lock()) { // Check if the object is still valid
        cout << "Value of sharedPtr: " << *sharedPtr << endl;
    } else {
        cout << "Object has been deallocated." << endl;
    }

    return 0;
}


*/