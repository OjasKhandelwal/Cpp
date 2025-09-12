#include<iostream>
using namespace std;

class node {
public:
    int coff;
    int power;
    node* next;

    node(int v1, int v2) {
        coff = v1;
        power = v2;
        next = NULL;
    }
};

// Traverse function
void traverse(node* &head, node* &head1) {
    cout << "q1 : ";
    node* temp = head;
    while (temp != NULL) {
        cout << temp->coff << "x^" << temp->power << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;

    cout << "q2 : ";
    node* temp1 = head1;
    while (temp1 != NULL) {
        cout << temp1->coff << "x^" << temp1->power << " -> ";
        temp1 = temp1->next;
    }
    cout << "null" << endl;
}

// Add two polynomials
node* addn(node* &head, node* &head1) {
    node* temp = head;
    node* temp1 = head1;

    node* resultHead = NULL; 
    node* resultTail = NULL; 

    while (temp != NULL && temp1 != NULL) {
        node* newNode = NULL;
        
        if (temp->power == temp1->power) {
            newNode = new node(temp->coff + temp1->coff, temp->power);
            temp = temp->next;
            temp1 = temp1->next;
        }
        else if (temp->power > temp1->power) {
            newNode = new node(temp->coff, temp->power);
            temp = temp->next;
        }
        else { // temp1->power > temp->power
            newNode = new node(temp1->coff, temp1->power);
            temp1 = temp1->next;
        }

        if (resultHead == NULL) {
            resultHead = newNode;
            resultTail = newNode;
        }
        else {
            resultTail->next = newNode;
            resultTail = newNode;
        }
    }

    // Add remaining terms from polynomial 1
    while (temp != NULL) {
        node* newNode = new node(temp->coff, temp->power);
        resultTail->next = newNode;
        resultTail = newNode;
        temp = temp->next;
    }

    // Add remaining terms from polynomial 2
    while (temp1 != NULL) {
        node* newNode = new node(temp1->coff, temp1->power);
        resultTail->next = newNode;
        resultTail = newNode;
        temp1 = temp1->next;
    }

    return resultHead;
}

// Traverse only one polynomial (for result)
void traverseResult(node* head) {
    cout << "Result: ";
    node* temp = head;
    while (temp != NULL) {
        cout << temp->coff << "x^" << temp->power << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

int main() {
    // First polynomial: 21x^2 + 10x^1 + 3x^0
    node* node1 = new node(21, 2);
    node* node2 = new node(10, 1);
    node* node3 = new node(3, 0);
    node1->next = node2;
    node2->next = node3;
    node* head = node1;

    // Second polynomial: 11x^3 + 21x^1 + 99x^0
    node* node4 = new node(11, 3);
    node* node5 = new node(21, 1);
    node* node6 = new node(99, 0);
    node4->next = node5;
    node5->next = node6;
    node* head1 = node4;

    traverse(head, head1);

    node* result = addn(head, head1);
    traverseResult(result);

    return 0;
}
