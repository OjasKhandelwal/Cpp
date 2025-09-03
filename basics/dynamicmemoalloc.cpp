#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;  // new int allocates memory for one integer on the heap
    
    *ptr = 42;  // store value in that memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // delete only frees the memory block. 
//The stored value may still linger in RAM until something else overwrites it but you are not allowed to use it anymore.





//DMA IN ARRAYS
    int n;
    cout << "Enter size of array: ";
    cin >> n;//You can take array size at runtime (unlike normal arrays which need compile-time size).
    
    int *arr = new int[n];   // dynamically allocate array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;      // initialize array
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;            // free array memory

    return 0;
}
