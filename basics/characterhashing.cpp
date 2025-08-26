#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;

    int hash[256]= {0};
    for (int i = 0; i <s.size(); i++){

        hash[s[i]]++;
    }
    


    cout<<"how many times you wanna search : ";
    int q;
    cin>>q;
    while (q--){
        cout<<"enter the character you wanna search:";
       char c;
       cin>>c;
       
       cout<<c<< " appears "<<hash[c]<<" times in the array"<<endl;
    }
    


    return 0;
}