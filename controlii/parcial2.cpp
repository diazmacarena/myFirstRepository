#include <iostream>
using namespace std;

int main() {
    int x= 10;
    /*cout << x << endl;
    cout << &x << endl;*/

    int &ptr = ++x;
    cout << "ptr++ es " << ptr++ << endl;
    cout <<"ptr es " << ptr << endl;

    /*x = x*x;
    cout<< x << endl;
    cout << &ptr<< endl;*/

    int arr[] = {1, 2, 0, 4, 9, 10};


    int i{0};
    while(arr[i]) {
        cout <<"x es " << x << endl;
        if( x%2) {
            cout << "entro al if(x%2) " << x << endl;
            break;
        }
        else {
            cout << "entro al else" << endl;
            cout << arr[i] << endl;
        }
        cout << "x++ es " << x++ << endl;
        i++;
    }
    cout << "x al final es " << x;
}