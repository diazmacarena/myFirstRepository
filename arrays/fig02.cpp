#include <iostream>
#include <vector>

using namespace std;

void inputVector(vector<int>&);

int main() {

    int size;
    cin >> size;

    vector<int> a(size);
    inputVector(a);

    int max = a[0];

    for (int i{1}; i < a.size(); i++) {
        if (a[i] > max) {
        max = a[i];
        }
    }
    
    int secondMax = a[0];

    for (int i{0}; i < a.size(); i++) {
        if (a[i] > secondMax && a[i] != max) {
            secondMax = a[i];
        }
    }

    cout << secondMax;
}

void inputVector(vector<int>& a) {
    for (int& item : a) {
        cin >> item;
    }
}
