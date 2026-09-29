#include <bits/stdc++.h>
using namespace std;

/*
    11_05_Iterators / 01_Practice.cpp
    PRACTICE - advance, next, prev, distance
*/

int main() {
    vector<int> v = {10,20,30,40,50,60};

    // Q1: Get 3rd element using advance()
    auto it = v.begin();
    advance(it, 2); // Moves original it - O(1) for vector, O(n) for list
    cout << "3rd element via advance: " << *it << endl; // 30

    // Q2: Get next without modifying original
    it = v.begin();
    auto it2 = next(it, 4); // Returns new iterator
    cout << "Original: " << *it << " Next(4): " << *it2 << endl; // 10 and 50

    // Q3: Get last element using prev()
    auto it_end = v.end(); // Points after last
    auto last = prev(it_end, 1);
    cout << "Last element: " << *last << endl; // 60

    // Q4: Distance between two iterators
    auto it1 = v.begin();
    auto it3 = v.begin() + 4;
    cout << "Distance: " << distance(it1, it3) << endl; // 4

    // Q5: Iterate list using advance - Since list has no +n
    list<int> l = {1,2,3,4,5};
    auto lit = l.begin();
    advance(lit, 3);
    cout << "List 4th element: " << *lit << endl; // 4

    // Q6: Middle of vector using iterators
    auto mid = next(v.begin(), v.size()/2);
    cout << "Middle: " << *mid << endl;

    // Q7: Check if iterator is at end
    auto findIt = find(v.begin(), v.end(), 30);
    if(findIt!= v.end()) cout << "Found 30\n";
    else cout << "Not Found\n";

    return 0;
}