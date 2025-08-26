#include <bits/stdc++.h>  
using namespace std;  
int main() {
    int n , i;
    cout<<"n:";
    cin>>n;
    
    cout<<"\nenter the elements of the map:";
    int arr[n];
    for (i = 0; i < n; i++){
        cin>>arr[i];
    }

    //dekho array me hota kya hai ki index 1 par store hota hai no. of times 1 is there (same for all eg- 12 ke liye 12th index) .....
    //so eese bohot saari values hoti hai jo array me nahi hoti lekin unke liye bhi space hota hai with value 0 , which is unnecessary
    //so isko solve karne ke liye hum map use karte hai as it stored value in a sorted manner 1 ke liye 1 , 2 ke liye 2 aur agar phir sidha 12 hai to 12 ke liye 3
    //map unn values ke liye space generate nahi karta jo appear hi nahi karti

    unordered_map<int,int> mpp;   //map stores elements in a sorted order
    for (i = 0; i < n; i++){
        mpp[arr[i]] ++; 
    }
    


    cout<<"how many times you wanna search : ";
    int q;
    cin>>q;
    while (q--){
        cout<<"enter the element you wanna search:";
       int number;
       cin>>number;
       
       cout<<number<< " appears "<<mpp[number]<<" times in the array"<<endl;
    }

    return 0;
}