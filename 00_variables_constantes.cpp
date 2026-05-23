#include <iostream>
using namespace std;

int main() {
    // Variables
    int edad = 41;
    float altura = 1.75;
    string nombre = "Juan";

    // Constantes
    const float PI = 3.14159;
    const int DIAS_SEMANA = 7;
    const string PAIS = "Argentina";

    // Mostrar variables
    cout << "=== Variables ===" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << " m" << endl;

    // Mostrar constantes
    cout << "\n=== Constantes ===" << endl;
    cout << "PI: " << PI << endl;
    cout << "Dias de la semana: " << DIAS_SEMANA << endl;
    cout << "Pais: " << PAIS << endl;

    return 0;
}