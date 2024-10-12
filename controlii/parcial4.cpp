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

// Función para procesar una sola cadena
void processString(string& cadena) {
    for (int i = 0; i < cadena.size(); i++) {  // Recorre cada carácter de la cadena
        char& c = cadena[i];  // Referencia al carácter actual

        // Convertir mayúsculas a minúsculas
        c = toLower(c);

        // Reemplazar números por '-'
        c = isNum(c);

        // Ignorar caracteres que no son ni letras ni números
        int asciiValue = static_cast<int>(c);
        if (!((asciiValue >= 97 && asciiValue <= 122) || (asciiValue >= 48 && asciiValue <= 57))) {
            continue;  // Ignorar caracteres especiales
        }
    }
}

int main() {
    string cadena = "HeLLo123@World#";
    
    // Procesar la cadena
    processString(cadena);
    
    // Imprimir la cadena modificada
    cout << cadena << endl;

    return 0;
}
