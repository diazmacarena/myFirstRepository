#include <iostream>
#include <string>

using namespace std;

int count(string n);
bool isalpha(char car);

int main() {
    string cadena;
    cout << "Cadena: ";
    getline(cin, cadena); 

    int letterCount = count(cadena);
    cout << letterCount << endl;
}

int count(string n) {
    int count = 0;
    for (char c : n) { 
        if (isalpha(c)) { 
            count++;
        }
    }
    return count;
}

bool isalpha(char car) {
    char i = static_cast<int>(car);
    return ((i>= 65 && i<=90) || (i>= 97 && i<=122 ));
}