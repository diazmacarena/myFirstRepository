#include <iostream>
using namespace std;

#include "final.h"

int CDummy::n = 0;

int main() 
{
    CDummy *a;
    if(true){
        CDummy x;
        a = new CDummy[3];
        cout << x.n << endl;
    }
    CDummy b[2];
    CDummy c;
    cout << c.n << endl;
    CDummy &ref = c;
    delete[] a;
    cout << b[0].n << endl;

    return 0;
}
