#include <iostream>
#include <array>

using namespace std;

void duplicateElements(array<int, 9> &arr) {
    for(int &i : arr) {
        i *= 2;
    }
}

void outputArray(array<int, 9> arr) {
    cout << "[";
    for (int i :arr) {
        cout << i << endl;
    }
}

int main() {
    array<int, 9> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    duplicateElements(arr);
    outputArray(arr);
}