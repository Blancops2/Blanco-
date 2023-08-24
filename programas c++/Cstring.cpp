#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nombre[50];

    cout << "Ingrese su nombre: ";
    cin.getline(nombre, sizeof(nombre));

    char saludo[100];
    strcpy(saludo, "¡Hola, ");
    strcat(saludo, nombre);
    strcat(saludo, "!");

    cout << saludo << endl;

    return 0;
}

