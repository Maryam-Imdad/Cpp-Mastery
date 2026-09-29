#include <iostream>
using namespace std;
/*

FILE: 07_08_00_Mini_Project_TicTacToe_Array.cpp
TOPIC: FINAL MINI PROJECT - Apply All 07 Concepts


PART A: BEGINNER - What is this Project?

TicTacToe game using 2D array (3x3). Two players X and O.
Players enter position (row,col). We check win/draw.

Concepts Used:
- 2D Array for board [3][3]
- Input Output loops
- Functions for clean code
- Win checking (8 conditions)
- Validation (position already filled)

PART B: INTERMEDIATE - Game Logic

Board: 3x3 char array init with ' ' or '1'-'9'

1. Display Board: Print with | and --- lines
2. Check Win:
   - 3 rows: board[i][0]==board[i][1]==board[i][2]
   - 3 cols: board[0][j]==board[1][j]==board[2][j]
   - 2 diagonals: [0][0]==[1][1]==[2][2] and [0][2]==[1][1]==[2][0]
3. Check Draw: If all cells filled and no win.

PART C: ADVANCE - Edge Cases & Validation

- Invalid position: row<0 or row>2 or col<0 or col>2
- Cell already occupied: board[row][col]!=' '
- Switch player after valid move
- Use vector? We use simple array for this project.

Time O(1) because board fixed 3x3, but win check O(n) for NxN general.

PART D: SCHOLAR - Interview Extension

Q: Make it for NxN?
Ans: Use loops for win check, not hardcode 8 conditions.
Q: Use AI? Minimax algorithm for unbeatable AI.
Q: Check win efficiently? After each move, only check row, col, diag of that move, not whole board.
*/

// Function to display board - line by line explained
void displayBoard(char board[3][3]){
    // Loop through rows
    cout << "\n";
    for(int i=0;i<3;i++){
        // Loop through cols
        for(int j=0;j<3;j++){
            cout << " " << board[i][j] << " "; // Print cell
            if(j<2) cout << "|"; // Separator between cols
        }
        cout << "\n";
        if(i<2) cout << "---+---+---\n"; // Separator between rows
    }
    cout << "\n";
}

// Function to check win
bool checkWin(char board[3][3], char player){
    // Check rows: if all 3 in a row same as player
    for(int i=0;i<3;i++){
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player){
            return true; // Row win
        }
    }
    // Check cols: if all 3 in a col same as player
    for(int j=0;j<3;j++){
        if(board[0][j]==player && board[1][j]==player && board[2][j]==player){
            return true; // Col win
        }
    }
    // Check diagonals
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player){
        return true; // Main diagonal
    }
    if(board[0][2]==player && board[1][1]==player && board[2][0]==player){
        return true; // Anti-diagonal
    }
    return false; // No win
}

// Check draw - if all cells filled
bool checkDraw(char board[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==' '){ // If any empty cell found
                return false; // Not draw yet
            }
        }
    }
    return true; // All filled, draw
}

int main(){
    cout << "================================================================\n";
    cout << "07_08_00 - TIC TAC TOE MINI PROJECT\n";
    cout << "================================================================\n\n";

    char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}; // Empty board
    char currentPlayer = 'X'; // X starts
    int row, col;

    cout << "TicTacToe Game! Player X and Player O\n";
    cout << "Enter row and col (0-2) eg: 1 1 for center\n\n";

    while(true){ // Infinite game loop
        displayBoard(board); // Show board
        cout << "Player " << currentPlayer << " turn. Enter row col: ";
        cin >> row >> col; // Take position

        // Validation 1: Check bounds
        if(row<0 || row>2 || col<0 || col>2){
            cout << "Invalid! Row Col must be 0-2. Try again.\n";
            continue; // Skip rest, ask again
        }
        // Validation 2: Check if cell occupied
        if(board[row][col]!=' '){
            cout << "Cell already occupied! Try again.\n";
            continue;
        }

        // Place the mark
        board[row][col] = currentPlayer; // Assign X or O

        // Check win after move
        if(checkWin(board, currentPlayer)){
            displayBoard(board);
            cout << "Player " << currentPlayer << " WINS!\n";
            break; // End game
        }

        // Check draw
        if(checkDraw(board)){
            displayBoard(board);
            cout << "It's a DRAW!\n";
            break; // End game
        }

        // Switch player
        if(currentPlayer=='X'){
            currentPlayer='O'; // Switch to O
        }
        else{
            currentPlayer='X'; // Switch to X
        }
    }

    cout << "\n================================================================\n";
    cout << "Game Over - Project Complete!\n";
    cout << "================================================================\n";
    return 0;
}