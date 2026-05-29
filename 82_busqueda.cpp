#include <iostream>

using namespace std;

int main()
    const int DIAS_SEMANA = 7;
{
    int ventas[DIAS_SEMANA] = {120, 95, 110, 80, 150, 90, 130};

    int dia;

    cout << "Ingrese un dia de la semana (1 a 7): ";
    cin >> dia;

    int posicion = dia - 1;

    cout << "Las ventas del dia " << dia
         << " fueron: $" << ventas[posicion] << endl;

    return 0;
}