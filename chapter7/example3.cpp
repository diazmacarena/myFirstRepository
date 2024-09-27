#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main() {

    const size_t arraySize{5}; //Constant variables are also called named constants or read-only variables. A constant variable must be initialized when it’s declared and cannot be modified thereafter
    array<int, arraySize> values;
    
    for (size_t i{0} ; i < values.size(); ++i) {
        values[i] = 2 + 2 * i;
    }  

    cout << "Element" << setw(10) << "Value" << endl;

    for (size_t j{0}; j < values.size(); ++j) {
        cout << setw(7) << j << setw(10) << values[j] << endl;
    }
}
