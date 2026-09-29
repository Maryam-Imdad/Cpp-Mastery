#include <iostream>
#include <climits>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_04_03_PRACTICE - Second Largest & Counting (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Second Largest
    cout << "Q1: Second Largest of {12,35,1,10,34,1}\n";
    int arr1[] = {12,35,1,10,34,1};
    int n1=6;
    int first=INT_MIN, second=INT_MIN;
    for(int i=0;i<n1;i++){
        if(arr1[i] > first){
            second = first; // Old first becomes second
            first = arr1[i]; // New first
        }
        else if(arr1[i] > second && arr1[i]!= first){
            second = arr1[i];
        }
    }
    cout << "Second Largest = " << second << "\n\n";

    // Q2: Second Smallest
    cout << "Q2: Second Smallest\n";
    int arr2[] = {5,3,1,2,4};
    int fMin=INT_MAX, sMin=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr2[i] < fMin){
            sMin = fMin;
            fMin = arr2[i];
        }
        else if(arr2[i] < sMin && arr2[i]!= fMin){
            sMin = arr2[i];
        }
    }
    cout << "Second Smallest = " << sMin << "\n\n";

    // Q3: Count even numbers
    cout << "Q3: Count even numbers\n";
    int cntEven=0;
    for(int i=0;i<n1;i++){
        if(arr1[i] % 2 == 0) cntEven++; // Even check
    }
    cout << "Even count = " << cntEven << "\n\n";

    // Q4: Count occurrences of 1
    cout << "Q4: Count occurrences of 1\n";
    int target=1, cnt=0;
    for(int i=0;i<n1;i++){
        if(arr1[i]==target) cnt++; // Count matches
    }
    cout << "Occurrence of 1 = " << cnt << "\n\n";

    // Q5: Count positive, negative, zero
    cout << "Q5: Count pos, neg, zero in {-1,0,2,-3,0,5}\n";
    int arr5[] = {-1,0,2,-3,0,5};
    int pos=0,neg=0,zero=0;
    for(int i=0;i<6;i++){
        if(arr5[i]>0) pos++;
        else if(arr5[i]<0) neg++;
        else zero++;
    }
    cout << "Pos="<<pos<<" Neg="<<neg<<" Zero="<<zero<<"\n\n";

    // Q6: Frequency of each distinct element
    cout << "Q6: Frequency of each element\n";
    int arr6[] = {1,2,2,3,1};
    bool visited[5] = {false};
    for(int i=0;i<5;i++){
        if(visited[i]) continue; // Skip counted
        int c=1;
        for(int j=i+1;j<5;j++){
            if(arr6[i]==arr6[j]){
                c++;
                visited[j]=true; // Mark as visited
            }
        }
        cout << arr6[i] << " appears " << c << " times\n";
    }
    cout << "\n";

    // Q7: Count elements > 10
    cout << "Q7: Count > 10\n";
    int cntG=0;
    for(int i=0;i<n1;i++){
        if(arr1[i]>10) cntG++;
    }
    cout << "Count >10 = " << cntG << "\n\n";

    // Q8: Largest and smallest difference
    cout << "Q8: Max and Second Max difference\n";
    cout << "First="<<first<<" Second="<<second<<" Diff="<<first-second<<"\n\n";

    // Q9: Check if array has duplicate
    cout << "Q9: Has duplicate?\n";
    bool dup=false;
    for(int i=0;i<n1;i++){
        for(int j=i+1;j<n1;j++){
            if(arr1[i]==arr1[j]) dup=true;
        }
    }
    cout << (dup?"Yes duplicate exists":"No duplicate") << "\n\n";

    // Q10: Count distinct elements
    cout << "Q10: Count distinct elements\n";
    int distinct=0;
    for(int i=0;i<n1;i++){
        bool isDistinct=true;
        for(int j=0;j<i;j++){
            if(arr1[i]==arr1[j]){
                isDistinct=false;
                break;
            }
        }
        if(isDistinct) distinct++;
    }
    cout << "Distinct count = " << distinct << "\n";

    cout << "\n================================================================\n";
    return 0;
}