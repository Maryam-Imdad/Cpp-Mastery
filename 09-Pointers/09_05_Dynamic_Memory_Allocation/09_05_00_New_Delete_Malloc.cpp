#include <iostream>
#include <cstdlib> // For malloc, free
using namespace std;
/*

FILE: 09_05_00_New_Delete_Malloc.cpp
TOPIC: Dynamic Memory - new/delete and malloc/free


PART A: BEGINNER - What is Dynamic Memory?

Stack: Fixed size, auto managed, local variables.
Heap: Large, manual management, dynamic.

Static: int arr[100]; size fixed at compile time.
Dynamic: Size decided at runtime, can grow.

Two ways in C++:
1. C++ style: new and delete (recommended)
2. C style: malloc() and free() from <cstdlib>

new -> allocates memory in heap, returns pointer, calls constructor
delete -> frees memory, calls destructor
new[] -> for array
delete[] -> for array

malloc -> allocates bytes, returns void*, no constructor, needs cast
free -> frees memory
calloc -> allocates and initializes 0
realloc -> resize

PART B: INTERMEDIATE - Syntax

int *p = new int; // Single int in heap, value garbage
*p = 10;

int *p2 = new int(10); // Single int with value 10

int *arr = new int[5]; // Array of 5 ints in heap, garbage values
arr[0]=1; etc.

delete p; // Free single
delete[] arr; // Free array - IMPORTANT to use []

C style:
int *pm = (int*)malloc(sizeof(int)); // Allocate 4 bytes
*pm = 10;
free(pm);

int *arrm = (int*)malloc(5*sizeof(int)); // 5 ints
free(arrm);

PART C: ADVANCE - Why pointers needed for dynamic?

Because heap memory has no name, only address returned.
Pointer stores that address to access heap memory.

Leak: If you allocate with new but forget delete, memory leak.

PART D: SCHOLAR - Interview

Q: new vs malloc difference?
Ans: new is operator, calls constructor, returns typed pointer, throws exception on fail.
     malloc is function, no constructor, returns void*, returns NULL on fail, needs sizeof.

Q: What is memory leak?
Ans: Allocated heap memory not freed, reduces available memory.

Q: delete vs delete[]?
Ans: delete for single, delete[] for array. Using wrong causes undefined behavior.
*/

int main(){
    cout << "================================================================\n";
    cout << "09_05_00 - DYNAMIC MEMORY\n";
    cout << "================================================================\n\n";

    // C++ style new/delete
    cout << "--- C++ new/delete ---\n";
    int *p = new int; // Allocate one int in heap
    *p = 10; // Assign value 10 to heap memory
    cout << "p points to heap value: " << *p << " at address " << p << "\n";

    int *p2 = new int(20); // Allocate with initial value 20
    cout << "p2 with value 20: " << *p2 << "\n";

    int *arr = new int[3]; // Allocate array of 3 ints in heap
    arr[0] = 10; // Assign
    arr[1] = 20; // Assign
    arr[2] = 30; // Assign
    cout << "Dynamic array: " << arr[0] << " " << arr[1] << " " << arr[2] << "\n";

    delete p; // Free single int
    cout << "Deleted p\n";
    delete p2; // Free single
    cout << "Deleted p2\n";
    delete[] arr; // Free array, must use []
    cout << "Deleted arr with delete[]\n\n";

    // C style malloc/free
    cout << "--- C malloc/free ---\n";
    int *pm = (int*)malloc(sizeof(int)); // Allocate 4 bytes, cast void* to int*
    *pm = 100; // Assign
    cout << "malloc int: " << *pm << " at " << pm << "\n";

    int *arrM = (int*)malloc(3*sizeof(int)); // Allocate 3 ints =12 bytes
    arrM[0]=1; // Assign
    arrM[1]=2;
    arrM[2]=3;
    cout << "malloc array: " << arrM[0] << " " << arrM[1] << " " << arrM[2] << "\n";

    free(pm); // Free malloc memory
    cout << "Freed pm with free()\n";
    free(arrM); // Free array
    cout << "Freed arrM with free()\n";

    cout << "\n================================================================\n";
    return 0;
}