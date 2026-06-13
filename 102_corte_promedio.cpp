#include <iostream>

using namespace std;

struct Nota{
    int dni;
    int nota;
};

void informarAlumnos(Nota vec[], int n){
    int i = 0;

    while(i < n){

        int dniActual = vec[i].dni;

        int cantidadNotas = 0;
        int sumaNotas = 0;

        while(i < n && vec[i].dni == dniActual){

            sumaNotas += vec[i].nota;
            cantidadNotas++;

            i++;
        }
        
        float promedio = (float)sumaNotas / cantidadNotas;

        cout << "DNI: " << dniActual << endl;
        cout << "Cantidad de notas: " << cantidadNotas << endl;
        cout << "Promedio: " << promedio << endl;
        cout << "---------------------" << endl;
    }
}

int main(){

    Nota notas[9] = {
        {111, 8},
        {111, 6},
        {111, 10},
        {222, 7},
        {222, 9},
        {333, 4},
        {333, 5},
        {333, 6},
        {333, 7}
    };

    informarAlumnos(notas, 9);

    return 0;
}