#include <iostream>
using namespace std;

int main() {
    int edad;
    do {
        cout << "Ingrese su edad (0-120): ";
        cin >> edad;
        if (edad < 0 || edad > 120) {
            cout << "Error: Esa edad esta fuera de rango. Por favor, intente de nuevo." << endl;
        }
    } while (edad < 0 || edad > 120);
    cout << "Edad validada correctamente: " << edad << endl;
    return 0;
}