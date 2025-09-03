#include <iostream>
using namespace std;

int main() {
    
    
    int i = 5;
    //create a reference variable
    int &j = i; //j is a reference to i (not the address-of operator here, because it’s in a declaration).
    
//reference variable is just another name for the same memory location

//j is not a new variable....It refers to i....Both i and j point to the same memory location

//so if i changes j will also change & vice versa
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;



    
    
    return 0;
}
