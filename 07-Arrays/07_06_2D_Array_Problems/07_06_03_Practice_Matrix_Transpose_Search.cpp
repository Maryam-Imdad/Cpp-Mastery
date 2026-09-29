#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "07_06_03_PRACTICE - Transpose & Search (10 Qs)\n";
    cout << "================================================================\n\n";

    // Q1: Transpose of 2x3
    cout << "Q1: Transpose of 2x3\n";
    int mat[2][3]={{1,2,3},{4,5,6}};
    int trans[3][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            trans[j][i]=mat[i][j]; // Row becomes col
        }
    }
    for(int i=0;i<3;i++){for(int j=0;j<2;j++) cout<<trans[i][j]<<" "; cout<<"\n";}
    cout<<"\n";

    // Q2: In-place transpose of square 3x3
    cout << "Q2: In-place transpose of 3x3\n";
    int sq[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Before:\n";
    for(int i=0;i<3;i++){for(int j=0;j<3;j++) cout<<sq[i][j]<<" "; cout<<"\n";}
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){ // Only upper triangle
            int t=sq[i][j];
            sq[i][j]=sq[j][i];
            sq[j][i]=t; // Swap
        }
    }
    cout<<"After transpose:\n";
    for(int i=0;i<3;i++){for(int j=0;j<3;j++) cout<<sq[i][j]<<" "; cout<<"\n";}
    cout<<"\n";

    // Q3: Search element in matrix
    cout << "Q3: Search 6 in 2x3\n";
    int key=6;
    bool f=false;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]==key){
                cout<<"Found at ["<<i<<"]["<<j<<"]\n";
                f=true;
            }
        }
    }
    if(!f) cout<<"Not found\n";
    cout<<"\n";

    // Q4: Find max in 2D
    cout << "Q4: Max in 2D\n";
    int mx=mat[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j]>mx) mx=mat[i][j]; // Update max
        }
    }
    cout<<"Max="<<mx<<"\n\n";

    // Q5: Boundary elements
    cout << "Q5: Boundary of 3x3\n";
    int mat3[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0||i==2||j==0||j==2) cout<<mat3[i][j]<<" "; // Boundary condition
            else cout<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    // Q6: Sum of diagonal
    cout << "Q6: Diagonal sum\n";
    int dSum=0;
    for(int i=0;i<3;i++) dSum+=mat3[i][i]; // i==j
    cout<<"Sum="<<dSum<<"\n\n";

    // Q7: Anti-diagonal sum (i+j == n-1)
    cout << "Q7: Anti-diagonal sum\n";
    int anti=0;
    for(int i=0;i<3;i++){
        anti+=mat3[i][2-i]; // For 3x3, col = 2-i
    }
    cout<<"Anti-diagonal sum="<<anti<<"\n\n";

    // Q8: Search in sorted matrix (row-col sorted) using staircase
    cout << "Q8: Search in sorted matrix {1,4,7,11,2,5,8,12,3,6,9,16,10,13,14,17}\n";
    int sorted[4][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    int k=5;
    int row=0,col=3; // Start from top-right
    bool found=false;
    while(row<4 && col>=0){
        if(sorted[row][col]==k){ found=true; cout<<"Found at "<<row<<","<<col<<"\n"; break; }
        else if(sorted[row][col]>k) col--; // Go left
        else row++; // Go down
    }
    if(!found) cout<<"Not found\n";
    cout<<"\n";

    // Q9: Print only upper triangle
    cout << "Q9: Upper triangle (including diagonal)\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j>=i) cout<<mat3[i][j]<<" "; // Upper condition
            else cout<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    // Q10: Symmetric check (mat == transpose)
    cout << "Q10: Check if symmetric\n";
    int sym[3][3]={{1,2,3},{2,4,5},{3,5,6}};
    bool isSym=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(sym[i][j]!=sym[j][i]){ isSym=false; break; } // Check transpose equality
        }
    }
    cout<<(isSym?"Symmetric":"Not Symmetric")<<"\n";

    cout << "\n================================================================\n";
    return 0;
}