#include <bits/stdc++.h>
using namespace std;

/*
    PROJECT 01: Student Report Card Manager
    Using only Vectors - Covers all functions

    Features:
    - Add student marks
    - Display all
    - Search mark
    - Sort marks
    - Reverse marks
*/

void displayMenu(){
    cout << "\n--- Vector Project: Marks Manager ---\n";
    cout << "1. Add Marks\n";
    cout << "2. Display Marks\n";
    cout << "3. Find Max/Min Marks\n";
    cout << "4. Sort Marks\n";
    cout << "5. Search a Mark\n";
    cout << "6. Reverse Marks\n";
    cout << "0. Exit\n";
    cout << "Enter Choice: ";
}

int main() {
    vector<int> marks;
    int choice;

    while(true){
        displayMenu();
        cin >> choice;

        if(choice == 0) break;

        if(choice == 1){
            int m; cout << "Enter Mark: "; cin >> m;
            marks.push_back(m); // Function 1
            cout << "Added!\n";
        }
        else if(choice == 2){
            cout << "Marks: ";
            for(auto it = marks.begin(); it!= marks.end(); it++){ // Iterators
                cout << *it << " ";
            }
            cout << "\nSize: " << marks.size() << " Capacity: " << marks.capacity() << endl;
        }
        else if(choice == 3){
            if(marks.empty()){ cout << "No data!\n"; continue; }
            cout << "Max: " << *max_element(marks.begin(), marks.end()) << endl;
            cout << "Min: " << *min_element(marks.begin(), marks.end()) << endl;
        }
        else if(choice == 4){
            sort(marks.begin(), marks.end());
            cout << "Sorted Successfully!\n";
        }
        else if(choice == 5){
            int key; cout << "Enter mark to search: "; cin >> key;
            auto it = find(marks.begin(), marks.end(), key);
            if(it!= marks.end()) cout << "Found at index: " << it - marks.begin() << endl;
            else cout << "Not Found!\n";
        }
        else if(choice == 6){
            reverse(marks.begin(), marks.end());
            cout << "Reversed!\n";
        }
    }

    return 0;
}