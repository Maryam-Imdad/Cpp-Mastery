#include <bits/stdc++.h>
using namespace std;

/*
    11_01_03_Deque / 01_Functions.cpp
    ALL Deque Functions - Deep Dive
*/

int main() {
    deque<int> dq = {10, 20, 30, 40};

    // 1. push_back() & push_front() - O(1)
    dq.push_back(50); // {10,20,30,40,50}
    dq.push_front(5); // {5,10,20,30,40,50}

    // 2. pop_back() & pop_front() - O(1)
    dq.pop_back(); // {5,10,20,30,40}
    dq.pop_front(); // {10,20,30,40}

    // 3. insert() - O(n) - middle insertion
    dq.insert(dq.begin() + 2, 99); // {10,20,99,30,40}

    // 4. erase() - O(n)
    dq.erase(dq.begin() + 2); // {10,20,30,40}

    // 5. Access - O(1) - Like vector
    cout << "at(1): " << dq.at(1) << endl; // 20
    cout << "dq[2]: " << dq[2] << endl; // 30
    cout << "Front: " << dq.front() << " Back: " << dq.back() << endl;

    // 6. size(), empty(), clear()
    cout << "Size: " << dq.size() << endl;

    // 7. resize()
    deque<int> dq2 = {1,2,3};
    dq2.resize(5, 100); // {1,2,3,100,100}

    // 8. Algorithms work - Because Random Access Iterator
    // Unlike List, we CAN use std::sort for deque
    deque<int> dq3 = {5,1,9,2};
    sort(dq3.begin(), dq3.end()); // {1,2,5,9} - Works!
    reverse(dq3.begin(), dq3.end());

    cout << "Sorted dq3: ";
    for(int x : dq3) cout << x << " ";

    return 0;
}