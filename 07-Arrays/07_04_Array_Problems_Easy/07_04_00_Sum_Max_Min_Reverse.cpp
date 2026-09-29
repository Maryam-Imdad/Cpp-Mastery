#include <iostream>
#include <climits>
using namespace std;
/*

FILE: 07_04_00_Sum_Max_Min_Reverse.cpp
TOPIC: Easy Array Problems - Foundation of Logic


PART A: BEGINNER - What are these problems?

1. Sum: Add all elements -> loop and sum+=arr[i]
2. Max: Find largest -> assume arr[0] is max, compare
3. Min: Find smallest -> assume arr[0] is min, compare
4. Reverse: Print reverse or reverse in place

These are 90% of easy interview questions.

PART B: INTERMEDIATE - Logic Patterns

Sum Pattern:
  int sum=0;
  for(i=0;i<n;i++) sum+=arr[i];

Max Pattern:
  int max=arr[0];
  for(i=1;i<n;i++) if(arr[i]>max) max=arr[i];

Min Pattern: Same with <

Reverse In-Place (Two Pointer):
  start=0, end=n-1
  while(start<end){
    swap(arr[start], arr[end]);
    start++; end--;
  }

PART C: ADVANCE - Edge Cases

- Empty array: n=0 -> sum=0, no max/min
- Single element: max=min=arr[0]
- All negative: max logic must start with arr[0], not 0
- Reverse: Even vs Odd length both work with while(start<end)

Time: All O(n), Space: O(1)

PART D: SCHOLAR - Interview

Q: Find max without using < > operator? Use sorting or manual.
Q: Reverse array without extra array? Use two pointers.
Q: What if array has INT_MIN? Use long long for sum to avoid overflow.
*/

int main(){
    cout << "================================================================\n";
    cout << "07_04_00 - SUM MAX MIN REVERSE\n";
    cout << "================================================================\n\n";

    int arr[] = {3, 10, -2, 15, 7};
    int n = 5;

    // Sum
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    cout << "Sum = " << sum << "\n";

    // Max
    int maxVal = arr[0];
    for(int i = 1; i < n; i++) if(arr[i] > maxVal) maxVal = arr[i];
    cout << "Max = " << maxVal << "\n";

    // Min
    int minVal = arr[0];
    for(int i = 1; i < n; i++) if(arr[i] < minVal) minVal = arr[i];
    cout << "Min = " << minVal << "\n";

    // Reverse In-Place
    cout << "Original: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    int s = 0, e = n-1;
    while(s < e){
        // Swap
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++; e--;
    }
    cout << "\nReversed: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n================================================================\n";
    return 0;
}