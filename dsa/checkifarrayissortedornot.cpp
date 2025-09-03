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
    int check = 0;
    for(int i = 0; i<n-1;i++){  
        for(int j = 0; j < n-1-i; j++){  
            if(arr[j]>arr[j+1]){
                check++;
                
            }
            
        }
            
    }
    if(check == 0){
                cout<<"array is already sorted";
    }else{
        cout<<"array is not sorted";
    }
    
    
    
    return 0;

    
}