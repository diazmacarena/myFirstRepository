

#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main() {
    vector<int> integers1(7);
    vector<int> integers2(10);

    cout << integers1.size() << endl;
    outputVector(integers1);

    cout << integers2.size() << endl;
    outputVector(integers2);

    cout << "\nEnter 17 integers: " << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nIntegers1: ";
    outputVector(integers1);
    cout << "\nIntegers2: ";
    outputVector(integers2);

    if (integers1 != integers2) {
        cout << "\n ...are not equal" << endl;
    }

    vector<int> integers3{integers1};
    outputVector(integers3);

    integers1 = integers2;
    outputVector(integers1);
    outputVector(integers2);

    if (integers1 == integers2) {
        cout << "\n... are equal\n";
    }

    cout << integers1[5] << endl;
    integers1[5] = 1000;
    outputVector(integers1);

    try {
        cout << integers1.at(15) << endl;
    }
    catch (out_of_range& ex) {
        cerr << "An exception occurred: " << ex.what() << endl; 
    }

    cout << integers3.size() << endl;
    integers3.push_back(1000);
    cout << integers3.size() << endl;
    outputVector(integers3);

}



void outputVector(const vector<int>& items) {
    for (int item : items) {
        cout << item << " ";
    }

    cout << endl;
}

void inputVector(vector<int>& items) {
    for (int& item : items) {
        cin >> item;
    }
}