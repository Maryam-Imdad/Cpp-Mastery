#include <iostream>
using namespace std;
/*

FILE: 07_05_02_Two_Pointers_Technique.cpp
TOPIC: Two Pointers - Most Asked Pattern


PART A: BEGINNER - What is Two Pointers?

Use two indices: one from start (left), one from end (right).
Move them based on condition.
Very efficient O(n) vs O(n^2).

Common uses:
- Reverse array
- Check palindrome
- Pair sum in sorted array
- Remove duplicates from sorted array

PART B: INTERMEDIATE - Patterns

1. Reverse/Palindrome:
   l=0,r=n-1 while(l<r) if(arr[l]!=arr[r]) not palindrome else l++,r--

2. Pair Sum (sorted array):
   l=0,r=n-1
   while(l<r){
     sum=arr[l]+arr[r]
     if(sum==target) found
     else if(sum<target) l++
     else r--
   }

3. Remove duplicates sorted:
   i=0 for(j=1;j<n;j++) if(arr[j]!=arr[i]) i++, arr[i]=arr[j]

PART C: ADVANCE - Why better?

Normal pair sum with nested loops O(n^2).
Two pointers O(n) because array sorted and we move pointers intelligently.

Time O(n), Space O(1) - no extra array.

PART D: SCHOLAR - Interview

Q: When to use two pointers?
Ans: When array is sorted, or we need in-place reverse/palindrome, or need to find pairs.

Q: Two pointers vs Sliding Window?
Ans: Two pointers uses two ends moving inward/outward. Sliding window uses window [l,r] moving forward.

Important: Pair sum two-pointer only works if sorted.
*/

int main(){
    cout << "================================================================\n";
    cout << "07_05_02 - TWO POINTERS TECHNIQUE\n";
    cout << "================================================================\n\n";

    // Example 1: Palindrome check
    int arr1[] = {1,2,3,2,1};
    int n1=5;
    int l=0,r=n1-1;
    bool pal=true;
    while(l<r){
        if(arr1[l]!=arr1[r]){ pal=false; break; }
        l++; r--;
    }
    cout << "Palindrome {1,2,3,2,1}: " << (pal?"Yes":"No") << "\n";

    // Example 2: Pair sum target 9
    int arr2[] = {1,2,4,5,7,11};
    int target=9;
    int left=0,right=5;
    cout << "Pair sum " << target << " in sorted array: ";
    while(left<right){
        int sum=arr2[left]+arr2[right];
        if(sum==target){ cout<<"Found "<<arr2[left]<<"+"<<arr2[right]<<"\n"; break; }
        else if(sum<target) left++;
        else right--;
    }

    cout << "================================================================\n";
    return 0;
}