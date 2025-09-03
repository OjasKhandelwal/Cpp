#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of elements in your array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of your array : ";
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    
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
