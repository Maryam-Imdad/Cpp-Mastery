#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
/*

FILE: 07_08_01_Final_50_Interview_Questions_Array.cpp
TOPIC: 50 INTERVIEW QUESTIONS - FINAL MASTERY
We cover EASY, MEDIUM, HARD patterns line by line


Contains Top 50 Questions divided into 10 sections:
1. Basic Input/Output (Q1-Q5)
2. Max Min (Q6-Q10)
3. Search (Q11-Q15)
4. Sorting & Rotation (Q16-Q20)
5. Two Pointers (Q21-Q25)
6. Frequency & Counting (Q26-Q30)
7. 2D Matrix (Q31-Q35)
8. STL Vector (Q36-Q40)
9. Tricky Interview (Q41-Q45)
10. Hard LeetCode Pattern (Q46-Q50)
*/

int main(){
    cout << "================================================================\n";
    cout << "07_08_01 - FINAL 50 INTERVIEW QUESTIONS\n";
    cout << "================================================================\n\n";

    // ==================== SECTION 1: BASICS Q1-Q5 ====================
    cout << "--- SECTION 1: BASICS ---\n";
    // Q1: Print array
    cout << "Q1: Print {1,2,3}\n";
    int arr[]={1,2,3};
    for(int i=0;i<3;i++) cout<<arr[i]<<" "; // Simple traversal
    cout << "\n";

    // Q2: Sum
    cout << "Q2: Sum of {1,2,3} = ";
    int sum=0; for(int i=0;i<3;i++) sum+=arr[i]; cout<<sum<<"\n";

    // Q3: Average
    cout << "Q3: Average = " << (double)sum/3 << "\n";

    // Q4: Reverse print
    cout << "Q4: Reverse print: ";
    for(int i=2;i>=0;i--) cout<<arr[i]<<" "; cout<<"\n";

    // Q5: Take n and print
    cout << "Q5: Logic for taking n: cin>>n; loop cin>>arr[i]\n\n";

    // ==================== SECTION 2: MAX MIN Q6-Q10 ====================
    cout << "--- SECTION 2: MAX MIN ---\n";
    int arr2[]={5,2,9,1,5,6};
    int n=6;
    // Q6: Max
    int mx=arr2[0]; for(int i=1;i<n;i++) if(arr2[i]>mx) mx=arr2[i];
    cout << "Q6: Max="<<mx<<"\n";
    // Q7: Min
    int mn=arr2[0]; for(int i=1;i<n;i++) if(arr2[i]<mn) mn=arr2[i];
    cout << "Q7: Min="<<mn<<"\n";
    // Q8: Second Largest
    int first=INT_MIN, second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr2[i]>first){ second=first; first=arr2[i]; }
        else if(arr2[i]>second && arr2[i]!=first) second=arr2[i];
    }
    cout << "Q8: Second Largest="<<second<<"\n";
    // Q9: Second Smallest
    int fMin=INT_MAX,sMin=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr2[i]<fMin){ sMin=fMin; fMin=arr2[i]; }
        else if(arr2[i]<sMin && arr2[i]!=fMin) sMin=arr2[i];
    }
    cout << "Q9: Second Smallest="<<sMin<<"\n";
    // Q10: Diff max-min
    cout << "Q10: Diff="<<mx-mn<<"\n\n";

    // ==================== SECTION 3: SEARCH Q11-Q15 ====================
    cout << "--- SECTION 3: SEARCH ---\n";
    // Q11: Linear Search
    int key=9; bool found=false;
    for(int i=0;i<n;i++) if(arr2[i]==key){ cout<<"Q11: Linear Search "<<key<<" at "<<i<<"\n"; found=true; break; }
    // Q12: Binary Search (sorted)
    cout << "Q12: Binary Search needs sorted array, use while(l<=r) mid=(l+r)/2\n";
    // Q13: Count occurrences
    int cnt=0; for(int i=0;i<n;i++) if(arr2[i]==5) cnt++;
    cout << "Q13: Count of 5="<<cnt<<"\n";
    // Q14: Last occurrence
    int last=-1; for(int i=0;i<n;i++) if(arr2[i]==5) last=i;
    cout << "Q14: Last occurrence of 5 at "<<last<<"\n";
    // Q15: Search in 2D
    cout << "Q15: Search in 2D nested loops\n\n";

    // ==================== SECTION 4: SORT ROTATE Q16-Q20 ====================
    cout << "--- SECTION 4: SORT ROTATE ---\n";
    // Q16: Check sorted
    bool sorted=true; for(int i=1;i<n;i++) if(arr2[i]<arr2[i-1]){ sorted=false; break; }
    cout << "Q16: Is sorted? "<<(sorted?"Yes":"No")<<"\n";
    // Q17: Bubble sort code pattern
    cout << "Q17: Bubble sort: for(i) for(j) if(arr[j]>arr[j+1]) swap\n";
    // Q18: Left rotate by 1
    cout << "Q18: Left rotate by 1: temp=arr[0]; shift left; arr[n-1]=temp\n";
    // Q19: Right rotate by 1
    cout << "Q19: Right rotate by 1: temp=arr[n-1]; shift right; arr[0]=temp\n";
    // Q20: Move zeros to end
    cout << "Q20: Move zeros: pos=0; for(i) if(arr[i]!=0) arr[pos++]=arr[i]; fill 0\n\n";

    // ==================== SECTION 5: TWO POINTERS Q21-Q25 ====================
    cout << "--- SECTION 5: TWO POINTERS ---\n";
    // Q21: Reverse in-place
    cout << "Q21: Reverse in-place: l=0,r=n-1 while(l<r) swap and l++,r--\n";
    // Q22: Palindrome
    cout << "Q22: Palindrome: l=0,r=n-1 check arr[l]==arr[r]\n";
    // Q23: Pair sum sorted
    cout << "Q23: Pair sum sorted: l=0,r=n-1 while(l<r) sum=arr[l]+arr[r] adjust\n";
    // Q24: Remove duplicates sorted
    cout << "Q24: Remove duplicates sorted: i=0 for(j=1) if(arr[j]!=arr[i]) arr[++i]=arr[j]\n";
    // Q25: Sort 0s 1s
    cout << "Q25: Sort 0s 1s: l=0,r=n-1 while(l<r) if arr[l]==0 l++ else if arr[r]==1 r-- else swap\n\n";

    // ==================== SECTION 6: FREQUENCY Q26-Q30 ====================
    cout << "--- SECTION 6: FREQUENCY ---\n";
    // Q26: Frequency of each
    cout << "Q26: Frequency: use visited array or map<int,int>\n";
    // Q27: Count distinct
    cout << "Q27: Count distinct: nested loop with isDistinct check\n";
    // Q28: Most frequent
    cout << "Q28: Most frequent: track max count during frequency loop\n";
    // Q29: Even odd count
    int e=0,o=0; for(int i=0;i<n;i++) (arr2[i]%2==0?e++:o++);
    cout << "Q29: Even="<<e<<" Odd="<<o<<"\n";
    // Q30: Positive negative
    cout << "Q30: Pos Neg Zero count using >0 <0 ==0\n\n";

    // ==================== SECTION 7: 2D MATRIX Q31-Q35 ====================
    cout << "--- SECTION 7: 2D MATRIX ---\n";
    // Q31: Row sum
    cout << "Q31: Row sum: for(i) sum=0 for(j) sum+=mat[i][j]\n";
    // Q32: Transpose
    cout << "Q32: Transpose: trans[j][i]=mat[i][j]\n";
    // Q33: Diagonal sum
    cout << "Q33: Diagonal sum: for(i) sum+=mat[i][i]\n";
    // Q34: Boundary print
    cout << "Q34: Boundary: if(i==0||i==n-1||j==0||j==m-1) print\n";
    // Q35: Search in sorted matrix staircase
    cout << "Q35: Sorted matrix search: start top-right, if >key j-- else i++\n\n";

    // ==================== SECTION 8: STL VECTOR Q36-Q40 ====================
    cout << "--- SECTION 8: STL VECTOR ---\n";
    vector<int> v={5,1,4,2};
    // Q36: Sort vector
    sort(v.begin(), v.end());
    cout << "Q36: Sorted vector: "; for(int x:v) cout<<x<<" "; cout<<"\n";
    // Q37: Reverse vector
    reverse(v.begin(), v.end());
    cout << "Q37: Reversed vector: "; for(int x:v) cout<<x<<" "; cout<<"\n";
    // Q38: Max in vector
    cout << "Q38: Max in vector: *max_element(v.begin(), v.end()) = " << *max_element(v.begin(), v.end()) << "\n";
    // Q39: Sum
    int vsum=0; for(int x:v) vsum+=x;
    cout << "Q39: Sum vector="<<vsum<<"\n";
    // Q40: 2D vector
    cout << "Q40: 2D vector: vector<vector<int>> mat(R, vector<int>(C))\n\n";

    // ==================== SECTION 9: TRICKY Q41-Q45 ====================
    cout << "--- SECTION 9: TRICKY ---\n";
    // Q41: Missing number 0 to n, sum method
    cout << "Q41: Missing number in 0..n: expected=n*(n+1)/2, missing=expected-actualSum\n";
    // Q42: Duplicate number
    cout << "Q42: Find duplicate: sort and check arr[i]==arr[i+1] or map\n";
    // Q43: Intersection of two arrays
    cout << "Q43: Intersection: sort both + two pointers or use set\n";
    // Q44: Union
    cout << "Q44: Union: set of all elements from both\n";
    // Q45: Leaders in array (element greater than all right side)
    cout << "Q45: Leaders: traverse from right, track maxRight\n";
    int arrL[]={16,17,4,3,5,2}; int nL=6; int maxR=INT_MIN;
    cout << "Leaders in {16,17,4,3,5,2}: ";
    for(int i=nL-1;i>=0;i--){ if(arrL[i]>=maxR){ cout<<arrL[i]<<" "; maxR=arrL[i]; } }
    cout << "\n\n";

    // ==================== SECTION 10: HARD LEETCODE Q46-Q50 ====================
    cout << "--- SECTION 10: HARD PATTERNS ---\n";
    // Q46: Kadane Max subarray sum
    cout << "Q46: Kadane Max Subarray Sum O(n):\n";
    int arrK[]={-2,1,-3,4,-1,2,1,-5,4};
    int curr=arrK[0], best=arrK[0];
    for(int i=1;i<9;i++){ curr=max(arrK[i], curr+arrK[i]); best=max(best,curr); }
    cout << "Max subarray sum="<<best<<" (for {-2,1,-3,4,-1,2,1,-5,4})\n";

    // Q47: Best time to buy sell stock
    cout << "Q47: Stock Buy Sell: minPrice=arr[0], maxProfit=0, for each profit=arr[i]-minPrice\n";

    // Q48: Majority element (Boyer Moore Voting)
    cout << "Q48: Majority Element (>n/2): Boyer Moore - candidate, count\n";
    cout << " candidate=arr[0], count=1, for(i) if same count++ else count-- if 0 change candidate\n";

    // Q49: Dutch National Flag 0s1s2s
    cout << "Q49: Sort 0s1s2s Dutch Flag: low=0,mid=0,high=n-1 while(mid<=high) if 0 swap low,mid++ low++ if 1 mid++ else swap mid,high--\n";

    // Q50: Spiral Matrix Print
    cout << "Q50: Spiral Matrix: top=0,bottom=n-1,left=0,right=m-1 while(top<=bottom && left<=right) print\n";
    cout << " 1. top row left->right top++\n";
    cout << " 2. right col top->bottom right--\n";
    cout << " 3. bottom row right->left bottom-- if top<=bottom\n";
    cout << " 4. left col bottom->top left++ if left<=right\n";

    cout << "\n================================================================\n";
    cout << "50 INTERVIEW QUESTIONS COMPLETE - YOU ARE ARRAY MASTER!\n";
    cout << "================================================================\n";
    return 0;
}