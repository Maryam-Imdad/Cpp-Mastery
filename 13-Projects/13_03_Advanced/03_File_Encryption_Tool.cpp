#include <bits/stdc++.h>
#include <fstream>
using namespace std;

/*
    13_03_Advanced / 03_File_Encryption_Tool.cpp
    FINAL PROJECT - Binary File Handling + Encryption

    Concepts: Binary mode, XOR encryption, seek, file copy
    Logic: Every byte ^ key = encrypted, encrypted ^ key = decrypted
    Same function for encrypt & decrypt (XOR property)
*/

void encryptDecrypt(const string &inputFile, const string &outputFile, char key){
    ifstream in(inputFile, ios::binary);
    ofstream out(outputFile, ios::binary);

    if(!in){ cout << "Input file not found!" << endl; return; }

    char ch;
    while(in.get(ch)){
        ch = ch ^ key; // XOR encryption - core logic
        out.put(ch);
    }
    in.close(); out.close();
    cout << "Done! File: " << outputFile << " | Key: " << (int)key << endl;
}

void showFileInfo(const string &file){
    ifstream in(file, ios::binary | ios::ate);
    if(!in){ cout << "File not found!" << endl; return; }
    cout << "File: " << file << " | Size: " << in.tellg() << " bytes" << endl;
    in.close();
}

int main(){
    cout << "====== FILE ENCRYPTION TOOL (XOR + Binary Mode) ======" << endl;
    cout << "This tool can encrypt ANY file: txt, jpg, pdf, exe" << endl;

    int ch;
    string inFile, outFile;
    char key = 'K'; // You can change key to any char like 'A', 'x', 123

    while(true){
        cout << "\n1.Encrypt File 2.Decrypt File (Same as Encrypt) 3.File Info 4.Exit\nChoice: ";
        cin >> ch;
        if(ch==1 || ch==2){
            cout << "Enter Input File Path (e.g. test.txt): "; cin >> inFile;
            cout << "Enter Output File Path (e.g. encrypted.dat): "; cin >> outFile;
            cout << "Enter Key (single char, e.g. K): "; cin >> key;
            encryptDecrypt(inFile, outFile, key);
            if(ch==1) cout << "🔒 Encrypted! No one can read " << outFile << " without key!" << endl;
            else cout << "🔓 Decrypted! File restored!" << endl;
        }
        else if(ch==3){
            cout << "Enter File: "; cin >> inFile;
            showFileInfo(inFile);
        }
        else if(ch==4) break;
        else cout << "Invalid!" << endl;
    }
    return 0;
}