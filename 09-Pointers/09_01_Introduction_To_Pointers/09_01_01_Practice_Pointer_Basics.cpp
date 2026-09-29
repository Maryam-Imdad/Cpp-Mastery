#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "09_01_01 - PRACTICE POINTER BASICS (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Declare int variable and print its address
    cout << "Q1: Print address of variable\n";
    int a = 10; // Declare variable
    cout << "Value of a = " << a << "\n"; // Print value
    cout << "Address of a = " << &a << "\n\n"; // Print address using &

    // Q2: Declare pointer to store address of a
    cout << "Q2: Pointer storing address\n";
    int *p = &a; // Pointer p = address of a
    cout << "p = " << p << "\n"; // p holds address
    cout << "*p = " << *p << "\n\n"; // Dereference gives value

    // Q3: Print size of pointer
    cout << "Q3: Size of pointer\n";
    cout << "Size of int* = " << sizeof(p) << " bytes\n"; // Size of pointer
    cout << "Size of char* = " << sizeof(char*) << " bytes\n"; // Always 8 on 64-bit
    cout << "Size of double* = " << sizeof(double*) << " bytes\n\n";

    // Q4: Change value of a using pointer
    cout << "Q4: Change value using pointer\n";
    cout << "Before a = " << a << "\n"; // Before
    *p = 50; // Change value at address p
    cout << "After *p=50, a = " << a << "\n\n"; // a changed

    // Q5: Pointer to pointer
    cout << "Q5: Pointer to pointer\n";
    int *ptr = &a; // First pointer points to a
    int **pptr = &ptr; // Second pointer points to first pointer
    cout << "a = " << a << "\n"; // Value of a
    cout << "*ptr = " << *ptr << "\n"; // Value at ptr = a
    cout << "**pptr = " << **pptr << "\n"; // Value at value at pptr = a
    cout << "Address chain: &a=" << &a << " ptr=" << ptr << " *pptr=" << *pptr << "\n\n";

    // Q6: Null pointer
    cout << "Q6: Null pointer\n";
    int *np = nullptr; // Null pointer points to nothing
    cout << "np = " << np << "\n"; // Print null (0)
    if(np==nullptr){ // Check if null
        cout << "It is null pointer, safe\n\n";
    }

    // Q7: Different types of pointers
    cout << "Q7: Different type pointers\n";
    int iv = 10; // int variable
    char cv = 'A'; // char variable
    double dv = 3.14; // double variable
    int *ip = &iv; // int pointer
    char *cp = &cv; // char pointer
    double *dp = &dv; // double pointer
    cout << "int *ip = " << *ip << "\n"; // Dereference int
    cout << "char *cp = " << *cp << "\n"; // Dereference char
    cout << "double *dp = " << *dp << "\n\n"; // Dereference double

    // Q8: Address of pointer itself
    cout << "Q8: Address of pointer\n";
    cout << "Address of a = " << &a << "\n"; // Address of variable
    cout << "Address of p = " << &p << "\n"; // Address of pointer variable itself
    cout << "p holds = " << p << " which is address of a\n\n";

    // Q9: Uninitialized wild pointer danger
    cout << "Q9: Wild pointer concept\n";
    cout << "int *wild; // Uninitialized - points to random address - DANGEROUS\n";
    cout << "Always init: int *wild = nullptr; // Safe\n\n";

    // Q10: Value and address together
    cout << "Q10: Summary table\n";
    int num = 100; // Variable
    int *numPtr = &num; // Pointer to it
    cout << "num = " << num << "\n"; // Value
    cout << "&num = " << &num << "\n"; // Address of num
    cout << "numPtr = " << numPtr << "\n"; // numPtr value = address of num
    cout << "*numPtr = " << *numPtr << "\n"; // Value at numPtr
    cout << "&numPtr = " << &numPtr << "\n"; // Address of numPtr itself

    cout << "\n================================================================\n";
    return 0;
}