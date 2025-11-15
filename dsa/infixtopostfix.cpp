#include <iostream>
#include <stack>
using namespace std;

int prec(char c) { return (c=='+'||c=='-') ? 1 : (c=='*'||c=='/') ? 2 : (c=='^') ? 3 : 0; }

string infixToPostfix(string s) {
    stack<char> st;
    string p = "";

    for (char c : s) {
        if (isalnum(c)) p += c;
        else if (c == '(') st.push(c);
        else if (c == ')') {
            while (st.top() != '(') p += st.top(), st.pop();
            st.pop();
        }
        else {
            while (!st.empty() && prec(st.top()) >= prec(c))
                p += st.top(), st.pop();
            st.push(c);
        }
    }
    while (!st.empty()) p += st.top(), st.pop();
    return p;
}

int main() {
    string infix = "(A+B)*C+d-(e*f/g)";   // fixed example
    cout << "Infix:   " << infix << endl;
    cout << "Postfix: " << infixToPostfix(infix) << endl;
    return 0;
}
