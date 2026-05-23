#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b= 1;
    cout << "Por favor ingrese un numero entero del 1 al 3 para el informe: " << endl;
    cin >> a;
    switch (a){
        case 1: cout << "Es alta"; break;
        case 2: cout << "Es baja"; break;
        case 3: cout << "Es modificativa"; break;
        default: cout << "Ingreso un dato no valido"; break;
    }   

    return 0;
}