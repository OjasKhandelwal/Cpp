#include<iostream>
using namespace std;

//BASIC STRUCTURE & TRAVERSING IN LINKED LIST


class node{
    
    public:
    int value;
    node* next;
    
    node(int v){    
        value = v;
        next = NULL;
    }
    
};

void traverse(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->value<<"->";
        temp = temp -> next;
    }cout<<"NULL";
}


int main(){
    
    //creating nodes   
    node* node1 = new node(1); ////node* nodename = new node(value we want to store);
    node* node2 = new node(2);
    node* node3 = new node(5);
    node* node4 = new node(11);
    node* node5 = new node(100);

    node1 -> next = node2;  //node1 pointing to node2
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    

    node* head = node1;
    traverse(head);
    


    return 0;
}