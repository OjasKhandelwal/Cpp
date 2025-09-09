#include <iostream>
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

void traversal(node* &head){
    node* temp = head;
    do{
        cout<<temp->value<<"->";
        temp=temp->next;
        
    }while(temp!=head);
}

int main(){
    node* node1 = new node(39);
    node* node2 = new node(49);
    node* node3 = new node(59);
    node* node4 = new node(69);
    node* node5 = new node(79);
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node1;
    
    node* head = node1;
    
    traversal(head);
    
    
    return 0;
}