

#include <iostream>
#include <array>
using namespace std;

const size_t rows{2};
const size_t columns{3};
void printArray(const array<array<int,columns>,rows>&);

int main() {
    array<array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6};
    array<array<int, columns>, rows> array2{1, 2, 3, 4, 5};

    cout << "Values in array1 by row are: " << endl;
    printArray(array1);

    cout << "\nValues in array2 by row are: " << endl;
    printArray(array2);
}


void printArray(const array<array<int, columns>, rows>& a) {

    for (auto const& row : a) { //auto keyword, which tells the compiler to infer (determine) a variable’s data type based on the variable’s initializer value.

        for (auto const& element : row) {
            cout << element << " ";
        }

        cout << endl;
    }
}

/*Nested Counted-COntrolled for Statements
for (size_t row{0}; row < a.size(); ++row) {
    for (size_t columns{0}; column < a[row].size(); ++column) {
        cout << a[row][column] << " ";
    }
    cout << endl;
}*/

/*Other Common Two-Dimensional array Manipulations
for (size_t column{0}; column < 4; ++column) {
    a[2][column] = 0;
}
a[2][0] = 0;
a[2][1] = 0;
a[2][2] = 0;
a[2][3] = 0;*/