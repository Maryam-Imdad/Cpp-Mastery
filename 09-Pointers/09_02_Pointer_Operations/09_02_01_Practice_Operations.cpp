#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "09_02_01 - PRACTICE POINTER OPERATIONS (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Dereference pointer to get value
    cout << "Q1: Dereference *p\n";
    int a = 10; // Variable a with 10
    int *p = &a; // p stores address of a
    cout << "a = " << a << "\n"; // Direct access
    cout << "*p = " << *p << "\n"; // Dereference, value at address p
    cout << "\n";

    // Q2: Change value using dereference
    cout << "Q2: Change value via *p\n";
    cout << "Before a = " << a << "\n"; // Before
    *p = 100; // Write new value 100 at address p
    cout << "After *p=100, a = " << a << "\n\n"; // a changed to 100

    // Q3: Pointer arithmetic p+1
    cout << "Q3: p+1 moves by sizeof(type)\n";
    int arr[3] = {10, 20, 30}; // Array with 3 ints
    int *ptr = arr; // ptr = &arr[0], points to first
    cout << "arr[0] address = " << ptr << " value = " << *ptr << "\n"; // First
    cout << "arr[1] address = " << (ptr+1) << " value = " << *(ptr+1) << "\n"; // Second, address +4 bytes
    cout << "Difference in address = " << (long)(ptr+1) - (long)ptr << " bytes\n\n"; // Should be 4

    // Q4: Increment pointer p++
    cout << "Q4: p++ moves pointer\n";
    int *q = arr; // q points to arr[0]
    cout << "q points to " << *q << "\n"; // 10
    q++; // Move to next element, now points to arr[1]
    cout << "After q++, points to " << *q << "\n"; // 20
    q++; // Move to arr[2]
    cout << "After q++ again, points to " << *q << "\n\n"; // 30

    // Q5: Decrement pointer p--
    cout << "Q5: p-- moves back\n";
    // q currently at arr[2]
    q--; // Move back to arr[1]
    cout << "After q--, points to " << *q << "\n"; // 20
    q--; // Move back to arr[0]
    cout << "After q-- again, points to " << *q << "\n\n"; // 10

    // Q6: Difference between *p++ and (*p)++
    cout << "Q6: *p++ vs (*p)++\n";
    int x = 5; // Variable
    int *px = &x; // Pointer to x
    cout << "x = " << x << "\n"; // 5
    (*px)++; // This increments VALUE at px, x becomes 6, pointer stays same
    cout << "After (*px)++, x = " << x << " px still points to x\n"; // 6
    x = 5; // Reset
    px = &x; // Reset
    int y = 10; // Another variable next in memory maybe not contiguous but for demo array
    int arr2[2] = {5, 10}; // Array for safe *p++ demo
    int *pa = arr2; // pa points to arr2[0]=5
    cout << "arr2 = {5,10}, pa points to " << *pa << "\n"; // 5
    int val = *pa++; // val = *pa (5) then pa moves to next
    cout << "val = *pa++ = " << val << ", now pa points to " << *pa << "\n\n"; // val 5, pa now 10

    // Q7: Subtracting two pointers
    cout << "Q7: Pointer subtraction p2-p1\n";
    int *p1 = &arr[0]; // Pointer to first
    int *p2 = &arr[2]; // Pointer to third
    long diff = p2 - p1; // Difference in elements, not bytes
    cout << "p2-p1 (arr[2]-arr[0]) = " << diff << " elements\n"; // 2 elements
    cout << "Bytes difference = " << (long)p2 - (long)p1 << " bytes\n\n"; // 8 bytes

    // Q8: Comparing pointers
    cout << "Q8: Compare pointers\n";
    int *c1 = &arr[0]; // First
    int *c2 = &arr[1]; // Second
    if(c1 < c2){ // Compare addresses
        cout << "c1 is before c2 in memory\n\n"; // True because array contiguous
    }

    // Q9: char* arithmetic (size 1 byte)
    cout << "Q9: char* arithmetic\n";
    char chArr[3] = {'A', 'B', 'C'}; // Char array
    char *chPtr = chArr; // Points to 'A'
    cout << "chPtr points to " << *chPtr << " at " << (void*)chPtr << "\n"; // Address as void*
    chPtr++; // Move 1 byte only because char is 1 byte
    cout << "After chPtr++, points to " << *chPtr << " at " << (void*)chPtr << "\n"; // B
    cout << "Char pointer moves 1 byte, int pointer moves 4 bytes\n\n";

    // Q10: void* pointer (cannot dereference or arithmetic)
    cout << "Q10: void* pointer\n";
    int iv = 10; // Int variable
    void *vp = &iv; // void* can hold any type address
    cout << "void* vp holds address " << vp << "\n"; // Address
    // *vp // ERROR cannot dereference void*
    cout << "To dereference, cast: *(int*)vp = " << *(int*)vp << "\n"; // Cast to int* then dereference
    // vp++ // ERROR cannot arithmetic on void*

    cout << "\n================================================================\n";
    return 0;
}