#include <iostream>
using namespace std;
/*

FILE: 07_01_00_Overview_Array.cpp
TOPIC: Array Kya Hai? DSA ka Pehla Step

PART A: BEGINNER - Array Kya Hai?

Array = Same type ke data ka collection, jo contiguous memory me store hota hai.
Example: int arr[5] = {10,20,30,40,50};
Index 0 se start hota hai. arr[0]=10, arr[4]=50

Kyun chahiye?
100 variables banane se better hai 1 array banao.
int marks[100] is better than m1,m2,m3...m100

PART B: INTERMEDIATE - Memory Layout

arr[5] memory me aise hai:
[1000]=10 | [1004]=20 | [1008]=30 | [1012]=40 | [1016]=50
Har int 4 bytes. Address continuous hai.
Isi liye arr[i] ka formula: BaseAddress + i * size_of_type
O(1) access time isi wajah se hai.

PART C: ADVANCE - Types

1. 1D Array: int arr[5]
2. 2D Array: int mat[2][3] -> Matrix
3. Dynamic Array: vector<int> (STL)
Array ka size compile time pe fixed hota hai, vector ka runtime pe change hota hai.

PART D: SCHOLAR - Interview

Q: Array vs Linked List?
Array: O(1) access, fixed size, contiguous
Linked List: O(n) access, dynamic size, non-contiguous

Q: Why index starts from 0?
C me pointer arithmetic ki wajah se. arr[i] = *(arr+i). Agar 1 se start hota to har bar -1 karna padta.
*/

int main(){
    cout << "================================================================\n";
    cout << "07_01_00 - OVERVIEW OF ARRAY\n";
    cout << "================================================================\n\n";

    int arr[5] = {10,20,30,40,50};
    cout << "Array: ";
    for(int i=0; i<5; i++) cout << arr[i] << " ";
    cout << "\n";

    cout << "arr[0]=" << arr[0] << " (first)\n";
    cout << "arr[4]=" << arr[4] << " (last)\n";
    cout << "Size in bytes: " << sizeof(arr) << "\n";
    cout << "Length: " << sizeof(arr)/sizeof(arr[0]) << "\n";
    cout << "Address: arr=" << arr << " &arr[0]=" << &arr[0] << "\n";

    cout << "\nKey: Contiguous Memory + 0-based Indexing + O(1) Access\n";
    cout << "================================================================\n";
    return 0;
}