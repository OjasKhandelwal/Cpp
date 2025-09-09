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


//DELETION
void DeleteAtHead(node* &head){
    if(head->next==NULL){
        delete(head);
        return;
    }
    node* temp = head;
    head = head->next;
    head->previous = NULL;
    delete(temp);
}

void DeleteAtEnd(node* &head) {
    if (head == NULL) return;  // empty list

    if (head->next == NULL) {  // only one node
        delete head;
        head = NULL;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // temp is last node now
    temp->previous->next = NULL;  // unlink last node
    delete temp;                  // delete last node
}

void DeleteAtMiddle(node* &head, int position) {
    if (head == NULL) return;  // empty list

    if (position == 1) {       // delete first node
        DeleteAtHead(head);
        return;
    }

    node* temp = head;

    // Move temp to (position-1)-th node
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If position is invalid
    if (temp == NULL || temp->next == NULL) return;

    node* deletenode = temp->next;
    temp->next = deletenode->next;

    if (deletenode->next) { // fix back-link if not last node
        deletenode->next->previous = temp;
    }

    delete deletenode;
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
   
   DeleteAtHead(head);
   ForwardTraversal(head);
   
   DeleteAtEnd(head);
   ForwardTraversal(head);
   
   DeleteAtMiddle(head,2);
   ForwardTraversal(head);
   
   
    
    
    return 0;
}