#include <bits/stdc++.h>
using namespace std;

/*
    11-STL / 11_00_Introduction / 11_00_00_What_Is_STL.cpp

    WHAT IS STL?
    STL = Standard Template Library
    It is a library of C++ that provides 4 components:

    1. Containers -> Objects that store data (vector, list, set, map etc)
    2. Algorithms -> Functions to process data (sort, find, count)
    3. Iterators -> Pointers to traverse containers
    4. Functors -> Function objects

    Why STL?
    - Reusable, well-tested code
    - Saves time, no need to write Data Structures from scratch
    - Optimized for speed
*/

int main() {
    // Without STL we have to make our own array management
    // With STL, ready-made containers

    vector<int> v = {1, 2, 3};

    // Algorithm + Iterator + Container working together
    sort(v.begin(), v.end());

    cout << "STL makes life easy!" << endl;
    cout << "Containers, Algorithms, Iterators" << endl;

    return 0;
}