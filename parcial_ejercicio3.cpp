#include <iostream>

using namespace std;

int main() {

    const int MAX = 1000;

    int numeroOperacion;
    int paginas;

    char tipoProducto;

    int contadorLibros = 0;
    int contadorApuntes = 0;
    int contadorInsumos = 0;
    int totalVentas = 0;

    int operaciones[MAX];
    char tipos[MAX];

    cout << "Ingrese numero de operacion: ";
    cin >> numeroOperacion;

    while (numeroOperacion != -1 && totalVentas < MAX) {

        operaciones[totalVentas] = numeroOperacion;

        cout << "Ingrese tipo de producto (L/A/I): ";
        cin >> tipoProducto;

        tipos[totalVentas] = tipoProducto;

        if (tipoProducto == 'L') {

            cout << "Ingrese cantidad aproximada de paginas: ";
            cin >> paginas;

            contadorLibros++;

        } else {

            if (tipoProducto == 'A') {

                contadorApuntes++;

            } else {

                if (tipoProducto == 'I') {

                    contadorInsumos++;

                }

            }

        }

        totalVentas++;

        cout << "Ingrese numero de operacion: ";
        cin >> numeroOperacion;
    }

    cout << endl;
    cout << "LISTADO DE VENTAS" << endl;

    for (int i = 0; i < totalVentas; i++) {

        cout << "Operacion: " << operaciones[i]
             << " - Tipo de producto: "
             << tipos[i] << endl;
    }

    cout << endl;

    if (totalVentas > 0) {

        cout << "Porcentaje libros de texto: "
             << (static_cast<float>(contadorLibros) * 100) / totalVentas
             << "%" << endl;

        cout << "Porcentaje apuntes: "
             << (static_cast<float>(contadorApuntes) * 100) / totalVentas
             << "%" << endl;

        cout << "Porcentaje insumos de libreria: "
             << (static_cast<float>(contadorInsumos) * 100) / totalVentas
             << "%" << endl;

    } else {

        cout << "No se registraron ventas." << endl;

    }

    return 0;
}