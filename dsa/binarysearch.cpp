#include <iostream>
using namespace std;

int main(){
    
    int arr[]={2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(*arr);
    int i,j,high,mid,low;
    high = n-1;
    low=0;
    while(low<=high){
        mid = (low+high)/2;
     if(arr[mid]==5){
         cout<< mid;
         break;
     }  else if(arr[mid]<5){
         low = mid+1;
     }else{
         high = mid-1;
     }
    }
    

    return 0;
}
