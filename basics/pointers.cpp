#include<iostream>
using namespace std;
int main(){
    
// & → Address-of operator (gives address of a variable)
// * → Dereference operator (access value stored at that address)
    
    
    int x = 10;       // normal integer variable
    int *ptr = &x;    // pointer variable storing address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer ptr stores: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;
    
    
    
    //POINTERS IN ARRAYS
    int arr[3] = {10, 20, 30};
    int* p = arr;  // points to first element

    cout << *p << endl;       // 10
    cout << *(p+1) << endl;   // 20
    cout << *(p+2) << endl;   // 30
    
    
    
    //POINTER TO POINTER
    int y = 100;
    int* j = &y;     // pointer to int
    int** q = &j;    // pointer to pointer

    cout << "Value of y: " << **q << endl; // double dereference
    
    return 0;
}