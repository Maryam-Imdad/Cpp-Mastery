#include <bits/stdc++.h>
using namespace std;

/*
    11_04_01_Stack_Queue / 00_Stack.cpp

    STACK - LIFO (Last In First Out)
    - Container Adaptor (uses deque by default internally)
    - Only 3 main operations
    - Real life: Undo feature, Browser back, Function calls

    Visual:
    push(10) -> [10]
    push(20) -> [10,20]
    push(30) -> [10,20,30] <- top
    pop() -> removes 30
*/

int main() {
    stack<int> st;

    // 1. push() - O(1) - Insert at top
    st.push(10);
    st.push(20);
    st.push(30); // Top is 30

    // 2. top() - O(1) - Get top element
    cout << "Top: " << st.top() << endl; // 30

    // 3. pop() - O(1) - Remove top (returns void, not value!)
    st.pop(); // Removes 30, now top is 20
    cout << "After pop, Top: " << st.top() << endl;

    // 4. size() & empty()
    cout << "Size: " << st.size() << endl;
    cout << "Empty? " << st.empty() << endl;

    // 5. Traversal - No iterator! Only way is to pop
    // Stack has NO begin()/end(), no for loop!
    cout << "\nStack elements (pop order): ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    // Important: stack<int, vector<int>> or stack<int, deque<int>> possible
    // But list also works

    return 0;
}