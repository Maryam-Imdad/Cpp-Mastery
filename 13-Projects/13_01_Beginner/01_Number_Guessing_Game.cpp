#include <bits/stdc++.h>
using namespace std;

/*
    13-Projects / 13_01_Beginner / 01_Number_Guessing_Game.cpp

    Concepts Used:
    - rand() & srand() -> for random number generation
    - time(0) -> seed for randomness
    - while loop, if-else, break
    - count attempts

    Game Logic:
    1. Computer thinks of a number 1 to 100
    2. User guesses
    3. Computer says Too High / Too Low / Correct
*/

int main() {
    // Seed random number generator with current time
    // If we don't do this, rand() will give same number every time
    srand(time(0));

    int secretNumber = rand() % 100 + 1; // 1 to 100
    int guess;
    int attempts = 0;
    int maxAttempts = 7; // Limit attempts for fun

    cout << "====== NUMBER GUESSING GAME ======" << endl;
    cout << "I have chosen a number between 1 and 100" << endl;
    cout << "You have " << maxAttempts << " attempts to guess it!" << endl;
    cout << "==================================" << endl;

    while (attempts < maxAttempts) {
        cout << "\nAttempt " << attempts + 1 << "/" << maxAttempts << " - Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "\n🎉 CONGRATULATIONS! You guessed it in " << attempts << " attempts!" << endl;
            cout << "Secret number was: " << secretNumber << endl;
            
            // Performance rating
            if(attempts <= 3) cout << "Rating: GENIUS! 🧠" << endl;
            else if(attempts <= 5) cout << "Rating: Excellent! ⭐" << endl;
            else cout << "Rating: Good Job! 👍" << endl;
            
            break;
        } 
        else if (guess < secretNumber) {
            cout << "Too LOW! Try a bigger number.";
        } 
        else {
            cout << "Too HIGH! Try a smaller number.";
        }

        // Hint for last attempt
        if (attempts == maxAttempts - 1) {
            cout << " [HINT: Number is " << (secretNumber % 2 == 0 ? "EVEN" : "ODD") << "]";
        }

        if (attempts == maxAttempts) {
            cout << "\n\n💀 GAME OVER! You used all attempts." << endl;
            cout << "Secret number was: " << secretNumber << endl;
        }
    }

    return 0;
}