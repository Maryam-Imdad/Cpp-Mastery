#include <bits/stdc++.h>
using namespace std;

/*
    11_05_Iterators / 00_Types.cpp

    ITERATOR TYPES - Deep Dive

    5 Categories (from weakest to strongest):
    1. Input Iterator
    2. Output Iterator
    3. Forward Iterator (forward_list)
    4. Bidirectional Iterator (list, set, map)
    5. Random Access Iterator (vector, deque, array) - Most Powerful

    Capability:
    Random > Bi-directional > Forward

    Vector/Deque support: it + 2, it - 1, it[2]
    List/Set/Map: Only ++it, --it (no +n)
*/

int main() {
    // 1. Random Access - vector
    vector<int> v = {10,20,30,40};
    auto it1 = v.begin();
    cout << "v[2] via iterator: " << *(it1 + 2) << endl; // Allowed O(1)
    cout << "Jump 3 steps: " << *(it1 + 3) << endl;

    // 2. Bidirectional - list
    list<int> l = {10,20,30,40};
    auto it2 = l.begin();
    // cout << *(it2 + 2); // ERROR - No random access
    advance(it2, 2); // O(n) - Have to step one by one
    cout << "List 3rd element via advance: " << *it2 << endl;

    it2++; // Forward
    it2--; // Backward - Allowed in Bidirectional

    // 3. Forward - forward_list (singly linked list)
    forward_list<int> fl = {10,20,30};
    auto it3 = fl.begin();
    it3++; // Only forward, no --
    // it3--; // ERROR - Forward only

    // 4. Iterator functions
    vector<int> v2 = {1,2,3,4,5};
    cout << "\nUsing next() and prev():\n";
    auto it = v2.begin();
    auto nxt = next(it, 2); // 3rd element - doesn't modify it
    cout << "next(it,2): " << *nxt << endl;
    cout << "prev(nxt,1): " << *prev(nxt, 1) << endl;

    // 5. begin() vs cbegin() vs rbegin()
    // begin() - can modify, end() - after last
    // cbegin() - constant, cannot modify
    // rbegin() - reverse begin (last element)

    return 0;
}