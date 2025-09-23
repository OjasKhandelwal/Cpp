#include <iostream>
using namespace std;

#define MAX 5

int arr[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "overflow" << endl;
        return;
    }
    if (front == -1) {   // first element
        front = 0;
        rear = 0;
    } else {
        rear++;
    }
    arr[rear] = value;
    cout << value << " enqueued into the queue" << endl;
}

int dequeue() {
    if (front == -1) {
        cout << "underflow" << endl;
        return -1;
    }
    int value = arr[front];
    if (front == rear) {  // last element removed
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    cout << value << " dequeued from the queue" << endl;
    return value;
}

int main() {
    enqueue(2);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);  // overflow

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();   // underflow

    return 0;
}
