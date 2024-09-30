#include <iostream>

using namespace std;

bool isalpha(char car) {
    char i = static_cast<int>(car);
    return ((i>= 65 && i<=90) || (i>= 97 && i<=122 ));
};

bool isupper(char car) {
    char i = static_cast<int>(car);
    return ((i>= 65 && i<=90));
};

bool ispunct(char car) {
    char i = static_cast<int>(car);
    return (i==58 || i==59 || i==44 || i==46);
};

char tolower(char car) {
    char i = static_cast<int>(car);
    int value = i + 32;
    char lower = static_cast<char> (value);
    return lower;
}

int main() {
    char cadenaDesordenada [] = "e6s0T9e6.eS.99u9n5a.CADENA";
    char actual = cadenaDesordenada[0];
    for (int i{0}; actual != '\0'; actual = cadenaDesordenada[++i]) {
        if ( isalpha(actual))
            cout << (char)(isupper(actual) ? tolower(actual) : actual);
        else if (ispunct(actual))
            cout << ' ';
    }
    cout << endl;
    return 0;
}