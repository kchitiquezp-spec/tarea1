#include <iostream>

using namespace std;

int addFive(int num) {
    num = num + 5;
    return num;
}

int main() {
    int sum;
    cout << "Escribe tu numero favorito: ";
    cin >> sum;
    int resultado = addFive(sum);

    cout << "wow!!! se sumaron otros 5 numeros a " << sum << " y el resultado ahora es: " << resultado << endl;

    return 0;
}