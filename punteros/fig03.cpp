#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "size " << size << endl;

    int *ptr = &array[0];
    cout << ptr << endl;
    cout << *ptr << endl;

    /*cout << array << endl;
    cout << (array+0) << "-" << *(array+0) << endl;
    cout << (array+1) << "-" << *(array+1) << endl;
    cout << (array+2) << "-" << *(array+2) << endl;
    cout << (array+3) << "-" << *(array+3) << endl;
    cout << (array+4) << "-" << *(array+4) << endl;

    int *ini{array};
    cout << ini << "-" << *ini << endl;
    ini++;
    cout << ini << "-" << *ini << endl;
    ini++;
    cout << ini << "-" << *ini << endl;*/

    cout << array << endl;
    int *end = array + (size - 1);
    cout << end << "-" << *end << endl;
    end--;
    cout << end << "-" << *end << endl;
}