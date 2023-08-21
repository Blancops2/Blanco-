#include <iostream>

using namespace std;

int main() {
    const int filas = 4;
    const int columnas = 5;
    int matriz[filas][columnas];

    // Cargar la matriz con los primeros números naturales
    int numero = 1;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = numero;
            numero++;
        }
    }

    // Mostrar la matriz
    cout << "Matriz cargada con los primeros números naturales:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
    }

    // Buscar un número ingresado por el usuario
    int numeroBuscado;
    cout << "Ingrese un número a buscar en la matriz: ";
    cin >> numeroBuscado;

    bool encontrado = false;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] == numeroBuscado) {
                cout << "El número " << numeroBuscado << " se encuentra en la fila " << i+1 << " y columna " << j+1 << endl;
                encontrado = true;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (!encontrado) {
        cout << "El número " << numeroBuscado << " no se encuentra en la matriz." << endl;
    }

    return 0;
}

