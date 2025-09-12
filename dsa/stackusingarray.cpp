#include <iostream>
using namespace std;

class Stack {
    public:
    int st[10];   // stack array
    int top;      // top index


    Stack(){ 
        top = -1;
        }

    // push an element
    void push(int x) {
        if (top >= 9) {
            cout << "Stack Overflow!" << endl;
        } else {
            st[++top] = x;  //Places the value x into the stack array st at the new top index.
            cout << x << " pushed into stack." << endl;
        }
    }

    // pop an element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << st[top--] << " popped from stack." << endl;
//Accesses the current top element in the stack array & after accessing, it decreases top by 1 (post-decrement).
        }
    }

    // return top element
    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return st[top];
        }
    }

    // check if stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop(); // extra pop (to show underflow)

    return 0;
}
