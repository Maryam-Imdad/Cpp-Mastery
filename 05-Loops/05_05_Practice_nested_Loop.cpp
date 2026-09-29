#include <iostream>
using namespace std;

int main(){
    cout << "================================================================\n";
    cout << "NESTED LOOP - 10 PRACTICAL QUESTIONS (Auto-Running)\n";
    cout << "================================================================\n\n";

    // Q1 BEGINNER
    cout << "Q1 [Beginner]: 3x4 Star Square Pattern\nSolution:\n";
    for(int i=1; i<=3; i++){ for(int j=1; j<=4; j++) cout << "* "; cout << endl; }
    cout << "\n";

    // Q2 BEGINNER
    cout << "Q2 [Beginner]: Right Triangle Pattern (j<=i)\nSolution:\n";
    for(int i=1; i<=5; i++){ for(int j=1; j<=i; j++) cout << "* "; cout << endl; }
    cout << "\n";

    // Q3 EASY
    cout << "Q3 [Easy]: Number Triangle 1 to i\nSolution:\n";
    for(int i=1; i<=5; i++){ for(int j=1; j<=i; j++) cout << j << " "; cout << endl; }
    cout << "\n";

    // Q4 EASY
    cout << "Q4 [Easy]: Same Number Triangle (111, 222)\nSolution:\n";
    for(int i=1; i<=5; i++){ for(int j=1; j<=i; j++) cout << i << " "; cout << endl; }
    cout << "\n";

    // Q5 MEDIUM
    cout << "Q5 [Medium]: Inverted Right Triangle\nSolution:\n";
    for(int i=5; i>=1; i--){ for(int j=1; j<=i; j++) cout << "* "; cout << endl; }
    cout << "\n";

    // Q6 MEDIUM - Multiplication Grid
    cout << "Q6 [Medium]: Multiplication Grid 1-3 x 1-3\nSolution:\n";
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){ cout << i*j << "\t"; }
        cout << endl;
    }
    cout << "\n";

    // Q7 MEDIUM - Count total pairs
    cout << "Q7 [Medium]: Total Iterations Count\nQuestion: Outer=3, Inner=4, Total=?\nSolution:\n";
    int total=0;
    for(int i=1; i<=3; i++){ for(int j=1; j<=4; j++){ total++; cout << "(" << i << "," << j << ") "; } cout << endl; }
    cout << "Total Iterations = " << total << " (3*4)\n\n";

    // Q8 ADVANCE - Character Pattern
    cout << "Q8 [Advance]: Alphabet Triangle A to E\nSolution:\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++) cout << char('A'+j-1) << " ";
        cout << endl;
    }
    cout << "\n";

    // Q9 ADVANCE - 2D Array traversal
    cout << "Q9 [Advance]: 2D Array Print 2x3\nSolution:\n";
    int mat[2][3]={{1,2,3},{4,5,6}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
    cout << "\n";

    // Q10 ADVANCE/INTERVIEW - Hollow Square Pattern
    cout << "Q10 [Advance]: Hollow Square 5x5\nQuestion: Border *, Inside space\nSolution:\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(i==1 || i==5 || j==1 || j==5) cout << "* ";
            else cout << " ";
        }
        cout << endl;
    }

    cout << "\n================================================================\n";
    cout << "All 10 Nested Loop Questions Completed!\n";
    cout << "05-Loops Chapter FINISHED!\n";
    cout << "================================================================\n";
    return 0;
}