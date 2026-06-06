#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define MAX_VECTOR 1000

struct Estudiante
{
    int legajo;
    string nombre;
    string apellido;
};

void cargaStructSinLimit(Estudiante arr[], int &cant);
void mostrarListado(Estudiante arr[], int cant);
void burbujeoMejor(Estudiante arr[], int cant);

int main()
{
    int cantEstudiantes = 0;
    Estudiante arrEstudiantes[MAX_VECTOR];
    cout << "-------Carga de estudiantes (CANTIDAD MAXIMA = 1000)--------" << endl;
    cargaStructSinLimit(arrEstudiantes, cantEstudiantes);
    cout << "-------Listado de estudiantes ingresados--------" << endl;
    mostrarListado(arrEstudiantes, cantEstudiantes);
    burbujeoMejor(arrEstudiantes, cantEstudiantes);
    cout << "-------Listado de estudiantes ingresados por orden de legajo--------" << endl;
    mostrarListado(arrEstudiantes, cantEstudiantes);
}

void cargaStructSinLimit(Estudiante arr[], int &cant)
{
    bool exit = false, loop = true;
    char cargarEstudiante;
    do
    {
        if (loop)
        {
            cout << "\nIngrese el legajo del alumno " << cant + 1 << ":" << endl;
            cin >> arr[cant].legajo;

            cout << "Ingrese el nombre del alumno " << cant + 1 << ":" << endl;
            cin >> arr[cant].nombre;

            cout << "Ingrese el apellido del alumno " << cant + 1 << ":" << endl;
            cin >> arr[cant].apellido;

            cant++;
            loop = false;
        }

        cout << "¿Desea cargar otro estudiante? (S/N)" << endl;
        cin >> cargarEstudiante;

        if (cargarEstudiante == 's' || cargarEstudiante == 'S')
        {
            exit = false;
            loop = true;
        }
        else if (cargarEstudiante == 'n' || cargarEstudiante == 'N')
        {
            exit = true;
        }
        else
        {
            cout << "ERROR: Respuestas posibles = 'S' o 'N'" << endl;
            loop = false;
        }
    } while (exit != true || cant > MAX_VECTOR);
}

void mostrarListado(Estudiante arr[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << "\nLegajo: " << arr[i].legajo << endl;
        cout << "Nombre: " << arr[i].nombre << endl;
        cout << "Apellido: " << arr[i].apellido << endl;
    }
}

void burbujeoMejor(Estudiante arr[], int cant)
{
    int i=0, j;
    Estudiante aux;
    bool ordenado = false;
    while (i < cant-1 && !ordenado)
    {
        ordenado = true; // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < cant - i - 1; j++)
        {
            if (arr[j].legajo > arr[j + 1].legajo)
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1]= aux;
                ordenado = false; // Cambio el flag si hice un swap
            }
        }
        i++;
    }
}
