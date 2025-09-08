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
    
    while(temp->next){  //makes temp point to the tail
        temp = temp->next;
    }
    
    while(temp){  //prints the linked list backwards
        cout<<temp->value<<"->";
        temp = temp->previous;
    }cout<<"null"<<endl;
}

int main(){
    node* node1 = new node(39);
    node* node2 = new node(49);
    node1 -> next = node2;
    node2 -> previous = node1;
    
    node* head = node1;
    
    ForwardTraversal(head);
    BackwardTraversal(head);
    
    return 0;
}