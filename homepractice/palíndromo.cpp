#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int d1 = n/10000;
    int d2 = (n%10000)/1000;
    int d3 = (n%1000)/100;
    int d4 = (n%100)/10;
    int d5 = n%10;

    if (n >= 10000 && n <= 99999) {
        if (d1 == d5 && d2 == d4) {
            cout << "Es un palíndromo";
        } else {
            cout << "No es un palíndromo";
    }
    } else {
        cout << "No tiene 5 dígitos.";
        }
}