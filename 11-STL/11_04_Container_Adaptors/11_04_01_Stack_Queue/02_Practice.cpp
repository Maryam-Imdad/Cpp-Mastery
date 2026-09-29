#include <bits/stdc++.h>
using namespace std;

/*
    11_04_01_Stack_Queue / 02_Practice.cpp

    PRACTICE: Balanced Parenthesis using Stack - Most Asked
*/

bool isValid(string s){
    stack<char> st;
    for(char c : s){
        if(c=='(' || c=='{' || c=='[') st.push(c);
        else {
            if(st.empty()) return false;
            if(c==')' && st.top()!='(') return false;
            if(c=='}' && st.top()!='{') return false;
            if(c==']' && st.top()!='[') return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s = "{[()]}";
    cout << s << " is " << (isValid(s)? "Valid" : "Invalid") << endl;

    // Queue Practice: Reverse a queue using stack
    queue<int> q;
    q.push(1); q.push(2); q.push(3);
    stack<int> st;
    while(!q.empty()){ st.push(q.front()); q.pop(); }
    while(!st.empty()){ q.push(st.top()); st.pop(); }

    cout << "Reversed Queue: ";
    while(!q.empty()){ cout << q.front() << " "; q.pop(); }

    return 0;
}