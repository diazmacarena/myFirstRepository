#include <iostream>
using namespace std;

void swapPtr(int *a, int *b) {
    int *tmp = a;
    a = b; 
    b = tmp;
}

bool isNum(char car) {
    return ((static_cast<int>(car) >=48) && (static_cast<int>(car)<=57));
}


int main(){
    string cadena{"12ab5co7"};
    int suma=0;
    for (size_t i{0}; i <cadena.size();i++ ){
        if(isNum(cadena[i])) {
            suma+= cadena[i] -'0';
        }
    }
    cout << suma;
}
