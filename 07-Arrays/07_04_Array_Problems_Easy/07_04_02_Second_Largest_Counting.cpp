#include <iostream>
#include <climits>
using namespace std;
/*

FILE: 07_04_02_Second_Largest_Counting.cpp
TOPIC: Second Largest, Counting Problems


PART A: BEGINNER - Problems

1. Second Largest: Distinct second max. {1,5,2,5,3} -> second is 3, not 5
2. Counting: Count even, odd, positive, occurrences of element

PART B: INTERMEDIATE - Second Largest Logic

Method 1: Sort array and pick second last distinct -> O(n log n)
Method 2 (Better): Two variables
  first = INT_MIN, second = INT_MIN
  Loop:
    if(arr[i] > first){
        second = first;
        first = arr[i];
    }
    else if(arr[i] > second && arr[i]!= first){
        second = arr[i];
    }

Counting Logic:
  int even=0;
  for(i) if(arr[i]%2==0) even++;

PART C: ADVANCE - Edge Cases

- Array size <2 -> No second largest
- All elements same {5,5,5} -> No second largest
- Negative numbers -> Use INT_MIN not 0
- Duplicate max {10,10,9} -> second is 9

Time O(n), Space O(1)

PART D: SCHOLAR - Interview

Q: Second largest without sorting?
Ans: Use two variables method.

Q: Count frequency of each element?
Ans: Use HashMap (map<int,int>) or if small numbers, use frequency array.
*/

int main(){
    cout << "================================================================\n";
    cout << "07_04_02 - SECOND LARGEST & COUNTING\n";
    cout << "================================================================\n\n";

    int arr[] = {10, 5, 10, 20, 8, 20};
    int n = 6;

    // Second Largest
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i]!= first){
            second = arr[i];
        }
    }
    cout << "Array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout << "\nFirst Largest = " << first << "\n";
    if(second==INT_MIN) cout << "Second Largest = Not exist\n";
    else cout << "Second Largest = " << second << "\n";

    // Counting even
    int even=0, odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }
    cout << "Even count=" << even << " Odd count=" << odd << "\n";

    cout << "================================================================\n";
    return 0;
}