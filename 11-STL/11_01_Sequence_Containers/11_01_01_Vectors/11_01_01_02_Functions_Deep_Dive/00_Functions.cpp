#include <bits/stdc++.h>
using namespace std;

/*
    Cpp-Mastery / 11-STL / 11_01_01_Vectors / 11_01_01_02_Functions_Deep_Dive / 00_Functions.cpp

    ALL VECTOR FUNCTIONS - Deep Dive
    Time Complexity mentioned for Interviews
*/

int main() {
    vector<int> v;

    // 1. push_back() - O(1) amortized
    // Adds element at the end
    v.push_back(10);
    v.push_back(20);
    v.push_back(30); // v = {10, 20, 30}

    // 2. emplace_back() - O(1) - Faster than push_back
    // Constructs element in-place, no copy
    v.emplace_back(40); // v = {10, 20, 30, 40}

    // 3. pop_back() - O(1)
    // Removes last element
    v.pop_back(); // v = {10, 20, 30}

    // 4. size() vs capacity() - IMPORTANT FOR INTERVIEW
    cout << "Size: " << v.size() << endl; // 3 - actual elements
    cout << "Capacity: " << v.capacity() << endl; // 4 or more - internal storage
    cout << "Empty? " << v.empty() << endl; // 0 - false

    // 5. Access Functions - O(1)
    cout << "v[0]: " << v[0] << endl; // No bounds check
    cout << "v.at(1): " << v.at(1) << endl; // With bounds check, throws error if invalid
    cout << "Front: " << v.front() << endl; // First element - 10
    cout << "Back: " << v.back() << endl; // Last element - 30

    // 6. insert() - O(n) - Costly, shifts elements
    // Syntax: v.insert(position, value)
    v.insert(v.begin() + 1, 99); // {10, 99, 20, 30}
    v.insert(v.begin(), 2, 5); // Insert 2 times 5 at beginning -> {5, 5, 10, 99, 20, 30}

    // 7. erase() - O(n)
    // Syntax: v.erase(position) or v.erase(start, end)
    v.erase(v.begin()); // Remove first element
    v.erase(v.begin() + 1, v.begin() + 3); // Remove range

    // 8. clear() - O(n) - Removes all elements, size = 0 but capacity remains
    // v.clear();

    // 9. resize() - O(n)
    vector<int> v2 = {1, 2, 3};
    v2.resize(5, 100); // {1, 2, 3, 100, 100} - increase with default value
    v2.resize(2); // {1, 2} - decrease

    // 10. swap() - O(1) - Swap 2 vectors
    vector<int> a = {1, 2};
    vector<int> b = {3, 4, 5};
    a.swap(b); // a = {3,4,5} b = {1,2}

    // 11. assign() - O(n) - Assign new values
    vector<int> v3;
    v3.assign(5, 10); // {10,10,10,10,10}

    // Printing final
    cout << "\nFinal v: ";
    for(int x : v) cout << x << " ";

    return 0;
}