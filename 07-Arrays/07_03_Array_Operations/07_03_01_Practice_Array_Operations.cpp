#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_03_01_PRACTICE - Array Operations (10 Qs) Detailed\n";
    cout << "================================================================\n\n";

    // ============================================================
    // Q1: Traverse and print all elements
    // Logic: Simple for loop from 0 to n-1
    // ============================================================
    cout << "Q1: Traverse and print array\n";
    int arr1[] = {5, 10, 15, 20, 25};
    int n1 = 5;
    cout << "Array: ";
    for(int i = 0; i < n1; i++){
        cout << arr1[i] << " "; // Visiting each element
    }
    cout << "\n\n";

    // ============================================================
    // Q2: Linear Search - Find if 15 exists
    // Logic: Check each element, if matches break
    // ============================================================
    cout << "Q2: Linear Search for 15\n";
    int key = 15;
    bool found = false;
    for(int i = 0; i < n1; i++){
        if(arr1[i] == key){ // Compare with key
            cout << "Found " << key << " at index " << i << "\n";
            found = true;
            break; // Stop searching after found
        }
    }
    if(!found){
        cout << "Not Found\n";
    }
    cout << "\n";

    // ============================================================
    // Q3: Insert element at the end
    // Logic: arr[n] = value; n++
    // ============================================================
    cout << "Q3: Insert at end\n";
    int arr3[10] = {1, 2, 3, 4};
    int n3 = 4;
    int valueEnd = 99;
    cout << "Before: ";
    for(int i = 0; i < n3; i++) cout << arr3[i] << " ";
    arr3[n3] = valueEnd; // Insert at last position
    n3 = n3 + 1; // Increase size
    cout << "\nAfter inserting " << valueEnd << " at end: ";
    for(int i = 0; i < n3; i++) cout << arr3[i] << " ";
    cout << "\n\n";

    // ============================================================
    // Q4: Insert element at beginning (position 0)
    // Logic: Shift all elements to right by 1, then insert at 0
    // ============================================================
    cout << "Q4: Insert at beginning (pos 0)\n";
    int arr4[10] = {2, 3, 4, 5};
    int n4 = 4;
    cout << "Before: ";
    for(int i = 0; i < n4; i++) cout << arr4[i] << " ";
    // Shifting right
    for(int i = n4; i > 0; i--){
        arr4[i] = arr4[i-1]; // Move each element one step right
    }
    arr4[0] = 1; // Insert at 0
    n4++;
    cout << "\nAfter inserting 1 at beginning: ";
    for(int i = 0; i < n4; i++) cout << arr4[i] << " ";
    cout << "\n\n";

    // ============================================================
    // Q5: Insert element at specific position (pos 2)
    // Logic: Shift from pos to right, then insert
    // ============================================================
    cout << "Q5: Insert at position 2\n";
    int arr5[10] = {10, 20, 30, 40};
    int n5 = 4;
    int pos = 2;
    int val = 25;
    cout << "Before: ";
    for(int i = 0; i < n5; i++) cout << arr5[i] << " ";
    // Shift elements from pos
    for(int i = n5; i > pos; i--){
        arr5[i] = arr5[i-1];
    }
    arr5[pos] = val; // Insert at position
    n5++;
    cout << "\nAfter inserting " << val << " at pos " << pos << ": ";
    for(int i = 0; i < n5; i++) cout << arr5[i] << " ";
    cout << "\n\n";

    // ============================================================
    // Q6: Delete element from end
    // Logic: Just decrease size by 1
    // ============================================================
    cout << "Q6: Delete from end\n";
    int arr6[] = {1, 2, 3, 4, 5};
    int n6 = 5;
    cout << "Before: ";
    for(int i = 0; i < n6; i++) cout << arr6[i] << " ";
    n6 = n6 - 1; // Last element ignored
    cout << "\nAfter deleting last: ";
    for(int i = 0; i < n6; i++) cout << arr6[i] << " ";
    cout << "\n\n";

    // ============================================================
    // Q7: Delete element from beginning (pos 0)
    // Logic: Shift all elements left by 1
    // ============================================================
    cout << "Q7: Delete from beginning\n";
    int arr7[] = {10, 20, 30, 40};
    int n7 = 4;
    cout << "Before: ";
    for(int i = 0; i < n7; i++) cout << arr7[i] << " ";
    // Shift left
    for(int i = 0; i < n7-1; i++){
        arr7[i] = arr7[i+1]; // Move next element to current
    }
    n7--;
    cout << "\nAfter deleting first: ";
    for(int i = 0; i < n7; i++) cout << arr7[i] << " ";
    cout << "\n\n";

    // ============================================================
    // Q8: Delete element at specific position (pos 1)
    // Logic: Shift left from pos
    // ============================================================
    cout << "Q8: Delete from position 1\n";
    int arr8[] = {11, 22, 33, 44};
    int n8 = 4;
    int delPos = 1;
    cout << "Before: ";
    for(int i = 0; i < n8; i++) cout << arr8[i] << " ";
    for(int i = delPos; i < n8-1; i++){
        arr8[i] = arr8[i+1]; // Shift left
    }
    n8--;
    cout << "\nAfter deleting from pos " << delPos << ": ";
    for(int i = 0; i < n8; i++) cout << arr8[i] << " ";
    cout << "\n\n";

    // ============================================================
    // Q9: Delete by value (first occurrence of 30)
    // Logic: First find index of value, then delete at that index
    // ============================================================
    cout << "Q9: Delete by value (30)\n";
    int arr9[] = {10, 20, 30, 40, 30};
    int n9 = 5;
    int delVal = 30;
    cout << "Before: ";
    for(int i = 0; i < n9; i++) cout << arr9[i] << " ";
    int delIndex = -1;
    // Find index of value
    for(int i = 0; i < n9; i++){
        if(arr9[i] == delVal){
            delIndex = i;
            break; // First occurrence
        }
    }
    if(delIndex!= -1){
        // Delete at found index
        for(int i = delIndex; i < n9-1; i++){
            arr9[i] = arr9[i+1];
        }
        n9--;
        cout << "\nAfter deleting " << delVal << ": ";
        for(int i = 0; i < n9; i++) cout << arr9[i] << " ";
    }
    else{
        cout << "\nValue not found";
    }
    cout << "\n\n";

    // ============================================================
    // Q10: Update element at position 2 to 99
    // Logic: Direct assignment arr[pos] = newValue
    // ============================================================
    cout << "Q10: Update element at pos 2 to 99\n";
    int arr10[] = {1, 2, 3, 4, 5};
    int n10 = 5;
    cout << "Before: ";
    for(int i = 0; i < n10; i++) cout << arr10[i] << " ";
    int updatePos = 2;
    arr10[updatePos] = 99; // Direct update O(1)
    cout << "\nAfter update: ";
    for(int i = 0; i < n10; i++) cout << arr10[i] << " ";
    cout << "\n";

    cout << "\n================================================================\n";
    cout << "All 10 Practice Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}