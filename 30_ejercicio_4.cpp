#include <iostream>
using namespace std;

int main()
{
    int numeroAgregar;
    int sumaNum;
    float promedio;
    int cantNotas;
    numeroAgregar = 0;
    sumaNum = 0;
    promedio = 0;
    cantNotas = 0;
    // do
    // {
    //     cout << "ingrese numero";
    //     cin >> numeroAgregar;
    //     sumaNum += numeroAgregar;
    //     cantNotas++;
    // } while (numeroAgregar != 0);
    cout << "ingrese numero";
    cin >> numeroAgregar;
    while (numeroAgregar != 0)
    {
        sumaNum += numeroAgregar;
        cantNotas++;
        cout << "ingrese numero";
        cin >> numeroAgregar;
    }
    promedio = static_cast<float> (sumaNum) / cantNotas;
    cout << promedio;
    return 0;
}