#include <iostream>
using namespace std;
/*

FILE: 07_01_01_One_Dimensional_Array.cpp
TOPIC: 1D Array in Detail

PART A: BEGINNER - Declaration

Ways:
int arr[5]; // garbage values
int arr[5] = {1,2,3,4,5};
int arr[] = {1,2,3}; // size auto 3
int arr[5] = {1,2}; // [1,2,0,0,0]

PART B: INTERMEDIATE - Input Output

Loop is must for array.
for(i=0;i<n;i++) cin>>arr[i];
for(i=0;i<n;i++) cout<<arr[i]<<" ";

PART C: ADVANCE - Passing to Function

Array hamesha reference se pass hota hai (pointer decay).
void func(int arr[], int n) { arr[0]=100; } -> original change ho jayega
Isliye size alag se pass karna padta hai.

PART D: SCHOLAR - Interview

Q: Can we return array from function?
No, but we can return pointer or use vector, or pass array by reference to fill.

Q: What is array decay?
Jab array ko function me pass karte hain to wo pointer me convert ho jata hai. sizeof kaam nahi karega function ke andar.
*/

void printArray(int arr[], int n){
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

void modifyArray(int arr[], int n){
    arr[0] = 999; // original array change hoga
}

int main(){
    cout << "================================================================\n";
    cout << "07_01_01 - 1D ARRAY\n";
    cout << "================================================================\n\n";

    int arr[5] = {1,2,3,4,5};
    int n=5;

    cout << "Original: "; printArray(arr,n);
    modifyArray(arr,n);
    cout << "After modify arr[0]=999: "; printArray(arr,n);
    cout << "Proof: Array passes by reference (pointer decay)\n\n";

    int arr2[] = {10,20,30};
    cout << "Auto size arr2 length: " << sizeof(arr2)/sizeof(arr2[0]) << "\n";
    cout << "Partial init int arr[5]={1,2}: ";
    int arr3[5] = {1,2}; for(int i=0;i<5;i++) cout << arr3[i] << " ";
    cout << "\n";

    cout << "\n================================================================\n";
    return 0;
}