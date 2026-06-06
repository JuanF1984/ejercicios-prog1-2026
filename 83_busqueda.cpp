#include <iostream>

using namespace std;

int busqueda(int vector[], int tamanio, int buscado)
{
    int inicio = 0;
    int fin = tamanio - 1;
    int posicion = -1;

    while ((inicio <= fin)&&(posicion==-1))
    {
        int medio = inicio + (fin-inicio) / 2;

        if (vector[medio] == buscado)
        {
            posicion = medio;
        }
        else if (buscado < vector[medio])
        {
            fin = medio - 1;
        }
        else
        {
            inicio = medio + 1;
        }
    }

    return posicion;
}

int main()
{
    const int TAM = 10;

    int codigos[TAM] = {
        105, 118, 125, 132, 145,
        150, 167, 180, 194, 210};

    int codigo;

    cout << "Ingrese el codigo a buscar: ";
    cin >> codigo;

    int posicion = busquedaBinaria(codigos, TAM, codigo);

    if (posicion != -1)
    {
        cout << "Codigo encontrado en la posicion "
             << posicion << endl;
    }
    else
    {
        cout << "Codigo no encontrado." << endl;
    }

    return 0;
}