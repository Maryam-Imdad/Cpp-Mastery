#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    13_02_Intermediate / 02_Contact_Book.cpp
    RESUME PROJECT #2 - Uses map (STL) - Sorted automatically

    Concepts: map<string,string> (Red-Black Tree), file handling, algorithm
    Time Complexity: Search O(log n) vs vector O(n)
*/

map<string, string> contacts; // name -> phone (sorted by name automatically)
const string FILE = "13-Projects/13_02_Intermediate/contacts.txt";

void saveToFile(){
    ofstream out(FILE, ios::out | ios::trunc);
    for(auto &p : contacts){
        out << p.first << " " << p.second << endl;
    }
    out.close();
}

void loadFromFile(){
    contacts.clear();
    ifstream in(FILE);
    string name, phone;
    while(in >> name >> phone){
        contacts[name] = phone;
    }
    in.close();
}

void addContact(){
    string name, phone;
    cout << "Enter Name: "; cin >> name;
    cout << "Enter Phone: "; cin >> phone;

    if(contacts.find(name)!= contacts.end()){
        cout << "Contact already exists! Updating phone number." << endl;
    }
    contacts[name] = phone;
    saveToFile();
    cout << "Contact Saved! Total: " << contacts.size() << endl;
}

void displayAll(){
    if(contacts.empty()){
        cout << "No contacts!" << endl;
        return;
    }
    cout << "\n--- All Contacts (Sorted by Name) ---" << endl;
    cout << left << setw(20) << "Name" << setw(15) << "Phone" << endl;
    cout << string(35, '-') << endl;
    for(auto &c : contacts){
        cout << left << setw(20) << c.first << setw(15) << c.second << endl;
    }
}

void searchContact(){
    string name; cout << "Enter name to search: "; cin >> name;
    auto it = contacts.find(name); // O(log n) - Fast!
    if(it!= contacts.end()){
        cout << "Found: " << it->first << " -> " << it->second << endl;
    } else {
        cout << "Contact '" << name << "' not found!" << endl;
        // Suggest similar names
        cout << "Similar contacts: ";
        for(auto &c : contacts){
            if(c.first.find(name)!= string::npos){
                cout << c.first << " ";
            }
        }
        cout << endl;
    }
}

void deleteContact(){
    string name; cout << "Enter name to delete: "; cin >> name;
    if(contacts.erase(name)){ // erase returns 1 if deleted
        saveToFile();
        cout << "Deleted!" << endl;
    } else {
        cout << "Not found!" << endl;
    }
}

void countContacts(){
    cout << "Total Contacts: " << contacts.size() << endl;
}

int main(){
    loadFromFile();
    cout << "====== CONTACT BOOK ======" << endl;
    cout << "Loaded " << contacts.size() << " contacts | Map is sorted automatically" << endl;

    int choice;
    while(true){
        cout << "\n1.Add 2.Display (Sorted) 3.Search 4.Delete 5.Count 6.Exit\nChoice: ";
        cin >> choice;
        if(choice==1) addContact();
        else if(choice==2) displayAll();
        else if(choice==3) searchContact();
        else if(choice==4) deleteContact();
        else if(choice==5) countContacts();
        else if(choice==6){ cout << "Saved. Bye!" << endl; break; }
        else cout << "Invalid!" << endl;
    }
    return 0;
}