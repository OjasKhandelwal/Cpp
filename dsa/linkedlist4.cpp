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
    while(temp != NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }cout<<"NULL";
}

//UPDATING NODE AT 'k' th position
void UpdateNodeValue(node* &head , int k , int updatedvalue){
    node* temp = head;
    int count = 1;
    while(count<k){
        temp = temp->next;
        count++;
    }
    temp -> value = updatedvalue;
}



int main(){ 
    node* node1 = new node(39);
    node* node2 = new node(49);
    node* node3 = new node(59);
    node* node4 = new node(69);
    node* node5 = new node(79);
    node* node6 = new node(89);
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;
    
    node* head = node1;
    traverse(head);
    
    cout<<"\n";
    UpdateNodeValue(head,2,8);
    traverse(head);

    return 0;
}