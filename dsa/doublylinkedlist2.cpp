#include <iostream>
using namespace std;

class node{
    
    public:
    int value;
    node* next;
    node* previous;
    
    node(int v){
        value = v;
        next = NULL;
        previous = NULL;
    }
};

void ForwardTraversal(node* &head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }cout<<"null"<<endl;
}

void BackwardTraversal(node* &head){
    node* temp = head;
    while(temp->next){  
        temp = temp->next;
    }
    while(temp){  
        cout<<temp->value<<"->";
        temp = temp->previous;
    }cout<<"null"<<endl;
}


//INSERTION
void InsertAtHead(node* &head , int val){
    node* newnode = new node(val);
    newnode -> next = head;
    head -> previous = newnode;
    head = newnode;
}

void InsertAtEnd(node* &head , int val){
    node* newnode = new node(val);
    node* temp = head;
    if(head == NULL){
        head = newnode;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next ;
    } temp-> next = newnode;
    newnode->previous = temp;
}

void InsertAtMiddle(node* &head , int val , int position){
    if(position == 1){
        InsertAtHead(head , val);
        return;
    }
    node* temp = head;
    node* newnode = new node(val);
    for(int i = 0; i<position-1;i++){
        temp = temp->next;
    }
    if(temp->next){
        temp->next->previous = newnode;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->previous = temp;
}

int main(){
    node* node1 = new node(39);
    node* node2 = new node(49);
    node* node3 = new node(59);
    node* node4 = new node(69);
    node* node5 = new node(79);
    
    node1 -> next = node2;
    node2 -> previous = node1;
    node2 -> next = node3;
    node3 -> previous = node2;
    node3 -> next = node4;
    node4 -> previous = node3;
    node4 -> next = node5;
    node5 -> previous = node4;
    
    node* head = node1;
    
    ForwardTraversal(head);
   // BackwardTraversal(head);
   
   InsertAtHead(head , 19);
   ForwardTraversal(head);
   
   InsertAtEnd(head , 89);
   ForwardTraversal(head);
   
   InsertAtMiddle(head , 109 , 4);
   ForwardTraversal(head);
    
    
    
    return 0;
}