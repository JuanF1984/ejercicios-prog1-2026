#include <iostream>
using namespace std;

void burbujeoMejorado(int vector[], int cantidad) {
    int aux;
    int i = 0;
    bool ordenado = false;

    while (i < cantidad - 1 && !ordenado) {
        ordenado = true;

        for (int j = 0; j < cantidad - i - 1; j++) {

            if (vector[j] > vector[j + 1]) {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;

                ordenado = false;
            }

        }

        i++;
    }
}

void mostrarVector(int vector[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    const int CANTIDAD = 8;

    int numeros[CANTIDAD] = {25, 12, 8, 30, 5, 18, 40, 10};

    cout << "Vector original:" << endl;
    mostrarVector(numeros, CANTIDAD);

    burbujeoMejorado(numeros, CANTIDAD);

    cout << "Vector ordenado:" << endl;
    mostrarVector(numeros, CANTIDAD);

    return 0;
}