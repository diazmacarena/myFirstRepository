#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main() {

    int size;
    cin >> size;

    vector<int> abc(size);
    inputVector(abc);

    vector<int> def;
    def.push_back(abc[0]);

    for (int i{1}; i < abc.size(); ++i) {
        if (find(def.begin(), def.end(), abc[i]) == def.end()) {
            def.push_back(abc[i]);
        }
    }
    outputVector(def);
}

void outputVector(const vector<int>& a) {
    for (int item : a) {
        cout << item << " ";
    }
}

void inputVector(vector<int>& a) {
    for (int& item : a) {
        cin >> item;
    }
}