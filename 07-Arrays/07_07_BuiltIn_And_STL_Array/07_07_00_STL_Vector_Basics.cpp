#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*

FILE: 07_07_00_STL_Vector_Basics.cpp
TOPIC: STL Vector - Dynamic Array (The Real World Array)


PART A: BEGINNER - What is Vector?

Normal array: int arr[5] - fixed size
Vector: vector<int> v - dynamic size, can grow/shrink.

Vector is a class in STL (Standard Template Library).
It internally manages dynamic array.

Declaration:
vector<int> v; // empty
vector<int> v(5); // size 5 with 0s
vector<int> v(5,10); // size 5 with all 10s
vector<int> v = {1,2,3};

PART B: INTERMEDIATE - Important Functions

v.push_back(10) -> add at end
v.pop_back() -> remove from end
v.size() -> current elements count
v.capacity() -> internal storage
v.at(i) or v[i] -> access
v.front(), v.back() -> first and last
v.clear() -> remove all
v.empty() -> check if empty
sort(v.begin(), v.end()) -> sort (needs <algorithm>)

PART C: ADVANCE - How Vector Works Internally

Vector doubles its capacity when full.
Initially cap=0, after 1 push cap=1, then 2,4,8,16...

Why vector better than array?
1. Dynamic size
2. Many built-in functions
3. Can return from function
4. No decay in function (pass by reference still better)

Time:
push_back() amortized O(1)
Access O(1)
Insertion in middle O(n) - shift needed

PART D: SCHOLAR - Interview

Q: Vector vs Array?
Array fixed, faster, less overhead. Vector dynamic, rich functions, safe.
In interviews, always prefer vector unless asked for array.

Q: How to pass vector to function?
void func(vector<int> &v) -> by reference (no copy)
void func(vector<int> v) -> by value (copies whole vector - costly)

Q: What is difference between size and capacity?
Size = number of elements. Capacity = allocated memory. Capacity >= Size
*/

int main(){
    cout << "================================================================\n";
    cout << "07_07_00 - STL VECTOR BASICS\n";
    cout << "================================================================\n\n";

    vector<int> v; // Empty vector
    cout << "Empty vector size=" << v.size() << "\n";

    // push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "After push 10,20,30: ";
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout << "\nSize=" << v.size() << " Capacity=" << v.capacity() << "\n";

    // Access
    cout << "v[0]=" << v[0] << " v.at(1)=" << v.at(1) << " front=" << v.front() << " back=" << v.back() << "\n";

    // Sort
    v.push_back(5);
    sort(v.begin(), v.end());
    cout << "After sort: ";
    for(int x: v) cout<<x<<" "; // Range based for loop
    cout << "\n";

    // pop_back
    v.pop_back();
    cout << "After pop_back: ";
    for(int x: v) cout<<x<<" ";
    cout << "\n";

    cout << "\n================================================================\n";
    return 0;
}