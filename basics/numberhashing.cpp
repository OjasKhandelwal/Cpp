#include <bits/stdc++.h>  
using namespace std;  
int main() {
    int n , i;
    cout<<"n:";
    cin>>n;
    
    cout<<"\nenter the elements of the array:";
    int arr[n];
    for (i = 0; i < n; i++){
        cin>>arr[i];
    }


    int hash[13] = {0};  //assuming max value ≤ 12
    for (i = 0; i < n; i++){
        hash[arr[i]] += 1; 
    }
    
    cout<<"how many times you wanna search : ";
    int q;
    cin>>q;
    while (q--){
        cout<<"enter the element you wanna search:";
       int number;
       cin>>number;
       
       cout<<number<< " appears "<<hash[number]<<" times in the array"<<endl;
    }
    
    
    







    return 0;
}