#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char c;

    cout << "Ingrese un caracter: ";
    cin >> c;

    if (isalpha(c)) {
        cout << "Es una letra." << endl;

        if (isupper(c)) {
            cout << "Es una letra mayuscula." << endl;
        } else {
            cout << "Es una letra minuscula." << endl;
        }
    } else if (isdigit(c)) {
        cout << "Es un digito." << endl;
    } else {
        cout << "Es un caracter especial." << endl;
    }

    return 0;
}

