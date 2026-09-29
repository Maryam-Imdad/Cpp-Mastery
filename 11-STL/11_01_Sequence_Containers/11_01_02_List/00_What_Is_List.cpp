#include <bits/stdc++.h>
using namespace std;

/*
    11_01_02_List / 00_What_Is_List.cpp

    WHAT IS LIST?
    - Sequence Container
    - Doubly Linked List implementation
    - Not contiguous like Vector
    - Each element has 2 pointers: next and prev

    Vector vs List:
    Vector: [10][20][30] -> contiguous, fast random access O(1)
    List: 10 <-> 20 <-> 30 -> non-contiguous, no random access

    When to use List?
    - Frequent insertion/deletion in middle O(1)
    - No need for random access

    Time Complexity:
    Insert/Delete at any position if iterator known -> O(1)
    Access -> O(n) - No v[i] allowed!
*/

int main() {
    // Declaration
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30); // 10 <-> 20 <-> 30

    // No random access - This will give ERROR
    // cout << l[1]; // NOT ALLOWED

    // Access via iterator only
    cout << "List elements: ";
    for(int x : l) cout << x << " ";

    cout << "\nFront: " << l.front() << " Back: " << l.back() << endl;

    // Size
    cout << "Size: " << l.size() << endl;

    return 0;
}