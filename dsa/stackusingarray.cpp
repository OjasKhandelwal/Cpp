#include <iostream>
using namespace std;
#define MAX 5



int arr[MAX];
int top=-1;
    




void push(int data){
    if(top==MAX-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    top+=1;
    arr[top] = data;
    cout<<data<<" pushed into the stack"<<endl;
    
}



int pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return -1; 
    }
    int value = arr[top];
    top-=1;
    cout<<value<<" popped from the array"<<endl;
    return value;
}


int peek(){
    if(top==-1){
        cout<<"stack is empty";
        return -1;
    }
    cout<<arr[top]<<" is the top element of the stack"<<endl;
    return arr[top];
    
}




int main(){
    
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    
    peek();
    
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    
    
    return 0;
}
