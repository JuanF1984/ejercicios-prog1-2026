#include <iostream>

using namespace std;

void insercion(int vector[], int tamanio);

void mostrarVector(int vector[], int tamanio);

int main()
{
    const int TAM = 8;

    int numeros[TAM] = {25, 12, 8, 31, 17, 5, 40, 20};

    cout << "Vector original:" << endl;
    mostrarVector(numeros, TAM);

    insercion(numeros, TAM);

    cout << "Vector ordenado:" << endl;
    mostrarVector(numeros, TAM);

    return 0;
}

void mostrarVector(int vector[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}

void insercion(int vector[], int tamanio)
{
    int i;
    int j;
    int elemento;

    for (i = 1; i < tamanio; i++)
    {
        elemento = vector[i];
        j = i - 1;

        while (j >= 0 && vector[j] > elemento)
        {
            vector[j + 1] = vector[j];
            j--;
        }

        vector[j + 1] = elemento;
    }
}