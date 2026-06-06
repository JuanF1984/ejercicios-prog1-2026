#include <iostream>
using namespace std;

void insertionSort(int vector[], int cantidad) {
    for (int i = 1; i < cantidad; i++) {
        int elemento = vector[i];
        int j = i - 1;

        while (j >= 0 && vector[j] > elemento) {
            vector[j + 1] = vector[j];
            j--;
        }

        vector[j + 1] = elemento;
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

    insertionSort(numeros, CANTIDAD);

    cout << "Vector ordenado:" << endl;
    mostrarVector(numeros, CANTIDAD);

    return 0;
}