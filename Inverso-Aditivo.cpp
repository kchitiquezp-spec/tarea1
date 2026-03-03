#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Cuantos numeros se van a ingresar?: ";
    cin >> n;

    if (n <= 0) {
        cout << "No podemos encontrar el inverso aditivo." << endl;
        return 1;
    }

    int ingresados[n];
    int inverso[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingresa un numero para verificar su aditivo: ";
        cin >> ingresados[i];
    }

    for (int i= 0; i < n; i++) {
        inverso[i] = ingresados[i] * -1;
    }

    for (int i = 0; i < n; i++) {
        cout << "El inverso aditivo de " << ingresados[i] << " es: " << inverso[i] << endl;
    }

    cout << endl;

    return 0;
    
}