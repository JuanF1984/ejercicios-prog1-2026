#include <iostream>
using namespace std;

typedef struct
{
    double temp;
    int dia;
    int mes;
    int año;
    string tipo; 
        
} Temperatura;



void burbujeo(Temperatura vector[], int cantidad) {
   Temperatura aux; 

    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {

            if (vector[j].temp > vector[j + 1].temp) {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }

        }
    }
}

void mostrarVector(Temperatura vector[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << vector[i].dia <<" - " <<vector[i].temp<<endl;
    }
    cout << endl;
}

void cargaVector (Temperatura array[], int cantidad ){
    for (int i=0; i<cantidad; i++){
        cout<<"Ingrese temperatura: ";
        cin>>array[i].temp;
        cout<<"Ingrese dia: ";
        cin>>array[i].dia;
    }
}

int main() {
    const int CANTIDAD = 3;
    Temperatura tempSemana[CANTIDAD] = {};
    cargaVector(tempSemana, CANTIDAD);
    

    // cout << "Vector original:" << endl;
    // mostrarVector(numeros, CANTIDAD);

    burbujeo(tempSemana, CANTIDAD);

    // cout << "Vector ordenado:" << endl;
    mostrarVector(tempSemana, CANTIDAD);

    return 0;
}