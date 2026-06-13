#include <iostream>

using namespace std;

struct Venta{
    int sucursal;
    float importe;
};

void informarVentas(Venta vec[], int n){
    int i = 0;
    int sucursalActual;
    int cantidadVentas;
    float totalVendido;

    while(i < n){

        sucursalActual = vec[i].sucursal;

        cantidadVentas = 0;
        totalVendido = 0;

        while(i < n && vec[i].sucursal == sucursalActual){

            cantidadVentas++;
            totalVendido += vec[i].importe;

            i++;
        }

        cout << "Sucursal: " << sucursalActual << endl;
        cout << "Cantidad de ventas: " << cantidadVentas << endl;
        cout << "Total vendido: $" << totalVendido << endl;
        cout << "------------------------" << endl;
    }
}

int main(){

    Venta ventas[8] = {
        {1, 1000},
        {1, 2500},
        {1, 3000},
        {2, 1500},
        {2, 5000},
        {3, 2000},
        {3, 4000},
        {3, 1000}
    };

    informarVentas(ventas, 8);

    return 0;
}