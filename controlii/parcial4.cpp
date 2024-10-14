#include <iostream>

using namespace std;

// Función para convertir una letra mayúscula a minúscula
char toLower(char car) {
    if ((static_cast<int>(car) >= 65) && (static_cast<int>(car) <= 90)) {  // Si es mayúscula
        int caracter = static_cast<int>(car) + 32;  // Convertir a minúscula
        return static_cast<char>(caracter);  // Retornar el carácter en minúscula
    }
    return car;  // Si no es mayúscula, devolver tal cual
}

// Función para verificar si es un número y devolver '-'
char isNum(char car) {
    int var = static_cast<int>(car);  // Convertir a entero para comparación
    if (var >= 48 && var <= 57) {  // Si es un número (rango ASCII '0' a '9')
        return '-';  // Reemplazar con '-'
    }
    return car;  // Si no es número, devolver tal cual
}


int main() {
    string cadena = "HeLLo123@World#";

    for (int i = 0; i < cadena.length(); i++) {  // Recorre cada carácter de la cadena
        char& c = cadena[i];
        c = isNum(c);      // Asigna el resultado de isNum
        c = toLower(c);     // Asigna el resultado de toLower
    }

    // Imprimir la cadena modificada
    cout << cadena << endl;

    return 0;
}