#include<iostream>
using namespace std;
int main(){
    
    //bubble sort
    int arr[8] = {54,5,43,25,56,64,7,68};
    int n = 8;
    for(int i = 0; i<n-1;i++){   //passing on elements
        for(int j = 0; j < n-1-i; j++){  //comparing 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
            
        }
    }
    cout<<"sorted array : ";
    for(int i = 0; i<n  ; i++){
        cout<<arr[i]<<" ";
        
    }
    
    
    return 0;

    
}
