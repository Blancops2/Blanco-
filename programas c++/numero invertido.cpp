#include <iostream>

int main() {
    int numero;
    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    int numero_invertido = 0;
    int num_temp = numero;

    while (num_temp > 0) {
        int digito = num_temp % 10;
        numero_invertido = numero_invertido * 10 + digito;
        num_temp /= 10;
    }

    std::cout << "El número invertido es: " << numero_invertido << std::endl;

    return 0;
}
