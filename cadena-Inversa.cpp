#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto;
    int a, b;

    cout << "Escribe un texto: ";
    getline(cin, texto);
    cout << "Indice inicial (a): ";
    cin >> a;
    cout << "Indice final (b): ";
    cin >> b;

    int n = texto.length();
    if (b >= n) b = n - 1;
    if (a > b) {
        int temporal_indice = a;
        a = b;
        b = temporal_indice;
    }

    int i = a;
    int j = b;

    while (i < j) {
        char temporal = texto[i];
        texto[i] = texto[j];
        texto[j] = temporal;
        i++;
        j--;
    }
    cout << "Resultado: " << texto << endl;
    return 0;
}