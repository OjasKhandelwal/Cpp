
#include <bits/stdc++.h> 
using namespace std;
int main() {
    int i ,n , arr[10];
    
    cout<<"enter the elements of the array :";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    
    cout<<"your final array :";
    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
    bool found = false;
    cout<<"\nenter the element you want to search :";
    cin>>n;
    for(i=0;i<10;i++){
        if (arr[i] == n) {
            cout << "Element " << n << " found at index " << i << "\n";
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Element " << n << " not found in the array.\n";
    }
     
    
    
    
    
   return 0; 
}