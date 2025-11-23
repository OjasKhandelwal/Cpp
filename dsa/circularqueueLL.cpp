#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *front = NULL, *rear = NULL;

// Function to insert element in circular queue
void insert(int value) {
    Node* newNode = new Node;
    if (newNode == NULL) {
        cout << "Queue is Full (Memory allocation failed)\n";
        return;
    }
    newNode->data = value;
    if (front == NULL) {
        front = rear = newNode;
        rear->next = front;  // circular link
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;  // maintain circular connection
    }
    cout << value << " inserted into queue\n";
}

// Function to delete element from circular queue
void del() {
    if (front == NULL) {
        cout << "Queue is Empty\n";
        return;
    }
    Node* temp = front;
    if (front == rear) {  // only one element
        front = rear = NULL;
    } else {
        front = front->next;
        rear->next = front;
    }
    cout << temp->data << " deleted from queue\n";
    delete temp;
}

// Function to display the queue
void display() {
    if (front == NULL) {
        cout << "Queue is Empty\n";
        return;
    }
    Node* temp = front;
    cout << "Queue elements: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);
    cout << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    del();
    display();
    return 0;
}
