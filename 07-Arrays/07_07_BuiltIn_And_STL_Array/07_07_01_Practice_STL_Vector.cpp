#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_07_01_PRACTICE - STL Vector (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Create vector and print
    cout << "Q1: Create vector {1,2,3,4,5} and print\n";
    vector<int> v = {1,2,3,4,5}; // Initialization
    cout << "Vector: ";
    for(int i=0;i<v.size();i++){
        cout << v[i] << " "; // Access by index
    }
    cout << "\n\n";

    // Q2: Take input into vector
    cout << "Q2: Take 5 inputs into vector\n";
    vector<int> v2;
    cout << "Enter 5 numbers (demo with fixed): ";
    // For demo using fixed, but logic for user input:
    // for(int i=0;i<5;i++){ int x; cin>>x; v2.push_back(x); }
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);
    v2.push_back(50);
    for(int x: v2) cout<<x<<" ";
    cout << "\n\n";

    // Q3: Find sum using vector
    cout << "Q3: Sum of vector\n";
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum += v[i]; // Add each
    }
    cout << "Sum="<<sum<<"\n\n";

    // Q4: Find max in vector
    cout << "Q4: Max in vector\n";
    int mx = v[0];
    for(int i=1;i<v.size();i++){
        if(v[i] > mx) mx = v[i]; // Compare
    }
    cout << "Max="<<mx<<"\n\n";

    // Q5: Reverse vector
    cout << "Q5: Reverse vector\n";
    vector<int> rev = {1,2,3,4,5};
    // Method 1: Using two pointers
    int l=0, r=rev.size()-1;
    while(l<r){
        int temp=rev[l];
        rev[l]=rev[r];
        rev[r]=temp;
        l++; r--;
    }
    cout << "Reversed: ";
    for(int x: rev) cout<<x<<" ";
    cout << "\n";
    // Method 2: Using built-in
    // reverse(v.begin(), v.end());
    cout << "\n";

    // Q6: Sort vector
    cout << "Q6: Sort vector {5,1,4,2,3}\n";
    vector<int> vsort = {5,1,4,2,3};
    sort(vsort.begin(), vsort.end()); // STL sort O(n log n)
    for(int x: vsort) cout<<x<<" ";
    cout << "\n\n";

    // Q7: Search element (linear)
    cout << "Q7: Search 4 in vector\n";
    int key=4;
    bool found=false;
    for(int i=0;i<v.size();i++){
        if(v[i]==key){
            cout<<"Found at index "<<i<<"\n";
            found=true;
            break;
        }
    }
    if(!found) cout<<"Not found\n";
    cout<<"\n";

    // Q8: Remove duplicates from sorted vector
    cout << "Q8: Remove duplicates {1,1,2,2,3}\n";
    vector<int> dup = {1,1,2,2,3};
    sort(dup.begin(), dup.end()); // Ensure sorted
    dup.erase(unique(dup.begin(), dup.end()), dup.end()); // STL trick
    // unique moves duplicates to end, erase deletes them
    for(int x: dup) cout<<x<<" ";
    cout << "\n\n";

    // Q9: Merge two vectors
    cout << "Q9: Merge {1,3,5} and {2,4,6}\n";
    vector<int> a={1,3,5}, b={2,4,6}, merged;
    for(int x: a) merged.push_back(x); // Add all from a
    for(int x: b) merged.push_back(x); // Add all from b
    sort(merged.begin(), merged.end()); // Sort merged
    for(int x: merged) cout<<x<<" ";
    cout << "\n\n";

    // Q10: 2D vector (Matrix)
    cout << "Q10: 2D vector 2x3\n";
    vector<vector<int>> mat = {{1,2,3},{4,5,6}}; // 2D vector
    cout << "Matrix:\n";
    for(int i=0;i<mat.size();i++){ // Rows
        for(int j=0;j<mat[i].size();j++){ // Cols
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    // Add new row
    mat.push_back({7,8,9});
    cout << "After adding row {7,8,9}:\n";
    for(auto &row: mat){
        for(int x: row) cout<<x<<" ";
        cout<<"\n";
    }

    cout << "\n================================================================\n";
    return 0;
}