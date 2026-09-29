#include <iostream>
using namespace std;
/*

FILE: 07_06_02_Matrix_Transpose_Search.cpp
TOPIC: Transpose, Search, Boundary, Spiral


PART A: BEGINNER - Definitions

Transpose: Swap rows with cols. trans[j][i]=mat[i][j]
2x3 -> {{1,2,3},{4,5,6}} transpose is 3x2 {{1,4},{2,5},{3,6}}

Search in 2D: Linear search O(M*N) check every element.
Sorted Matrix Search: If row and col sorted, start from top-right.

Boundary Traversal: Print only outer layer i==0 or i==n-1 or j==0 or j==m-1

PART B: INTERMEDIATE - Logic

Transpose:
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      trans[j][i]=mat[i][j];

In-place transpose for square matrix:
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      swap(mat[i][j],mat[j][i]);

Search:
  bool found=false;
  for(i) for(j) if(mat[i][j]==key) found=true

PART C: ADVANCE - Optimized Search

If matrix is row-wise and col-wise sorted:
  Start from (0, m-1) top-right
  if(mat[i][j]==key) found
  else if(mat[i][j]>key) j-- (go left)
  else i++ (go down)
Time O(n+m) vs O(n*m)

PART D: SCHOLAR - Interview

Q: Transpose without extra space?
Ans: For square only, swap upper triangle. For MxN, need extra space.

Q: Print spiral? Use 4 pointers top,bottom,left,right.

Q: Search in sorted matrix?
Ans: Use staircase search O(n+m) or binary search O(n log m)
*/

int main(){
    cout << "================================================================\n";
    cout << "07_06_02 - MATRIX TRANSPOSE & SEARCH\n";
    cout << "================================================================\n\n";

    int mat[2][3]={{1,2,3},{4,5,6}};
    int trans[3][2];
    cout << "Original 2x3:\n";
    for(int i=0;i<2;i++){for(int j=0;j<3;j++) cout<<mat[i][j]<<" "; cout<<"\n";}

    // Transpose
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            trans[j][i]=mat[i][j];
        }
    }
    cout << "\nTranspose 3x2:\n";
    for(int i=0;i<3;i++){for(int j=0;j<2;j++) cout<<trans[i][j]<<" "; cout<<"\n";}

    // Search
    int key=5;
    bool found=false;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==key){ found=true; cout<<"\n"<<key<<" found at ["<<i<<"]["<<j<<"]\n"; }
        }
    }

    cout << "================================================================\n";
    return 0;
}