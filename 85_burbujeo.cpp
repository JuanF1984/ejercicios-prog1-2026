#include <iostream>

using namespace std;

void burbujeo(int vector[], int tamanio)
{
    int aux;

    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}

void mostrarVector(int vector[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}

int main()
{
    const int TAM = 8;

    int numeros[TAM] = {25, 12, 8, 31, 17, 5, 40, 20};

    cout << "Vector original:" << endl;
    mostrarVector(numeros, TAM);

    burbujeo(numeros, TAM);

    cout << "Vector ordenado:" << endl;
    mostrarVector(numeros, TAM);

    return 0;
}