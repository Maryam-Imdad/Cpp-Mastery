#include <bits/stdc++.h>
using namespace std;

/*
    11_04_01_Stack_Queue / 01_Queue.cpp

    QUEUE - FIFO (First In First Out)
    - Container Adaptor
    - Real life: Ticket line, Printer queue, BFS

    Visual:
    push(10) -> [10] <- front/rear
    push(20) -> [10,20] front=10, rear=20
    pop() -> removes front [20]

    Also: priority_queue - Max heap by default
*/

int main() {
    // 1. Simple Queue - FIFO
    queue<int> q;

    q.push(10); // {10}
    q.push(20); // {10,20}
    q.push(30); // {10,20,30}

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl; // 30

    q.pop(); // Removes front (10)
    cout << "After pop, Front: " << q.front() << endl; // 20

    // Traversal - Also no iterator, only via pop
    cout << "\nQueue elements: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    // 2. Priority Queue - Max Heap (largest on top)
    // Internal: Uses heap data structure
    cout << "\n\n--- Priority Queue ---\n";
    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);

    cout << "Top (Max): " << pq.top() << endl; // 20

    cout << "PQ order (descending): ";
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    // 3. Min Heap - Using greater<int>
    cout << "\n\n--- Min Heap ---\n";
    priority_queue<int, vector<int>, greater<int>> minPq;
    minPq.push(10);
    minPq.push(5);
    minPq.push(20);

    cout << "Top (Min): " << minPq.top() << endl; // 5

    return 0;
}