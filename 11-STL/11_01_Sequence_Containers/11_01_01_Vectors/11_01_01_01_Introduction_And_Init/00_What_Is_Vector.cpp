#include <bits/stdc++.h>
using namespace std;

/*
    11_01_01_01_Introduction_And_Types / 00_What_Is_Vector.cpp

    What is Vector?
    - Sequence Container
    - Dynamic Array -> size can grow/shrink
    - Stores data in contiguous memory (like array)
    - Same as array but flexible

    Array vs Vector:
    int arr[5]; -> fixed 5
    vector<int> v; -> 0 initially, can push 100 elements
*/

int main() {
    // Declaration
    vector<int> v;

    // Properties
    cout << "Is it dynamic? Yes" << endl;
    cout << "Is it contiguous? Yes" << endl;
    cout << "Default size: " << v.size() << endl; // 0

    // Why we need it?
    // Problem in array: if we don't know n, what to do?
    // Vector solves it.

    return 0;
}