#include<iostream>
using namespace std;
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



//INSERTION 
void InsertAtHead(node* &head , int val){

    node* newnode = new node(val);
    newnode -> next  = head;
    head = newnode;

}



void InsertAtEnd(node* &head , int val){
    if(head == NULL){
        InsertAtHead(head , val);
        return;
    }
    node* temp = head;
    node* newnode = new node(val);
    while(temp -> next !=NULL){
        temp = temp -> next;
    }temp -> next = newnode;
    
}


void InsertAtMiddle(node* &head , int val , int position){
    if(position == 1){
        InsertAtHead(head , val);
        return;
    }
    
    node* newnode = new node(val);
    node* prev = head; 
    int count = 1;
    while(count < (position-1)){
        prev = prev -> next; //prev is pointing to the node that should come before new node
        count++;
        
    }
    newnode -> next = prev -> next;
    prev -> next = newnode;
    
}

int main(){
    

    node* node1 = new node(1); 
    node* node2 = new node(2);
    node* node3 = new node(5);
    node* node4 = new node(11);
    node* node5 = new node(100);

    node1 -> next = node2;  
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node* head = node1;

    InsertAtHead(head , 7);
    traverse(head);
    
    cout<<"\n";
    InsertAtEnd(head , 121);
    traverse(head);
    
    cout<<"\n";
    InsertAtMiddle(head , 33 , 4);
    traverse(head);

    return 0;
}