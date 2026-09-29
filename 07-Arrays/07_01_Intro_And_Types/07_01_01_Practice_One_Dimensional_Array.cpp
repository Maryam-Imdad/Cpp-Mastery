#include <iostream>
using namespace std;
int main(){
    cout << "07_01_01_PRACTICE - 1D Array (10 Qs)\n\n";

    // Q1-Q10 ka code jo maine pehle diya tha
    // Q1: Declare [1,2,3,4,5] and print
    int arr1[] = {1,2,3,4,5};
    cout << "Q1: "; for(int i=0;i<5;i++) cout<<arr1[i]<<" "; cout<<"\n";
    // Q2: Sum
    int sum=0; for(int i=0;i<5;i++) sum+=arr1[i]; cout<<"Q2 Sum="<<sum<<"\n";
    // Q3: Max
    int arr2[]={3,9,2,15,7}; int mx=arr2[0]; for(int i=1;i<5;i++) if(arr2[i]>mx) mx=arr2[i]; cout<<"Q3 Max="<<mx<<"\n";
    // Q4: Min
    int mn=arr2[0]; for(int i=1;i<5;i++) if(arr2[i]<mn) mn=arr2[i]; cout<<"Q4 Min="<<mn<<"\n";
    // Q5: Reverse
    cout<<"Q5 Reverse: "; for(int i=4;i>=0;i--) cout<<arr1[i]<<" "; cout<<"\n";
    // Q6: Avg
    cout<<"Q6 Avg="<<(double)sum/5<<"\n";
    // Q7: Search 15
    int t=15, idx=-1; for(int i=0;i<5;i++) if(arr2[i]==t) idx=i; cout<<"Q7 Search 15 at "<<idx<<"\n";
    // Q8: Even/Odd count
    int e=0,o=0; for(int i=0;i<5;i++) arr1[i]%2==0?e++:o++; cout<<"Q8 Even="<<e<<" Odd="<<o<<"\n";
    // Q9: Copy
    int cp[5]; for(int i=0;i<5;i++) cp[i]=arr1[i]; cout<<"Q9 Copied\n";
    // Q10: Is Sorted?
    bool s=true; for(int i=1;i<5;i++) if(arr1[i]<arr1[i-1]) s=false; cout<<"Q10 Sorted? "<<(s?"Yes":"No")<<"\n";
    return 0;
}