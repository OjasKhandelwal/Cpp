#include<iostream>
using namespace std;

int main() {
    int arr[8] = {23,14,3,5,46,56,6,85};

    // Outer loop: goes from index 0 → 6
    for (int i = 0; i < 7; i++) {
        int index = i;

        // Inner loop: finds the smallest element in the unsorted part
        for (int j = i + 1; j < 8; j++) {
            if (arr[j] < arr[index])
                index = j;   // store index of smaller element
        }

        // Swap the smallest element found with arr[i]
        swap(arr[i], arr[index]);
    }

    // Print sorted array
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
