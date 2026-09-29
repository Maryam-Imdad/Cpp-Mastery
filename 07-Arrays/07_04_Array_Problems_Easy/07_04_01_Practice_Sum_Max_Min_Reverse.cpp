#include <iostream>
#include <climits>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_04_01_PRACTICE - Sum Max Min Reverse (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Sum of array
    cout << "Q1: Sum of array\n";
    int arr1[] = {1,2,3,4,5};
    int sum1 = 0;
    for(int i = 0; i < 5; i++){
        sum1 = sum1 + arr1[i]; // Add each element
    }
    cout << "Sum = " << sum1 << "\n\n";

    // Q2: Product of array
    cout << "Q2: Product of array\n";
    int prod = 1; // Start with 1 for product
    for(int i = 0; i < 5; i++){
        prod = prod * arr1[i]; // Multiply each
    }
    cout << "Product = " << prod << "\n\n";

    // Q3: Find Max
    cout << "Q3: Find Max\n";
    int arr3[] = {4,9,2,15,6};
    int mx = arr3[0]; // Assume first is max
    for(int i = 1; i < 5; i++){
        if(arr3[i] > mx){ // If current is bigger
            mx = arr3[i]; // Update max
        }
    }
    cout << "Max = " << mx << "\n\n";

    // Q4: Find Min
    cout << "Q4: Find Min\n";
    int mn = arr3[0]; // Assume first is min
    for(int i = 1; i < 5; i++){
        if(arr3[i] < mn){ // If current is smaller
            mn = arr3[i]; // Update min
        }
    }
    cout << "Min = " << mn << "\n\n";

    // Q5: Reverse print (without changing array)
    cout << "Q5: Reverse print\n";
    cout << "Reverse: ";
    for(int i = 4; i >= 0; i--){ // Loop from end to start
        cout << arr1[i] << " ";
    }
    cout << "\n\n";

    // Q6: Reverse array in-place
    cout << "Q6: Reverse array in-place\n";
    int arr6[] = {1,2,3,4,5};
    int start = 0;
    int end = 4;
    while(start < end){ // Until they meet
        int temp = arr6[start]; // Swap logic
        arr6[start] = arr6[end];
        arr6[end] = temp;
        start++; // Move start forward
        end--; // Move end backward
    }
    cout << "Reversed: ";
    for(int i = 0; i < 5; i++) cout << arr6[i] << " ";
    cout << "\n\n";

    // Q7: Sum of even and odd separately
    cout << "Q7: Sum even and odd separately\n";
    int eSum = 0, oSum = 0;
    for(int i = 0; i < 5; i++){
        if(arr1[i] % 2 == 0){
            eSum += arr1[i]; // Even sum
        }
        else{
            oSum += arr1[i]; // Odd sum
        }
    }
    cout << "Even Sum=" << eSum << " Odd Sum=" << oSum << "\n\n";

    // Q8: Difference of max and min
    cout << "Q8: Difference Max-Min\n";
    int diff = mx - mn; // Using Q3,Q4 results
    cout << "Diff = " << diff << "\n\n";

    // Q9: Average
    cout << "Q9: Average\n";
    double avg = (double)sum1 / 5; // Cast to double
    cout << "Avg = " << avg << "\n\n";

    // Q10: Check if array is reversed sorted
    cout << "Q10: Count elements greater than average\n";
    int cnt = 0;
    for(int i = 0; i < 5; i++){
        if(arr1[i] > avg){ // Compare with avg
            cnt++;
        }
    }
    cout << "Count > avg = " << cnt << "\n";

    cout << "\n================================================================\n";
    return 0;
}