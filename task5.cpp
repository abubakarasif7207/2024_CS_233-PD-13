#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getMorseCode(char ch) {
    string morse[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
        "..-", "...-", ".--", "-..-", "-.--", "--.."
    };
    if (ch >= 'A' && ch <= 'Z') {
        return morse[ch - 'A'];
    } else if (ch >= 'a' && ch <= 'z') {
        return morse[ch - 'a'];
    } else if (ch == ' ') {
        return "-.-.-.-"; 
    } else {
        return ""; 
    }
}


string toMorseCode(string input) { 
    string morseCode = "";
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        string morseChar = getMorseCode(ch);
        if (!morseChar.empty()) {
            morseCode += morseChar + " ";
        }
    }
    return morseCode;
}

int main() {
    
    fstream inputFile("input.txt", ios::in);  
    fstream outputFile("output.txt", ios::out); 

    if (!inputFile) {
        cout << "Error" << endl;
        return 1;
    }

    if (!outputFile) {
        cout << "Error!" << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) { 
        string morse = toMorseCode(line); 
        outputFile << morse << endl;     
    }

    cout << "Morse code convert" << endl;

    inputFile.close();  
    outputFile.close(); 

    return 0;
}
