#include <iostream>  

using namespace std; 

//recursion me hume base case & recurrence relation likhna mandatory hai
int factorial(int n){
   
    //base case - ye batata hai ki hume rukna kab hai
    if(n==0){
        return 1;
    }

    //recurrence relation
    return n * factorial(n-1);
}

int main() {
    int n;
    cout<<"n : ";
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;

    
    return 0;
}