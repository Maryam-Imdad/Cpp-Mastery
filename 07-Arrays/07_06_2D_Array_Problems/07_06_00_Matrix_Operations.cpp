#include <iostream>
using namespace std;
/*

FILE: 07_06_00_Matrix_Operations.cpp
TOPIC: Matrix Addition, Subtraction, Multiplication


PART A: BEGINNER - What are Matrix Operations?

Matrix is 2D array. Operations need same size (except multiplication).

Addition: c[i][j] = a[i][j] + b[i][j] -> both must be MxN
Subtraction: c[i][j] = a[i][j] - b[i][j]
Multiplication: (M x N) * (N x P) = (M x P)
c[i][j] = sum(a[i][k] * b[k][j]) for k=0 to N-1

PART B: INTERMEDIATE - Logic

Addition:
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      c[i][j]=a[i][j]+b[i][j];

Multiplication:
  for(i=0;i<r1;i++)
    for(j=0;j<c2;j++){
      c[i][j]=0;
      for(k=0;k<c1;k++)
        c[i][j]+=a[i][k]*b[k][j];
    }

PART C: ADVANCE - Conditions & Complexity

Add/Sub: row and col must match. Time O(M*N)
Multiply: col of A == row of B. Time O(M*N*P) -> O(n^3) for square
If not matching, cannot operate.

PART D: SCHOLAR - Interview

Q: Multiply without 3rd loop? No, need k loop.
Q: Time complexity of matrix multiplication?
Ans: O(n^3) naive, O(n^2.81) Strassen (advanced).
Q: Can we add MxN + PxQ? No.
*/

int main(){
    cout << "================================================================\n";
    cout << "07_06_00 - MATRIX OPERATIONS\n";
    cout << "================================================================\n\n";

    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int c[2][2];

    // Addition
    cout << "Addition:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    // Multiplication
    cout << "\nMultiplication:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=0;
            for(int k=0;k<2;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n================================================================\n";
    return 0;
}