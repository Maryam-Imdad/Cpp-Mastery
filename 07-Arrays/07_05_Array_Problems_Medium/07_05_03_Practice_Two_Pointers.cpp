#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_05_03_PRACTICE - Two Pointers (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Reverse using two pointers
    cout << "Q1: Reverse {1,2,3,4,5} using two pointers\n";
    int arr1[]={1,2,3,4,5};
    int l=0,r=4;
    while(l<r){
        int temp=arr1[l]; // Swap
        arr1[l]=arr1[r];
        arr1[r]=temp;
        l++; r--; // Move inward
    }
    for(int i=0;i<5;i++) cout<<arr1[i]<<" ";
    cout << "\n\n";

    // Q2: Check palindrome
    cout << "Q2: Check palindrome {1,2,2,1}\n";
    int arr2[]={1,2,2,1};
    l=0; r=3;
    bool pal=true;
    while(l<r){
        if(arr2[l]!=arr2[r]){ pal=false; break; }
        l++; r--;
    }
    cout<<(pal?"Palindrome":"Not Palindrome")<<"\n\n";

    // Q3: Pair sum = 10 in sorted {1,2,4,5,7,8}
    cout << "Q3: Pair sum 10 in sorted array\n";
    int arr3[]={1,2,4,5,7,8};
    int target=10;
    l=0; r=5;
    bool found=false;
    while(l<r){
        int sum=arr3[l]+arr3[r];
        if(sum==target){
            cout<<"Pair: "<<arr3[l]<<" + "<<arr3[r]<<" = "<<target<<"\n";
            found=true; break;
        }
        else if(sum<target) l++; // Need larger sum
        else r--; // Need smaller sum
    }
    if(!found) cout<<"No pair\n";
    cout<<"\n";

    // Q4: Remove duplicates from sorted {1,1,2,2,3}
    cout << "Q4: Remove duplicates {1,1,2,2,3}\n";
    int arr4[]={1,1,2,2,3};
    int n4=5;
    int idx=0; // Slow pointer
    for(int j=1;j<n4;j++){ // Fast pointer
        if(arr4[j]!=arr4[idx]){
            idx++;
            arr4[idx]=arr4[j]; // Copy unique
        }
    }
    for(int i=0;i<=idx;i++) cout<<arr4[i]<<" ";
    cout << "\n\n";

    // Q5: Move all negatives to left
    cout << "Q5: Move negatives left {-1,2,-3,4,-5}\n";
    int arr5[]={-1,2,-3,4,-5};
    l=0; r=4;
    while(l<r){
        if(arr5[l]<0) l++; // Negative already left
        else if(arr5[r]>=0) r--; // Positive already right
        else{
            int t=arr5[l]; arr5[l]=arr5[r]; arr5[r]=t; // Swap
            l++; r--;
        }
    }
    for(int i=0;i<5;i++) cout<<arr5[i]<<" ";
    cout<<"\n\n";

    // Q6: Sort 0s and 1s using two pointers
    cout << "Q6: Sort 0s 1s {0,1,0,1,0}\n";
    int arr6[]={0,1,0,1,0};
    l=0; r=4;
    while(l<r){
        if(arr6[l]==0) l++;
        else if(arr6[r]==1) r--;
        else{ int t=arr6[l]; arr6[l]=arr6[r]; arr6[r]=t; }
    }
    for(int i=0;i<5;i++) cout<<arr6[i]<<" ";
    cout<<"\n\n";

    // Q7: Find closest pair sum to target
    cout << "Q7: Pair sum closest to 10 in {1,3,5,7,9}\n";
    int arr7[]={1,3,5,7,9};
    int t2=10;
    l=0; r=4;
    int closestL=0,closestR=4;
    int minDiff=100000;
    while(l<r){
        int diff=(arr7[l]+arr7[r])-t2;
        if(diff<0) diff=-diff; // Absolute
        if(diff<minDiff){
            minDiff=diff;
            closestL=l; closestR=r;
        }
        if(arr7[l]+arr7[r] < t2) l++;
        else r--;
    }
    cout<<"Closest: "<<arr7[closestL]<<" + "<<arr7[closestR]<<"\n\n";

    // Q8: Two sum in unsorted? Sort first
    cout << "Q8: Two sum brute vs two pointer note\n";
    cout << "Brute O(n^2) for unsorted, Two-pointer O(n log n) after sort O(n)\n\n";

    // Q9: Check if pair exists with difference k
    cout << "Q9: Pair with diff 2 in {1,3,5,7}\n";
    int arr9[]={1,3,5,7};
    int diffK=2;
    l=0; r=1;
    bool f=false;
    while(r<4){
        int d=arr9[r]-arr9[l];
        if(d==diffK){ cout<<arr9[l]<<" and "<<arr9[r]<<"\n"; f=true; break; }
        else if(d<diffK) r++;
        else l++;
        if(l==r) r++;
    }
    if(!f) cout<<"Not found\n";
    cout<<"\n";

    // Q10: Merge two sorted arrays concept using two pointers
    cout << "Q10: Merge {1,3,5} and {2,4,6}\n";
    int a[]={1,3,5}, b[]={2,4,6};
    int i=0,j=0;
    cout<<"Merged: ";
    while(i<3 && j<3){
        if(a[i] < b[j]){ cout<<a[i]<<" "; i++; }
        else{ cout<<b[j]<<" "; j++; }
    }
    while(i<3){ cout<<a[i]<<" "; i++; }
    while(j<3){ cout<<b[j]<<" "; j++; }
    cout<<"\n";

    cout << "\n================================================================\n";
    return 0;
}