#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    13_03_Advanced / 01_Library_Management_System.cpp
    RESUME PROJECT #4 - Inheritance + File + Date Logic

    Classes: Person (base) -> Student, Book, IssueRecord
    Feature: Fine calculation (Rs. 10/day after 14 days)
*/

// Base class for inheritance concept
class Person {
public:
    char name[30];
};

class Book {
public:
    int bookId;
    char title[50];
    char author[30];
    bool isIssued = false;

    void input(){
        cout << "Book ID: "; cin >> bookId;
        cout << "Title: "; cin.ignore(); cin.getline(title, 50);
        cout << "Author: "; cin.getline(author, 30);
    }
    void display() const {
        cout << left << setw(6) << bookId << setw(25) << title << setw(20) << author
             << (isIssued? "Issued" : "Available") << endl;
    }
};

class Student : public Person {
public:
    int roll;
    void input(){
        cout << "Roll: "; cin >> roll;
        cout << "Name: "; cin.ignore(); cin.getline(name, 30);
    }
};

struct IssueRecord {
    int bookId;
    int roll;
    time_t issueDate;
};

vector<Book> books;
vector<IssueRecord> issues;
const string BOOK_FILE = "13-Projects/13_03_Advanced/library_books.dat";
const string ISSUE_FILE = "13-Projects/13_03_Advanced/library_issues.dat";

void saveBooks(){ ofstream out(BOOK_FILE, ios::binary|ios::trunc); for(auto &b:books) out.write((char*)&b,sizeof(b)); }
void loadBooks(){ books.clear(); ifstream in(BOOK_FILE, ios::binary); Book b; while(in.read((char*)&b,sizeof(b))) books.push_back(b); }
void saveIssues(){ ofstream out(ISSUE_FILE, ios::binary|ios::trunc); for(auto &i:issues) out.write((char*)&i,sizeof(i)); }
void loadIssues(){ issues.clear(); ifstream in(ISSUE_FILE, ios::binary); IssueRecord r; while(in.read((char*)&r,sizeof(r))) issues.push_back(r); }

void addBook(){ Book b; b.input(); books.push_back(b); saveBooks(); cout << "Book Added!" << endl; }
void viewBooks(){
    if(books.empty()){ cout << "No books!" << endl; return; }
    cout << left << setw(6) << "ID" << setw(25) << "Title" << setw(20) << "Author" << "Status" << endl;
    cout << string(60,'-') << endl;
    for(auto &b:books) b.display();
}

void issueBook(){
    int bId, roll;
    cout << "Enter Book ID to issue: "; cin >> bId;
    cout << "Enter Student Roll: "; cin >> roll;

    for(auto &b:books){
        if(b.bookId==bId){
            if(b.isIssued){ cout << "Already Issued!" << endl; return; }
            b.isIssued=true;
            IssueRecord rec; rec.bookId=bId; rec.roll=roll; rec.issueDate=time(0);
            issues.push_back(rec);
            saveBooks(); saveIssues();
            cout << "Book Issued on: " << ctime(&rec.issueDate);
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void returnBook(){
    int bId; cout << "Enter Book ID to return: "; cin >> bId;
    for(auto it=issues.begin(); it!=issues.end(); ++it){
        if(it->bookId==bId){
            time_t now = time(0);
            double days = difftime(now, it->issueDate) / (60*60*24);
            cout << "Days kept: " << (int)days << endl;
            if(days>14){
                double fine = (days-14)*10;
                cout << "Fine: Rs. " << fine << " (Rs.10/day after 14 days)" << endl;
            } else cout << "No Fine! Returned on time." << endl;

            for(auto &b:books) if(b.bookId==bId) b.isIssued=false;
            issues.erase(it);
            saveBooks(); saveIssues();
            cout << "Book Returned!" << endl;
            return;
        }
    }
    cout << "This book was not issued!" << endl;
}

int main(){
    loadBooks(); loadIssues();
    cout << "====== LIBRARY MANAGEMENT (Inheritance + Fine Logic) ======" << endl;
    int ch; while(true){
        cout << "\n1.Add Book 2.View Books 3.Issue Book 4.Return Book 5.Exit\nChoice: "; cin >> ch;
        if(ch==1) addBook(); else if(ch==2) viewBooks(); else if(ch==3) issueBook();
        else if(ch==4) returnBook(); else if(ch==5) break; else cout << "Invalid!" << endl;
    }
}