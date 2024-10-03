#include <iostream>
#include <string>

using namespace std;

int countLetters(string n) {
    int count = 0;
    for (char c : n) { // Iterate over characters in the string
        if (isalpha(c)) { // Use isalpha() to check if a character is a letter
            count++;
        }
    }
    return count;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString); // Use getline to read the entire line

    int letterCount = countLetters(inputString);
    cout << "Number of letters: " << letterCount << endl;

    return 0;
}