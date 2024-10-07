#include <iostream>

using namespace std;

void outputArray(const int *arr, int tam) {
    while(tam--)
        cout << *arr++ << " ";
}

bool isPalIt(int *ini, int *fin) {    
    while(ini < fin) {
        if(*ini++ != *fin--)
            return false;
    }
    return true;
}

bool isPalRec(int *ini, int *fin) {
    if(*ini != *fin)
        return false;
    if(ini >= fin)
        return true;            
    return isPalRec(++ini, --fin);
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int tam = sizeof(arr) / sizeof(arr[0]);

    outputArray(arr, tam);
    cout << endl;
    cout << isPalRec(arr, arr+tam-1);    
    cout << endl;
    cout << isPalRec(arr, arr+tam-1);
    cout << endl;
    
    return 0;
}