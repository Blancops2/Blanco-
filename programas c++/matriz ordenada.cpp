#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    const int filas = 3;
    const int columnas = 3;

    int matriz[filas][columnas];

    srand(static_cast<unsigned int>(time(nullptr)));

    // Llenar la matriz con números aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    // Mostrar la matriz original
    cout << "Matriz original:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Copiar y ordenar la matriz usando la función sort
    int matrizOrdenada[filas * columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizOrdenada[i * columnas + j] = matriz[i][j];
        }
    }
    sort(begin(matrizOrdenada), end(matrizOrdenada));

    // Mostrar la matriz ordenada
    cout << "Matriz ordenada:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matrizOrdenada[i * columnas + j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

