
#include <iostream>
using namespace std;
int main() {
    
    // int , float , long , long long 
    
    int x = 5;
    cout<<x<<"\n";
    
    //string "", getline , char ''
    string s1 , s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<" "<<s2;
    
    
// getline() is a function used to read a whole line of text from an input stream into a string.
    string str;
    getline(cin,str);
    cout<<str;
  
    return 0;
}