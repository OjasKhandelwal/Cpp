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

//DELETION
void DeleteAtStart(node* &head){
    node* temp = head;
    head = head->next;
    delete temp;
}


void DeleteAtEnd(node* &head){
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    if (head->next == NULL) {
        DeleteAtStart(head);
    }
    node* secondlastnode = head;
    while(secondlastnode -> next-> next !=NULL){
        secondlastnode = secondlastnode-> next;
    }
    node* lastnode = secondlastnode->next;
    secondlastnode ->next = NULL;
    delete lastnode;
    
}


void DeleteAtMiddle(node* &head , int position){
    
    if(position == 1){
        DeleteAtStart(head);
        return;
    }
    
    node* prev = head;
    int count = 1;
    while(count<(position-1)){
        prev = prev->next;
        count++;
    }
    node* currentnode = prev->next;
    prev->next = currentnode -> next;
    delete currentnode;
    
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

    DeleteAtStart(head);
    traverse(head);
    
    cout<<"\n";

    DeleteAtEnd(head);
    traverse(head);
    
    cout<<"\n";

    DeleteAtMiddle(head ,3);
    traverse(head);
    return 0;
}
