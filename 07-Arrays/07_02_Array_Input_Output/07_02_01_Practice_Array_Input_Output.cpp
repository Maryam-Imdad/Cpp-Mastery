#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_02_01_PRACTICE - Array Input Output (10 Qs) Detailed\n";
    cout << "================================================================\n\n";

    // ============================================================
    // Q1: Take 5 elements from user and print them
    // Logic: Take n=5, use loop for cin, then loop for cout
    // ============================================================
    cout << "Q1: Take 5 elements from user and print them\n";
    int arr1[5]; // Declare array of size 5
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++){
        cout << "Element " << i << ": ";
        cin >> arr1[i]; // Take input at index i
    }
    cout << "Output: ";
    for(int i = 0; i < 5; i++){
        cout << arr1[i] << " "; // Print element at index i
    }
    cout << "\n\n";

    // ============================================================
    // Q2: Take size n from user, then take n elements
    // Logic: Dynamic size handling with validation
    // ============================================================
    cout << "Q2: Take size n and n elements\n";
    int n;
    cout << "Enter size: ";
    cin >> n; // User will give size
    int arr2[100]; // Max capacity 100
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr2[i]; // Input n elements
    }
    cout << "You entered: ";
    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    cout << "\n\n";

    // ============================================================
    // Q3: Print array in reverse order of input
    // Logic: Input normally, but print from n-1 to 0
    // ============================================================
    cout << "Q3: Print array in reverse order\n";
    int arr3[] = {1, 2, 3, 4, 5}; // Sample array
    cout << "Original: ";
    for(int i = 0; i < 5; i++) cout << arr3[i] << " ";
    cout << "\nReverse: ";
    // Loop from last index to first
    for(int i = 4; i >= 0; i--){
        cout << arr3[i] << " "; // Printing reverse
    }
    cout << "\n\n";

    // ============================================================
    // Q4: Take input and print only even numbers
    // Logic: Check arr[i] % 2 == 0 while printing
    // ============================================================
    cout << "Q4: Print only even numbers from input\n";
    int arr4[] = {1, 2, 3, 4, 5, 6};
    cout << "Array: ";
    for(int i = 0; i < 6; i++) cout << arr4[i] << " ";
    cout << "\nEven numbers: ";
    for(int i = 0; i < 6; i++){
        if(arr4[i] % 2 == 0){ // Condition for even
            cout << arr4[i] << " ";
        }
    }
    cout << "\n\n";

    // ============================================================
    // Q5: Calculate sum using input from user
    // Logic: Take input and simultaneously add to sum variable
    // ============================================================
    cout << "Q5: Sum of array elements (user input)\n";
    int arr5[5];
    int sum = 0; // Initialize sum to 0
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++){
        cin >> arr5[i]; // Input
        sum = sum + arr5[i]; // Add to sum in same loop
    }
    cout << "Sum = " << sum << "\n\n";

    // ============================================================
    // Q6: Find average of user input array
    // Logic: sum / n, use double for decimal
    // ============================================================
    cout << "Q6: Average of array\n";
    int arr6[] = {10, 20, 30, 40, 50};
    int total = 0;
    for(int i = 0; i < 5; i++){
        total = total + arr6[i]; // Calculate sum
    }
    double avg = (double)total / 5; // Cast to double for decimal
    cout << "Average = " << avg << "\n\n";

    // ============================================================
    // Q7: Input array and print index with element
    // Logic: Print like arr[0] = 10, good for debugging
    // ============================================================
    cout << "Q7: Print with index\n";
    int arr7[] = {11, 22, 33};
    for(int i = 0; i < 3; i++){
        cout << "arr[" << i << "] = " << arr7[i] << "\n"; // Index + value
    }
    cout << "\n";

    // ============================================================
    // Q8: Copy user input array to another array
    // Logic: arr2[i] = arr1[i] in loop
    // ============================================================
    cout << "Q8: Copy array to another array\n";
    int original[3] = {5, 10, 15};
    int copied[3]; // New array
    for(int i = 0; i < 3; i++){
        copied[i] = original[i]; // Copying each element
    }
    cout << "Original: ";
    for(int i = 0; i < 3; i++) cout << original[i] << " ";
    cout << "\nCopied: ";
    for(int i = 0; i < 3; i++) cout << copied[i] << " ";
    cout << "\n\n";

    // ============================================================
    // Q9: Input 5 numbers and count positive, negative, zero
    // Logic: Three counters, check >0, <0, ==0
    // ============================================================
    cout << "Q9: Count positive, negative, zero\n";
    int arr9[] = {-1, 0, 2, -3, 5};
    int pos = 0, neg = 0, zero = 0; // Counters
    for(int i = 0; i < 5; i++){
        if(arr9[i] > 0){
            pos++; // Positive count
        }
        else if(arr9[i] < 0){
            neg++; // Negative count
        }
        else{
            zero++; // Zero count
        }
    }
    cout << "Positive = " << pos << ", Negative = " << neg << ", Zero = " << zero << "\n\n";

    // ============================================================
    // Q10: Take two arrays input and print combined
    // Logic: Take arr1 and arr2, then print both
    // ============================================================
    cout << "Q10: Two arrays input and combined print\n";
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    cout << "Array A: ";
    for(int i = 0; i < 3; i++) cout << a[i] << " ";
    cout << "\nArray B: ";
    for(int i = 0; i < 3; i++) cout << b[i] << " ";
    cout << "\nCombined: ";
    for(int i = 0; i < 3; i++) cout << a[i] << " "; // First array
    for(int i = 0; i < 3; i++) cout << b[i] << " "; // Second array
    cout << "\n";

    cout << "\n================================================================\n";
    cout << "All 10 Practice Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}