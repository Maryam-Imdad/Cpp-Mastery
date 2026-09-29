#include <iostream>
#include <string>
using namespace std;

// Q1: GCD
int gcdRec(int a, int b){
    if(b==0) return a;
    return gcdRec(b, a%b);
}

// Q2: LCM using GCD
int lcmRec(int a, int b){
    return (a * b) / gcdRec(a,b);
}

// Q3: Reverse String
string reverseRec(string s){
    if(s.length() <= 1) return s;
    return s.back() + reverseRec(s.substr(0, s.length()-1));
}

// Q4: Palindrome
bool isPalRec(string s, int start, int end){
    if(start >= end) return true;
    if(s[start]!= s[end]) return false;
    return isPalRec(s, start+1, end-1);
}

// Q5: Fast Power
long long fastPow(int base, int exp){
    if(exp==0) return 1;
    long long half = fastPow(base, exp/2);
    if(exp%2==0) return half*half;
    else return base*half*half;
}

// Q6: Count vowels in string recursion
int countVowelsRec(string s, int n){
    if(n==0) return 0;
    char c = tolower(s[n-1]);
    int isVowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')? 1 : 0;
    return isVowel + countVowelsRec(s, n-1);
}

// Q7: Sum array recursion
int sumArrRec(int arr[], int n){
    if(n==0) return 0;
    return arr[n-1] + sumArrRec(arr, n-1);
}

// Q8: Max in array recursion
int maxArrRec(int arr[], int n){
    if(n==1) return arr[0];
    int maxRest = maxArrRec(arr, n-1);
    if(arr[n-1] > maxRest) return arr[n-1];
    else return maxRest;
}

// Q9: Check sorted array recursion
bool isSortedRec(int arr[], int n){
    if(n==1) return true;
    if(arr[n-1] < arr[n-2]) return false;
    return isSortedRec(arr, n-1);
}

// Q10: Print digits of number recursion
void printDigitsRec(int n){
    if(n==0) return;
    printDigitsRec(n/10);
    cout << n%10 << " ";
}

int main(){
    cout << "================================================================\n";
    cout << "06_05_03_PRACTICE - Advanced Recursion (10 Qs)\n";
    cout << "================================================================\n\n";

    cout << "Q1: gcdRec(54,24)\n";
    cout << "Solution: " << gcdRec(54,24) << "\n\n";

    cout << "Q2: lcmRec(4,6)\n";
    cout << "Solution: " << lcmRec(4,6) << "\n\n";

    cout << "Q3: reverseRec('cpp')\n";
    cout << "Solution: " << reverseRec("cpp") << "\n\n";

    cout << "Q4: isPalRec('racecar')\n";
    string s = "racecar";
    cout << "Solution: " << (isPalRec(s,0,s.length()-1)? "Palindrome" : "Not") << "\n\n";

    cout << "Q5: fastPow(3,5) = 243\n";
    cout << "Solution: " << fastPow(3,5) << "\n\n";

    cout << "Q6: countVowelsRec('recursion')\n";
    string s2 = "recursion";
    cout << "Solution: " << countVowelsRec(s2, s2.length()) << "\n\n";

    cout << "Q7: sumArrRec [2,4,6,8]\n";
    int arr1[] = {2,4,6,8};
    cout << "Solution: " << sumArrRec(arr1,4) << "\n\n";

    cout << "Q8: maxArrRec [3,9,2,15,7]\n";
    int arr2[] = {3,9,2,15,7};
    cout << "Solution: " << maxArrRec(arr2,5) << "\n\n";

    cout << "Q9: isSortedRec [1,2,3,4] vs [1,3,2]\n";
    int arr3[] = {1,2,3,4};
    int arr4[] = {1,3,2};
    cout << "Solution: " << (isSortedRec(arr3,4)? "Sorted" : "Not") << ", " << (isSortedRec(arr4,3)? "Sorted" : "Not") << "\n\n";

    cout << "Q10: printDigitsRec(12345)\n";
    cout << "Solution: ";
    printDigitsRec(12345);
    cout << "\n\n";

    cout << "================================================================\n";
    cout << "All 10 Advanced Recursion Done! 06_05 COMPLETE! \n";
    cout << "================================================================\n";
    return 0;
}