#include <iostream>


using namespace std;

// Función para verificar si un número es par o impar usando punteros
void verificarParidad(int numero) {
    // Creamos un puntero que apunta a la dirección de memoria de 'numero'
    int *ptr = &numero;

    // Comprobamos si el valor al que apunta el puntero es par o impar
    if (*ptr % 2 == 0) {
        cout << "El número " << *ptr << " es par.";
    } else {
        cout << "El número " << *ptr << " es impar.";
    }
}

int main() {
    int num;

    cout << "Ingrese un número: ";
    cin >> num;

    verificarParidad(num);

    return 0;
}
