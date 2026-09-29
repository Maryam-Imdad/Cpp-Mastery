#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "BREAK & CONTINUE - 10 PRACTICAL QUESTIONS (Auto-Running)\n";
    cout << "================================================================\n\n";

    // Q1 BEGINNER
    cout << "Q1 [Beginner]: Skip number 5 from 1-10 using continue\nSolution: ";
    for(int i=1; i<=10; i++){ if(i==5) continue; cout << i << " "; }
    cout << "\n\n";

    // Q2 BEGINNER
    cout << "Q2 [Beginner]: Stop loop at 6 using break\nQuestion: Print 1-10 but stop when i==6\nSolution: ";
    for(int i=1; i<=10; i++){ if(i==6) break; cout << i << " "; }
    cout << "\n\n";

    // Q3 EASY
    cout << "Q3 [Easy]: Search number 40 in array using break\n";
    int arr[]={10,20,30,40,50}; int key=40;
    cout << "Array: 10 20 30 40 50, Key=40\nSolution: ";
    for(int i=0; i<5; i++){
        if(arr[i]==key){ cout << "Found at index " << i << " -> Break saves time"; break; }
    }
    cout << "\n\n";

    // Q4 EASY
    cout << "Q4 [Easy]: Print Even numbers 1-20 using continue as filter\nSolution: ";
    for(int i=1; i<=20; i++){ if(i%2!=0) continue; cout << i << " "; }
    cout << "\n\n";

    // Q5 MEDIUM
    cout << "Q5 [Medium]: Print Odd numbers 1-20 skipping even\nSolution: ";
    for(int i=1; i<=20; i++){ if(i%2==0) continue; cout << i << " "; }
    cout << "\n\n";

    // Q6 MEDIUM
    cout << "Q6 [Medium]: Count positives, skip negatives\n";
    int nums[]={5, -2, 8, -1, 10}; int posCount=0;
    cout << "Array: 5 -2 8 -1 10\nSolution: ";
    for(int i=0; i<5; i++){
        if(nums[i]<0) continue;
        posCount++; cout << nums[i] << " ";
    }
    cout << "-> Positive Count=" << posCount << "\n\n";

    // Q7 MEDIUM - Prime with break
    int pNum=29; bool isPrime=true;
    cout << "Q7 [Medium]: Prime check " << pNum << " using break\n";
    if(pNum<=1) isPrime=false;
    else{ for(int i=2; i*i<=pNum; i++) if(pNum%i==0){ isPrime=false; break; } }
    cout << "Solution: " << pNum << (isPrime? " is Prime\n" : " Not Prime\n\n");

    // Q8 ADVANCE
    cout << "Q8 [Advance]: First number divisible by both 3 and 5 (1-100)\nSolution: ";
    for(int i=1; i<=100; i++){ if(i%3==0 && i%5==0){ cout << i << " -> Found, break"; break; } }
    cout << "\n\n";

    // Q9 ADVANCE
    cout << "Q9 [Advance]: Skip numbers divisible by 3\nQuestion: 1-20 but skip 3,6,9,12...\nSolution: ";
    for(int i=1; i<=20; i++){ if(i%3==0) continue; cout << i << " "; }
    cout << "\n\n";

    // Q10 ADVANCE/INTERVIEW - Nested break
    cout << "Q10 [Advance]: Search in 2D array using break\n";
    int matrix[2][3]={{1,2,3},{4,5,6}}; int search=5; bool found=false;
    cout << "Matrix: [1 2 3] [4 5 6], Search=5\nSolution: ";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if(matrix[i][j]==search){ cout << "Found at R" << i << "C" << j; found=true; break; }
        }
        if(found) break; // Break outer also
    }
    cout << "\n";

    cout << "\n================================================================\n";
    cout << "All 10 Break & Continue Questions Completed!\n";
    cout << "================================================================\n";
    return 0;
}