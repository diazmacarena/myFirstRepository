#include <iostream>
#include <vector>
using namespace std;

int toPow(int base, int ex);
void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main() {

    int size;
    cin >> size;

    vector<int> items(size);
    inputVector(items);

    vector<int> items2(size);

    for (int i{0}; i < items.size(); i++) {
        int result = toPow(items[i], 2);
            items2[i] = result;
        }

    outputVector(items2);

}

void outputVector(const vector<int>& items) {
    for (int item : items) {
        cout << item << " ";
    }
}
void inputVector(vector<int>& items) {
    for (int& item : items) {
        cin >> item;
    }
}

int toPow(int base, int ex) {
    int result{1};
    for (int i{0}; i < ex; i++) {
        result *= base;
    }
    return result;
}