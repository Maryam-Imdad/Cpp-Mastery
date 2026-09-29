#include <iostream>
using namespace std;
/*

FILE: 07_01_02_Two_Dimensional_Array.cpp
TOPIC: 2D Array / Matrix

PART A: BEGINNER

2D = Array of Arrays. Row x Col ka table.
int mat[2][3] = {{1,2,3},{4,5,6}};
mat[0][0]=1, mat[1][2]=6

PART B: INTERMEDIATE - Loops

Nested loops lagte hain.
for(i=0;i<rows;i++)
  for(j=0;j<cols;j++)
    cin>>mat[i][j];

PART C: ADVANCE - Memory

Row-Major order me store hota hai C++ me.
2x3 matrix memory: 1,2,3,4,5,6 continuous.
mat[i][j] ka address: Base + (i*cols + j)*size

PART D: SCHOLAR - Interview

Q: How to pass 2D to function?
void func(int mat[][3], int rows) - col size batana zaruri hai.
Ya vector<vector<int>> use karo.
*/

int main(){
    cout << "================================================================\n";
    cout << "07_01_02 - 2D ARRAY\n";
    cout << "================================================================\n\n";

    int mat[2][3] = {{1,2,3},{4,5,6}};
    cout << "Matrix 2x3:\n";
    for(int i=0;i<2;i++){ for(int j=0;j<3;j++) cout<<mat[i][j]<<" "; cout<<"\n"; }

    cout << "\nRow-major traversal: ";
    for(int i=0;i<2;i++) for(int j=0;j<3;j++) cout<<mat[i][j]<<" ";
    cout << "\n";

    cout << "mat[1][2]=" << mat[1][2] << "\n";
    cout << "================================================================\n";
    return 0;
}