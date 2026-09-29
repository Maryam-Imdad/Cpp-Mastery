#include <bits/stdc++.h>
using namespace std;

/*
    11_01_02_List / 01_List_Functions.cpp
    ALL List Functions - Deep Dive
*/

int main() {
    list<int> l = {10, 20, 30, 40};

    // 1. push_back() and push_front() - O(1)
    // Vector has only push_back, List has both!
    l.push_back(50); // {10,20,30,40,50}
    l.push_front(5); // {5,10,20,30,40,50}

    // 2. pop_back() and pop_front() - O(1)
    l.pop_back(); // {5,10,20,30,40}
    l.pop_front(); // {10,20,30,40}

    // 3. insert() - O(1) if iterator known (vs O(n) in Vector)
    auto it = l.begin();
    advance(it, 2); // Move iterator to 3rd position - O(n) to reach
    l.insert(it, 99); // {10,20,99,30,40} - But insertion itself is O(1)

    // 4. erase() - O(1)
    it = l.begin();
    advance(it, 2);
    l.erase(it); // {10,20,30,40}

    // 5. remove(value) - Remove by value, not iterator
    l.push_back(20);
    l.remove(20); // Removes ALL 20s -> {10,30,40}

    // 6. sort() - O(n log n)
    // Note: list has its OWN sort, can't use std::sort()
    list<int> l2 = {5, 1, 9, 2};
    l2.sort(); // {1,2,5,9}
    // sort(l2.begin(), l2.end()); // ERROR - not random access iterator

    // 7. reverse() - O(n)
    l2.reverse(); // {9,5,2,1}

    // 8. unique() - Removes consecutive duplicates
    list<int> l3 = {1,1,2,2,2,3,3};
    l3.unique(); // {1,2,3}

    // 9. merge() - Merge 2 sorted lists
    list<int> a = {1,3,5};
    list<int> b = {2,4,6};
    a.merge(b); // a = {1,2,3,4,5,6}, b becomes empty

    // 10. size(), empty(), clear(), front(), back()
    cout << "Front: " << a.front() << " Back: " << a.back() << endl;
    cout << "Empty? " << a.empty() << endl;
    // a.clear();

    cout << "Final a: ";
    for(int x : a) cout << x << " ";

    return 0;
}