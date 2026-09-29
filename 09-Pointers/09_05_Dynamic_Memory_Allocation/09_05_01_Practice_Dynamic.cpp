#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "09_05_01 - PRACTICE DYNAMIC MEMORY (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Allocate single int using new and assign value
    cout << "Q1: Single int with new\n";
    int *p = new int; // Allocate int in heap, returns address
    *p = 10; // Dereference and assign 10
    cout << "Value = " << *p << " Address = " << p << "\n"; // Print
    delete p; // Free heap memory to avoid leak
    cout << "Deleted\n\n";

    // Q2: Allocate int with initial value new int(20)
    cout << "Q2: new int(20) with initial value\n";
    int *p2 = new int(20); // Allocate and initialize with 20 directly
    cout << "*p2 = " << *p2 << "\n"; // Should be 20
    delete p2; // Free
    cout << "Deleted\n\n";

    // Q3: Allocate array of 5 ints using new[]
    cout << "Q3: Dynamic array new int[5]\n";
    int *arr = new int[5]; // Allocate 5 ints in heap, garbage values initially
    for(int i=0; i<5; i++){ // Loop 0 to 4
        arr[i] = (i+1)*10; // Assign 10,20,30,40,50
    }
    cout << "Array: ";
    for(int i=0; i<5; i++){ // Print
        cout << arr[i] << " "; // Print each
    }
    cout << "\n";
    delete[] arr; // Free array using delete[]
    cout << "Deleted array with delete[]\n\n";

    // Q4: Take size from user and create dynamic array
    cout << "Q4: User size dynamic array\n";
    int n = 3; // Suppose user input 3
    cout << "n = " << n << " (user input)\n";
    int *userArr = new int[n]; // Allocate n size at runtime, not possible with static int arr[n] in old C++
    for(int i=0; i<n; i++){ // Input values
        userArr[i] = i+1; // Simulate user input 1,2,3
    }
    cout << "User array: ";
    for(int i=0; i<n; i++) cout << userArr[i] << " ";
    cout << "\n";
    delete[] userArr; // Free
    cout << "Deleted\n\n";

    // Q5: Allocate using malloc
    cout << "Q5: malloc single int\n";
    int *pm = (int*)malloc(sizeof(int)); // malloc returns void*, cast to int*, sizeof(int)=4
    *pm = 50; // Assign 50
    cout << "*pm = " << *pm << "\n"; // Print
    free(pm); // Free using free(), not delete
    cout << "Freed with free()\n\n";

    // Q6: Allocate array using malloc
    cout << "Q6: malloc array of 3 ints\n";
    int *arrM = (int*)malloc(3*sizeof(int)); // 3 * 4 =12 bytes
    arrM[0]=100; // Assign
    arrM[1]=200;
    arrM[2]=300;
    cout << "Array: " << arrM[0] << " " << arrM[1] << " " << arrM[2] << "\n";
    free(arrM); // Free
    cout << "Freed\n\n";

    // Q7: calloc which initializes to 0
    cout << "Q7: calloc init to 0\n";
    int *cal = (int*)calloc(3, sizeof(int)); // calloc(3,4) = 3 elements each 4 bytes, all 0
    cout << "calloc array: " << cal[0] << " " << cal[1] << " " << cal[2] << " (all zero)\n"; // All 0
    free(cal); // Free
    cout << "Freed\n\n";

    // Q8: realloc to resize
    cout << "Q8: realloc resize\n";
    int *re = (int*)malloc(2*sizeof(int)); // Initially 2 ints
    re[0]=1; re[1]=2;
    cout << "Before realloc size 2: " << re[0] << " " << re[1] << "\n";
    re = (int*)realloc(re, 4*sizeof(int)); // Resize to 4 ints, keeps old data
    re[2]=3; re[3]=4; // New elements
    cout << "After realloc size 4: " << re[0] << " " << re[1] << " " << re[2] << " " << re[3] << "\n";
    free(re); // Free
    cout << "Freed\n\n";

    // Q9: Memory leak example and avoid
    cout << "Q9: Memory leak concept\n";
    cout << "int *leak = new int[100]; // Allocate 100 ints\n";
    cout << "If you forget delete[] leak; -> Memory leak, memory stays allocated till program ends\n";
    cout << "Always pair: new with delete, new[] with delete[], malloc with free\n\n";

    // Q10: Dynamic 2D-like using pointer array
    cout << "Q10: Dynamic array sum using pointer\n";
    int *dyn = new int[4]; // Allocate 4 ints
    dyn[0]=5; dyn[1]=10; dyn[2]=15; dyn[3]=20; // Values
    int sum=0; // Sum variable
    for(int i=0;i<4;i++){ // Loop
        sum = sum + *(dyn+i); // Access via *(dyn+i) == dyn[i]
    }
    cout << "Array 5 10 15 20 Sum = " << sum << "\n"; // 50
    delete[] dyn; // Free

    cout << "\n================================================================\n";
    return 0;
}