#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_01_02_PRACTICE - 2D Array (10 Qs) Detailed\n";
    cout << "================================================================\n\n";

    // ============================================================
    // Q1: Declare and print a 2x3 matrix
    // Logic: 2 rows, 3 columns. Use nested loops to print.
    // ============================================================
    cout << "Q1: Declare and print 2x3 matrix\n";
    int mat1[2][3] = {{1,2,3},{4,5,6}}; // Initialize 2x3 matrix

    // Outer loop for rows
    for(int i = 0; i < 2; i++){
        // Inner loop for columns
        for(int j = 0; j < 3; j++){
            cout << mat1[i][j] << " "; // Print element at [i][j]
        }
        cout << "\n"; // New line after each row
    }
    cout << "\n";

    // ============================================================
    // Q2: Sum of all elements in 2D matrix
    // Logic: Traverse every element and add to sum variable.
    // ============================================================
    cout << "Q2: Sum of all elements in 2D matrix\n";
    int sum = 0; // Variable to store sum
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            sum = sum + mat1[i][j]; // Add each element
        }
    }
    cout << "Solution: Sum = " << sum << "\n\n";

    // ============================================================
    // Q3: Row-wise sum
    // Logic: For each row, reset sum=0 and add all cols of that row.
    // ============================================================
    cout << "Q3: Row-wise sum\n";
    for(int i = 0; i < 2; i++){
        int rowSum = 0; // Sum for current row
        for(int j = 0; j < 3; j++){
            rowSum = rowSum + mat1[i][j];
        }
        cout << "Row " << i << " Sum = " << rowSum << "\n";
    }
    cout << "\n";

    // ============================================================
    // Q4: Column-wise sum
    // Logic: For each column, traverse all rows and add.
    // ============================================================
    cout << "Q4: Column-wise sum\n";
    for(int j = 0; j < 3; j++){
        int colSum = 0; // Sum for current column
        for(int i = 0; i < 2; i++){
            colSum = colSum + mat1[i][j];
        }
        cout << "Column " << j << " Sum = " << colSum << "\n";
    }
    cout << "\n";

    // ============================================================
    // Q5: Find maximum element in 2D matrix
    // Logic: Assume first element is max, compare with all.
    // ============================================================
    cout << "Q5: Find maximum in 2D matrix\n";
    int maxVal = mat1[0][0]; // Assume first is max
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(mat1[i][j] > maxVal){
                maxVal = mat1[i][j]; // Update max
            }
        }
    }
    cout << "Solution: Max = " << maxVal << "\n\n";

    // ============================================================
    // Q6: Transpose of matrix (2x3 -> 3x2)
    // Logic: transpose[j][i] = original[i][j]
    // ============================================================
    cout << "Q6: Transpose of 2x3 matrix\n";
    int transpose[3][2]; // Transposed size is 3x2
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            transpose[j][i] = mat1[i][j]; // Swap row and col
        }
    }
    cout << "Transposed Matrix (3x2):\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // ============================================================
    // Q7: Search an element in 2D matrix
    // Logic: Linear search in 2D, check each element.
    // ============================================================
    cout << "Q7: Search element 5 in matrix\n";
    int target = 5;
    bool found = false; // Flag
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(mat1[i][j] == target){
                found = true; // Found
                cout << "Found at position [" << i << "][" << j << "]\n";
            }
        }
    }
    if(found == false){
        cout << "Not Found\n";
    }
    cout << "\n";

    // ============================================================
    // Q8: Diagonal sum of square matrix (3x3)
    // Logic: Sum of elements where i==j (principal diagonal)
    // ============================================================
    cout << "Q8: Diagonal sum of 3x3 matrix\n";
    int mat2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int diagSum = 0;
    for(int i = 0; i < 3; i++){
        diagSum = diagSum + mat2[i][i]; // i==j
    }
    cout << "Solution: Diagonal Sum = " << diagSum << "\n\n";

    // ============================================================
    // Q9: Print boundary elements of 3x3 matrix
    // Logic: Print if i==0 or i==last or j==0 or j==last
    // ============================================================
    cout << "Q9: Boundary elements of 3x3 matrix\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            // Check boundary condition
            if(i == 0 || i == 2 || j == 0 || j == 2){
                cout << mat2[i][j] << " ";
            }
            else{
                cout << " "; // Space for inner element
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // ============================================================
    // Q10: Add two 2x2 matrices
    // Logic: c[i][j] = a[i][j] + b[i][j]
    // ============================================================
    cout << "Q10: Add two 2x2 matrices\n";
    int a[2][2] = {{1,1},{1,1}}; // First matrix
    int b[2][2] = {{2,2},{2,2}}; // Second matrix
    int c[2][2]; // Result matrix

    // Addition logic
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            c[i][j] = a[i][j] + b[i][j]; // Add corresponding elements
        }
    }

    cout << "Result Matrix:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n================================================================\n";
    cout << "All 10 Questions Done!\n";
    cout << "================================================================\n";
    return 0;
}