#include <bits/stdc++.h>
using namespace std;

/*
    11_01_03_Deque / 00_What_Is_Deque.cpp

    WHAT IS DEQUE?
    Deque = Double Ended Queue
    - Sequence Container
    - Can insert/delete from BOTH ends in O(1)
    - Hybrid of Vector + List
    - Dynamic, not fully contiguous but has random access

    Vector vs List vs Deque:
    Vector: Insert at end O(1), middle O(n), no front insertion
    List: Insert anywhere O(1), but no random access O(n)
    Deque: Insert at both ends O(1) + random access O(1) - Best of both!

    Real life: Browser history, sliding window problems
*/

int main() {
    // Declaration
    deque<int> dq;

    dq.push_back(20); // {20}
    dq.push_back(30); // {20,30}
    dq.push_front(10); // {10,20,30}

    // Random access - ALLOWED unlike List!
    cout << "dq[1]: " << dq[1] << endl; // 20 - O(1)

    cout << "Deque: ";
    for(int x : dq) cout << x << " ";

    cout << "\nFront: " << dq.front() << " Back: " << dq.back() << endl;
    cout << "Size: " << dq.size() << endl;

    return 0;
}