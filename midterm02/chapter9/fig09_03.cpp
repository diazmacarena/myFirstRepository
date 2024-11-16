#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;


void displayTime(const string& message, const Time& time) {
    cout << message << "\nUniversal time: " << time.toUniversalString() 
    << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
    Time t; //constructor implícito Time(){}

    displayTime("Initial time:", t);
    t.setTime(13, 27, 6);
    displayTime("After setTime:", t);


    try {
        t.setTime(99, 99, 99);
    }
    catch (invalid_argument& e) {
        cout << "Exception: " << e.what() << "\n\n";
    }


    displayTime("After attempting to seet an invalid time:", t);
}