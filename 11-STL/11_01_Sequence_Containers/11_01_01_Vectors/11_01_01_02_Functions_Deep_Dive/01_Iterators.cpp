#include <bits/stdc++.h>
using namespace std;

/*
    11_01_01_02_Functions_Deep_Dive / 01_Iterators.cpp

    ITERATORS IN VECTOR
    Iterator is like a pointer to traverse container
    5 Types of Traversal
*/

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // 1. begin() and end() - Forward Iterator
    // begin() -> first element
    // end() -> position AFTER last element (not last)
    cout << "Forward using begin()/end(): ";
    for(auto it = v.begin(); it!= v.end(); it++){
        cout << *it << " "; // *it gives value
    }
    cout << endl;

    // 2. rbegin() and rend() - Reverse Iterator
    // rbegin() -> last element, rend() -> before first
    cout << "Reverse using rbegin()/rend(): ";
    for(auto it = v.rbegin(); it!= v.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // 3. cbegin() and cend() - Constant Iterator (can't modify)
    // cbegin() -> const begin
    cout << "Constant iterator: ";
    for(auto it = v.cbegin(); it!= v.cend(); it++){
        // *it = 100; // ERROR - can't modify
        cout << *it << " ";
    }
    cout << endl;

    // 4. Normal for loop with index - O(1) access because contiguous
    cout << "Using index: ";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // 5. Range-based for loop - Cleanest (C++11)
    cout << "Range-based loop: ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    // 6. Iterator Arithmetic - Only for Random Access Iterators like vector
    auto it = v.begin();
    cout << "\nFirst: " << *it << endl;
    cout << "Third element via it+2: " << *(it + 2) << endl; // 30
    cout << "Index of it: " << it - v.begin() << endl; // 0

    // 7. Iterator Invalidation Concept - IMPORTANT
    // After push_back, old iterators may become invalid if reallocation happens
    vector<int> v2 = {1,2,3};
    auto old_it = v2.begin();
    v2.push_back(4); // May reallocate
    // old_it is now potentially invalid - don't use it

    return 0;
}