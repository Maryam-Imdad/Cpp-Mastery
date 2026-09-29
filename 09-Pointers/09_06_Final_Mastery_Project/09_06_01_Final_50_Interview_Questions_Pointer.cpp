#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "09_06_01 - FINAL 50 INTERVIEW QUESTIONS - POINTERS\n";
    cout << "================================================================\n\n";

    cout << "------ BASICS Q1-Q15 ------\n";
    cout << "Q1: What is pointer? Variable storing address of another variable\n";
    int a=10; int *p=&a;
    cout << " Example: int a=10; int *p=&a; p=" << p << " *p=" << *p << "\n";
    cout << "Q2: & and * operators? & gives address, * gives value at address\n";
    cout << "Q3: Size of pointer? 8 bytes on 64-bit, 4 on 32-bit regardless of type\n";
    cout << "Q4: Null pointer? int *p=nullptr; points to nothing\n";
    cout << "Q5: Wild pointer? Uninitialized pointer int *p; dangerous\n";
    cout << "Q6: Dangling pointer? Points to freed memory\n";
    cout << "Q7: Pointer to pointer? int **pp=&p; stores address of pointer\n";
    int **pp=&p; cout << " **pp=" << **pp << "\n";
    cout << "Q8: Constant pointer vs Pointer to constant? int *const p vs const int *p\n";
    cout << "Q9: void*? Generic pointer can hold any type address but cannot dereference directly\n";
    cout << "Q10: Can pointer be NULL and void? Yes nullptr\n";
    cout << "Q11-Q15: Why use pointer? Dynamic memory, pass by reference, data structures\n\n";

    cout << "------ ARITHMETIC Q16-Q25 ------\n";
    int arr[3]={10,20,30};
    int *ptr=arr;
    cout << "Q16: p++? Moves by sizeof(type). int* +1 = +4 bytes. ptr=" << ptr << " ptr+1=" << (ptr+1) << "\n";
    cout << "Q17: *p++ vs (*p)++? *p++ = value then move ptr, (*p)++ = increment value\n";
    cout << "Q18: Can add two pointers? No, but subtract p2-p1 gives distance\n";
    cout << "Q19: p2-p1 example arr[2]-arr[0]=" << (&arr[2]-&arr[0]) << " elements\n";
    cout << "Q20: Compare pointers? if(p1<p2) checks memory order\n";
    cout << "Q21: *(arr+i) == arr[i]? Yes same\n";
    cout << "Q22: char* p++ moves 1 byte, int* moves 4\n";
    cout << "Q23: void* arithmetic? Not allowed, size unknown\n";
    cout << "Q24: Array name constant pointer? arr++ invalid, p=arr p++ valid\n";
    cout << "Q25: sizeof(arr) vs sizeof(p)? sizeof(arr)=n*4=12, sizeof(p)=8\n\n";

    cout << "------ ARRAY & STRING Q26-Q35 ------\n";
    cout << "Q26: arr == &arr[0]? Yes same address, different types\n";
    cout << "Q27: Traverse array using pointer: for(p=arr;p<arr+n;p++) cout<<*p\n";
    cout << "Q28: Sum array using pointer: sum+=*p++\n";
    cout << "Q29: Reverse array using two pointers left/right swap *left *right\n";
    cout << "Q30: Pointer to whole array int (*pa)[3]=&arr; (*pa)[0]=10\n";
    cout << "Q31: char str[] vs char *p? str[] mutable copy, *p points to read-only literal\n";
    char str[]="Hello"; char *ps=str;
    cout << " str[] traverses while(*ps!='\\0') ps++\n";
    cout << "Q32: Length using pointer while(*p!='\\0') len++ p++\n";
    cout << "Q33: Copy string using pointer while(*src!='\\0'){*dest=*src; src++; dest++;} *dest='\\0'\n";
    cout << "Q34: STL string *sp=&s; *sp gives whole string\n";
    cout << "Q35: Array of char* const char* names[]={\"Ali\",\"Sara\"} each is pointer\n\n";

    cout << "------ DYNAMIC MEMORY Q36-Q50 ------\n";
    cout << "Q36: Static vs Dynamic? Static compile time fixed, Dynamic runtime heap\n";
    cout << "Q37: new vs malloc? new operator calls constructor, typed pointer, exception. malloc function no constructor void* NULL\n";
    int *newP = new int(10);
    cout << "Q38: new int creates garbage, new int(10) gives 10 -> " << *newP << "\n"; delete newP;
    cout << "Q39: new int[5] allocates array, delete[] must used\n";
    cout << "Q40: delete vs delete[]? delete single, delete[] array\n";
    cout << "Q41: malloc(sizeof(int)) allocate 4 bytes needs cast (int*)\n";
    cout << "Q42: calloc(3,sizeof(int)) allocates 3 ints all zero\n";
    cout << "Q43: realloc(ptr, newSize) resize keeping old data\n";
    cout << "Q44: Memory leak? new without delete, heap not freed\n";
    cout << "Q45: Why pointer needed for dynamic? Heap has no name, only address returned\n";
    int *dyn=new int[3]; dyn[0]=1; dyn[1]=2; dyn[2]=3;
    cout << "Q46: Dynamic array sum using *(dyn+i): sum=" << dyn[0]+dyn[1]+dyn[2] << "\n"; delete[] dyn;
    cout << "Q47: Dynamic insertion needs new bigger array copy old + insert + delete old\n";
    cout << "Q48: Dynamic deletion needs new smaller array copy skipping pos + delete old\n";
    cout << "Q49: free() vs delete? free for malloc, delete for new, don't mix\n";
    cout << "Q50: Best practice? Always initialize pointer nullptr, pair new/delete, avoid wild/dangling\n";

    cout << "\n================================================================\n";
    cout << "ALL 50 DONE - POINTER MODULE COMPLETE\n";
    cout << "================================================================\n";
    return 0;
}