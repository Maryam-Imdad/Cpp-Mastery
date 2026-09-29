#include <bits/stdc++.h>
using namespace std;

/*
    11_00_01_STL_vs_Normal.cpp

    NORMAL CODE vs STL CODE

    Problem: Store 5 numbers and sort them
*/

void normal_way() {
    cout << "--- Normal Way (Array) ---" << endl;
    int arr[5] = {5, 2, 4, 1, 3};
    // Manual sorting logic - bubble sort
    for(int i=0; i<5; i++){
        for(int j=0; j<4-i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    for(int x: arr) cout << x << " ";
    cout << "\nProblems: Fixed size, manual logic, more bugs\n" << endl;
}

void stl_way() {
    cout << "--- STL Way (Vector) ---" << endl;
    vector<int> v = {5, 2, 4, 1, 3};

    sort(v.begin(), v.end()); // 1 line sorting

    for(int x: v) cout << x << " ";
    cout << "\nBenefits: Dynamic size, 1-line sort, fast, safe\n" << endl;
}

int main() {
    normal_way();
    stl_way();

    /*
        COMPARISON:
        Feature | Normal Array | STL Vector
        ----------------|--------------|-----------
        Size | Fixed | Dynamic
        Sorting | Manual loop | sort()
        Memory Manage | Manual | Automatic
        Time | More code | Less code
    */
    return 0;
}