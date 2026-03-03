#include <iostream>


using namespace std;
int main() {
    int n;
    cout << "Ingresa un numero para poder ver el orden descendente: ";
    cin >> n;
    if (n < 0) {
        cout << "Ingresa un numero positivo." << endl;
        return 1;
    }
    int arreglo[n];

    for (int i = 0; i < n; i++) {
        arreglo[i] = n - i;
    }

    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << (i == n - 1 ? "" : ",");
    }


        return 0;
}