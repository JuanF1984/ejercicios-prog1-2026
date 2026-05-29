#include <iostream>
using namespace std;

// Desarrolla una función recursiva llamada sumarNaturales que reciba un número n
// y devuelva la suma de todos los números desde 1 hasta n.
// (Ejemplo: si recibe 3, debe devolver 6, que es 3 + 2 + 1).

int sumaRecursiva(int num)
{
    if (num <= 0)
    {
        return 0;
    }
    else
    {
        return num + sumaRecursiva(num - 1);
    }
}

int main()
{
    int numero, resultado;
    do
    {
        cout << "Ingrese un numero";
        cin >> numero;
        if (numero != -1)
        {
            resultado = sumaRecursiva(numero);
            cout << "El resultado es: " << resultado << endl;
        }
    } while (numero != -1);
    return 0;
}