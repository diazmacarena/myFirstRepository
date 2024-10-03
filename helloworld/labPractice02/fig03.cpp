#include <iostream>
#include <vector>

using namespace std;

int toPow(int base, int ex);
void outputVector(const vector<int>&);

int main() {
    int i;
    cin >> i;

    vector<int> a(i);

    for (int j{1}; j <= i; j++) {
        a[j] = toPow(j,2);
    }

    outputVector(a);
}

void outputVector(const vector<int>& a) {
    for (int item : a) {
        cout << item <<" ";
    }
}

int toPow(int base, int ex) {
    int result{1};
    for (int i{0}; i < ex; ++i) {
        result *= base;
    }
    return result;
}