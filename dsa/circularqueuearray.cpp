#include <iostream>
using namespace std;
#define max 5
int arr[max];
int front = -1 , rear = -1;

void enqueue(int value){
    if((rear+1)%max==front){
        cout<<"overflow";
        return;
    }
    if(front==-1){
        front=0;
    }
    rear = (rear+1)%max;
    arr[rear] = value;
    cout<<value<<" enqueued"<<endl;
}

void dequeue(){
    if(front==-1){
        cout<<"empty";
        return;
    }
    int value = arr[front];
    cout<<value<<" dequeued"<<endl;
    if(front==rear){
        front=rear=-1;
    }else{
        front=(front+1)%max;
    }
    
}

int main(){
    enqueue(8);
    enqueue(18);
    enqueue(82);
    enqueue(83);
    enqueue(87);
    enqueue(89);
    cout<<"\n";
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    return 0;
}
