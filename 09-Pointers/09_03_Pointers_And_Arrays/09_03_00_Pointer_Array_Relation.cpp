#include <iostream>
using namespace std;
/*

FILE: 09_03_00_Pointer_Array_Relation.cpp
TOPIC: Pointer and Array Relationship


PART A: BEGINNER - Relation

Array name is a constant pointer to first element.
int arr[3] = {10,20,30};
arr == &arr[0] -> both address of first element
*arr == arr[0] == 10

But arr is constant, you cannot do arr++ (error)
int *p = arr; // p is variable pointer, you can p++

Access methods are same:
arr[i] == *(arr+i) == *(p+i) == p[i]

PART B: INTERMEDIATE - How it works in memory

arr[0] at 1000 (4 bytes)
arr[1] at 1004
arr[2] at 1008

p = 1000
p+1 = 1004 -> arr[1]
p+2 = 1008 -> arr[2]

2D Array: int arr[2][3]
arr points to first row. *(arr + i) is ith row. *(*(arr+i)+j) = arr[i][j]

PART C: ADVANCE - Why important?

Passing array to function actually passes pointer.
void func(int *p) or void func(int arr[]) same.

Pointer to array: int (*p)[3] points to whole array of 3 ints
Array of pointers: int *p[3] array where each element is int*

PART D: SCHOLAR - Interview

Q: Difference between arr and &arr?
Ans: arr is address of first element (type int*), &arr is address of whole array (type int(*)[size]) but numeric value same.

Q: Why arr++ error but p++ works?
Ans: arr is constant pointer (like const int*), cannot change. p is variable.

Q: sizeof(arr) vs sizeof(p)?
Ans: sizeof(arr) = total bytes (n*4), sizeof(p) = 8 bytes (pointer size)
*/

int main(){
    cout << "================================================================\n";
    cout << "09_03_00 - POINTER & ARRAY RELATION\n";
    cout << "================================================================\n\n";

    int arr[3] = {10, 20, 30}; // Array of 3 ints

    cout << "Array address concepts:\n";
    cout << "arr = " << arr << " (address of first element)\n"; // Address of first
    cout << "&arr[0] = " << &arr[0] << " (same)\n"; // Same as arr
    cout << "&arr = " << &arr << " (address of whole array, same value different type)\n\n"; // Same numeric but type diff

    cout << "Access methods:\n";
    cout << "arr[0] = " << arr[0] << "\n"; // Normal
    cout << "*arr = " << *arr << "\n"; // Dereference first
    cout << "*(arr+1) = " << *(arr+1) << "\n"; // Second element using pointer arithmetic
    cout << "*(arr+2) = " << *(arr+2) << "\n\n"; // Third

    int *p = arr; // Variable pointer to first element
    cout << "Using variable pointer p = arr:\n";
    cout << "p[0] = " << p[0] << "\n"; // p[0] works
    cout << "p[1] = " << p[1] << "\n"; // p[1]
    cout << "*(p+1) = " << *(p+1) << "\n\n";

    cout << "sizeof difference:\n";
    cout << "sizeof(arr) = " << sizeof(arr) << " bytes (3*4=12)\n"; // Total size
    cout << "sizeof(p) = " << sizeof(p) << " bytes (pointer size 8 on 64-bit)\n";

    cout << "\n================================================================\n";
    return 0;
}