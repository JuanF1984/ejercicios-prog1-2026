// Una institución educativa necesita registrar estudiantes. De cada estudiante se conoce su número de 
// legajo, nombre y apellido.

// Se pide:

// 1. Definir una estructura Estudiante.
// 2. Cargar los datos en un vector mediante una función. La carga finalizará cuando el usuario 
// responda N o n a la pregunta "¿Desea cargar otro estudiante?" o cuando se complete la capacidad 
// máxima del vector.
// 3. Mostrar el listado cargado.
// 4. Ordenar el vector por número de legajo de menor a mayor utilizando el algoritmo de Burbujeo 
// Mejorado.
// 5. Mostrar el listado ordenado.


#include <iostream>
using namespace std;

struct Estudiante{
    int legajo;
    string nombre;
    string apellido;
};

const int MAX = 1000; 

void cargarEstudiantes(Estudiante estudiantes[], int &cantEst){

}

void mostrarEstudiantes(Estudiante estudiantes[], int cantEst){

}


int main() {
    int cantidad=0;
    Estudiante estudiantes[MAX];
    cargarEstudiantes(estudiantes, cantidad);
    return 0;
}