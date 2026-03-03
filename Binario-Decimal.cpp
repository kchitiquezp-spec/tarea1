#include <iostream>
#include <string>

using namespace std;

int main() {
    string bin;
    int decimal = 0;
    int potencia = 1;

    cout << "Ingrese un numero binario: ";
    cin >> bin;

    int n = bin.length();

    for (int i = n - 1; i >= 0; i--) {
        if (bin [i]== '1') {
            decimal = decimal + potencia;
        }
        else if (bin[i] != '0') {
            cout << "Ha ocurrido un error, entrada invalida." << endl;
            return 1;
        }
        potencia *= 2;
    }

    cout << "El numero decimal es: " << decimal << endl;

    return 0;
}
