#include <iostream>
#include <string>
#include <cctype>
using namespace std;
/*

PROJECT: Word Counter - Analyzes a sentence
Features: Words, Chars, Vowels, Palindrome words, Longest word

*/

int main(){
    cout << "================================================================\n";
    cout << "08_07_00 - MINI PROJECT: WORD COUNTER\n";
    cout << "================================================================\n\n";

    // Input sentence
    string sentence = "Madam teaches level in noon"; // Example sentence
    cout << "Sentence: " << sentence << "\n\n";

    // 1. Count characters without spaces
    int charCount = 0; // Initialize count
    for(int i=0; i<sentence.size(); i++){ // Traverse each char
        if(sentence[i]!= ' '){ // If not space
            charCount++; // Increase count
        }
    }
    cout << "Total chars (no spaces): " << charCount << "\n";

    // 2. Count words
    int wordCount = 0; // Word counter
    bool inWord = false; // Flag if we are inside word
    for(int i=0; i<sentence.size(); i++){ // Loop sentence
        if(sentence[i]!= ' ' &&!inWord){ // Start of new word
            wordCount++; // Increase word count
            inWord = true; // Mark inside word
        }
        else if(sentence[i] == ' '){ // Space found
            inWord = false; // Exit word
        }
    }
    cout << "Total words: " << wordCount << "\n";

    // 3. Count vowels
    int vowelCount = 0; // Vowel counter
    for(int i=0; i<sentence.size(); i++){ // Traverse
        char c = tolower(sentence[i]); // Convert to lower
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){ // Check vowel
            vowelCount++; // Increase
        }
    }
    cout << "Total vowels: " << vowelCount << "\n";

    // 4. Find longest word
    string longest = ""; // Store longest
    string current = ""; // Current word building
    for(int i=0; i<=sentence.size(); i++){ // Loop till end inclusive
        if(i==sentence.size() || sentence[i]==' '){ // Word ends
            if(current.size() > longest.size()){ // If current longer
                longest = current; // Update longest
            }
            current = ""; // Reset current
        }
        else{
            current += sentence[i]; // Add char to current word
        }
    }
    cout << "Longest word: " << longest << "\n";

    // 5. Check palindrome words in sentence
    cout << "\nPalindrome words: ";
    current = ""; // Reset
    for(int i=0; i<=sentence.size(); i++){
        if(i==sentence.size() || sentence[i]==' '){
            // Check if current is palindrome
            bool isPal = true; // Assume palindrome
            int l=0, r=current.size()-1; // Two pointers
            while(l<r){
                if(tolower(current[l])!= tolower(current[r])){ // Compare ignoring case
                    isPal = false; // Not palindrome
                    break;
                }
                l++; // Move left
                r--; // Move right
            }
            if(isPal && current.size()>1){ // If palindrome and length >1
                cout << current << " "; // Print it
            }
            current = ""; // Reset
        }
        else{
            current += sentence[i]; // Build word
        }
    }
    cout << "\n";

    cout << "\n================================================================\n";
    cout << "PROJECT DONE\n";
    cout << "================================================================\n";
    return 0;
}