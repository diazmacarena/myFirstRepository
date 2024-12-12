#include <string>
#include <iostream>
using namespace std;

int main() {
    const int CLUBS = 0, DIAMONDS = 1, HEARTS = 2, SPADES = 3;

}

void sprint_suits(const int suit) {
    const char *names[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    return names[suit];
}