#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_06_01_PRACTICE - Matrix Operations (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Add two 2x2 matrices
    cout << "Q1: Add 2x2 matrices\n";
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = a[i][j] + b[i][j]; // Add corresponding
        }
    }
    for(int i=0;i<2;i++){for(int j=0;j<2;j++) cout<<c[i][j]<<" "; cout<<"\n";}
    cout<<"\n";

    // Q2: Subtract two matrices
    cout << "Q2: Subtract 2x2\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = a[i][j] - b[i][j]; // Subtract
        }
    }
    for(int i=0;i<2;i++){for(int j=0;j<2;j++) cout<<c[i][j]<<" "; cout<<"\n";}
    cout<<"\n";

    // Q3: Multiply 2x2 matrices
    cout << "Q3: Multiply 2x2\n";
    int mul[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mul[i][j]=0; // Initialize to 0
            for(int k=0;k<2;k++){
                mul[i][j] += a[i][k]*b[k][j]; // Row*Col
            }
        }
    }
    for(int i=0;i<2;i++){for(int j=0;j<2;j++) cout<<mul[i][j]<<" "; cout<<"\n";}
    cout<<"\n";

    // Q4: Sum of all elements in matrix
    cout << "Q4: Sum of all elements 2x3 {1,2,3,4,5,6}\n";
    int mat[2][3]={{1,2,3},{4,5,6}};
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum += mat[i][j]; // Add all
        }
    }
    cout<<"Sum="<<sum<<"\n\n";

    // Q5: Row sum
    cout << "Q5: Row sum\n";
    for(int i=0;i<2;i++){
        int rowSum=0;
        for(int j=0;j<3;j++) rowSum+=mat[i][j];
        cout<<"Row "<<i<<" sum="<<rowSum<<"\n";
    }
    cout<<"\n";

    // Q6: Column sum
    cout << "Q6: Column sum\n";
    for(int j=0;j<3;j++){
        int colSum=0;
        for(int i=0;i<2;i++) colSum+=mat[i][j];
        cout<<"Col "<<j<<" sum="<<colSum<<"\n";
    }
    cout<<"\n";

    // Q7: Scalar multiplication (multiply matrix by 2)
    cout << "Q7: Scalar multiply by 2\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a[i][j] = a[i][j]*2; // Each element *2
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    // Q8: Check if two matrices are equal
    cout << "Q8: Check if two matrices equal\n";
    int x[2][2]={{1,2},{3,4}};
    int y[2][2]={{1,2},{3,4}};
    bool equal=true;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(x[i][j]!=y[i][j]){ equal=false; break; }
        }
    }
    cout<<(equal?"Equal":"Not Equal")<<"\n\n";

    // Q9: Add diagonal elements
    cout << "Q9: Diagonal sum of 3x3\n";
    int dMat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int diag=0;
    for(int i=0;i<3;i++){
        diag += dMat[i][i]; // i==j
    }
    cout<<"Diagonal sum="<<diag<<"\n\n";

    // Q10: Upper triangle sum
    cout << "Q10: Upper triangle sum (i<=j)\n";
    int up=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j>=i){ // Upper triangle condition
                up+=dMat[i][j];
            }
        }
    }
    cout<<"Upper sum="<<up<<"\n";

    cout << "\n================================================================\n";
    return 0;
}