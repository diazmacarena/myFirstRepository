
#include <iostream>
#include <array>
using namespace std;

const size_t rows{2};
const size_t columns{3};
void totalArray(const array<array<int,columns>,rows>&);

int main() {
    array<array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6};

    int total{0};

    for (size_t row{0}; row < array1.size(); ++row) {
        for (size_t column{0}; column < array1[row].size(); ++column) {
            total += array1[row][column];
        }
    }
    cout << total;
}