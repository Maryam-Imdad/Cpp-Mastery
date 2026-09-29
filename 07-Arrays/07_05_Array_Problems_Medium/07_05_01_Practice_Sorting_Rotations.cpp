#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_05_01_PRACTICE - Sorting & Rotations (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Bubble Sort
    cout << "Q1: Bubble Sort {5,1,4,2,8}\n";
    int arr1[] = {5,1,4,2,8};
    int n1=5;
    for(int i=0;i<n1-1;i++){ // n-1 passes
        for(int j=0;j<n1-1-i;j++){ // Compare adjacent
            if(arr1[j] > arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    cout << "Sorted: ";
    for(int i=0;i<n1;i++) cout<<arr1[i]<<" ";
    cout << "\n\n";

    // Q2: Check if array is sorted
    cout << "Q2: Check if sorted {1,2,3,4}\n";
    int arr2[] = {1,2,3,4};
    bool isSorted=true;
    for(int i=1;i<4;i++){
        if(arr2[i] < arr2[i-1]){ // If decreasing found
            isSorted=false;
            break;
        }
    }
    cout << (isSorted?"Yes Sorted":"Not Sorted") << "\n\n";

    // Q3: Sort descending
    cout << "Q3: Sort descending\n";
    int arr3[] = {2,8,1,5};
    for(int i=0;i<3;i++){
        for(int j=0;j<3-i;j++){
            if(arr3[j] < arr3[j+1]){ // For descending, flip sign
                int t=arr3[j]; arr3[j]=arr3[j+1]; arr3[j+1]=t;
            }
        }
    }
    for(int i=0;i<4;i++) cout<<arr3[i]<<" ";
    cout << "\n\n";

    // Q4: Left rotate by 1
    cout << "Q4: Left rotate by 1 {1,2,3,4,5}\n";
    int arr4[]={1,2,3,4,5};
    int first=arr4[0]; // Store first
    for(int i=0;i<4;i++){
        arr4[i]=arr4[i+1]; // Shift left
    }
    arr4[4]=first; // Put first at end
    for(int i=0;i<5;i++) cout<<arr4[i]<<" ";
    cout << "\n\n";

    // Q5: Right rotate by 1
    cout << "Q5: Right rotate by 1 {1,2,3,4,5}\n";
    int arr5[]={1,2,3,4,5};
    int last=arr5[4]; // Store last
    for(int i=4;i>0;i--){
        arr5[i]=arr5[i-1]; // Shift right
    }
    arr5[0]=last; // Put last at start
    for(int i=0;i<5;i++) cout<<arr5[i]<<" ";
    cout << "\n\n";

    // Q6: Left rotate by K=2 using reversal
    cout << "Q6: Left rotate by K=2 {1,2,3,4,5}\n";
    int arr6[]={1,2,3,4,5};
    int k=2;
    // Reverse 0 to k-1
    int s=0,e=k-1;
    while(s<e){int t=arr6[s]; arr6[s]=arr6[e]; arr6[e]=t; s++; e--;}
    // Reverse k to n-1
    s=k; e=4;
    while(s<e){int t=arr6[s]; arr6[s]=arr6[e]; arr6[e]=t; s++; e--;}
    // Reverse whole
    s=0; e=4;
    while(s<e){int t=arr6[s]; arr6[s]=arr6[e]; arr6[e]=t; s++; e--;}
    for(int i=0;i<5;i++) cout<<arr6[i]<<" ";
    cout << "\n\n";

    // Q7: Find minimum in rotated sorted array
    cout << "Q7: Min in {4,5,1,2,3}\n";
    int arr7[]={4,5,1,2,3};
    int mn=arr7[0];
    for(int i=1;i<5;i++) if(arr7[i]<mn) mn=arr7[i];
    cout<<"Min="<<mn<<"\n\n";

    // Q8: Sort 0s and 1s {0,1,0,1,1,0}
    cout << "Q8: Sort 0s and 1s\n";
    int arr8[]={0,1,0,1,1,0};
    int l=0,r=5;
    while(l<r){
        if(arr8[l]==0) l++; // 0 on left is correct
        else if(arr8[r]==1) r--; // 1 on right is correct
        else{
            // Swap wrong placed
            int t=arr8[l]; arr8[l]=arr8[r]; arr8[r]=t;
            l++; r--;
        }
    }
    for(int i=0;i<6;i++) cout<<arr8[i]<<" ";
    cout << "\n\n";

    // Q9: Move all zeros to end
    cout << "Q9: Move zeros to end {0,1,0,3,12}\n";
    int arr9[]={0,1,0,3,12};
    int pos=0;
    for(int i=0;i<5;i++){
        if(arr9[i]!=0){
            arr9[pos]=arr9[i]; // Non-zero to front
            pos++;
        }
    }
    while(pos<5){ // Fill rest with zeros
        arr9[pos]=0;
        pos++;
    }
    for(int i=0;i<5;i++) cout<<arr9[i]<<" ";
    cout << "\n\n";

    // Q10: Check if array is sorted and rotated
    cout << "Q10: Is {3,4,5,1,2} sorted and rotated?\n";
    int arr10[]={3,4,5,1,2};
    int breaks=0;
    for(int i=0;i<4;i++){
        if(arr10[i]>arr10[i+1]) breaks++; // Count decreasing points
    }
    if(arr10[4]>arr10[0]) breaks++; // Check last with first
    cout<<(breaks<=1?"Yes":"No")<<"\n";

    cout << "\n================================================================\n";
    return 0;
}