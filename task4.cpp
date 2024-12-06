#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void appendMissingLetters() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string input;

    
    fstream file("alphabets.txt", ios::in);
    if (!file) {
        cout << "File not found!" << endl;
        return;
    }
    getline(file, input); 
    file.close();

    
    string missing = "";
    for (int i = 0; i < alphabet.length(); i++) {
        char c = alphabet[i]; 
        if (input.find(c) == string::npos) { 
            missing += c;
        }
    }

    
    file.open("alphabets.txt", ios::app); 
    if (file) {
        file << "\n" << missing; 
        cout << "Missing letters appended successfully!" << endl;
    } else {
        cout << "Error while opening file for writing!" << endl;
    }
    file.close();
}

int main() {
    appendMissingLetters();
    return 0;
}
