#include <iostream>

using namespace std;

struct Evaluacion{
    int curso;
    int dni;
    int nota;
};

void informar(Evaluacion vec[], int n){
    int i = 0;

    while(i < n){

        int cursoActual = vec[i].curso;

        int cantidadAlumnos = 0;
        float sumaPromediosCurso = 0;

        cout << "\nCURSO " << cursoActual << endl;
        cout << "======================" << endl;

        while(i < n && vec[i].curso == cursoActual){

            int dniActual = vec[i].dni;

            int cantidadEvaluaciones = 0;
            int sumaNotas = 0;

            while(i < n &&
                  vec[i].curso == cursoActual &&
                  vec[i].dni == dniActual){

                sumaNotas += vec[i].nota;
                cantidadEvaluaciones++;

                i++;
            }

            float promedioAlumno =
                (float)sumaNotas / cantidadEvaluaciones;

            cout << "Alumno: " << dniActual << endl;
            cout << "Evaluaciones: "
                 << cantidadEvaluaciones << endl;
            cout << "Promedio: "
                 << promedioAlumno << endl;
            cout << "------------------" << endl;

            cantidadAlumnos++;
            sumaPromediosCurso += promedioAlumno;
        }

        float promedioCurso =
            sumaPromediosCurso / cantidadAlumnos;

        cout << "Cantidad de alumnos: "
             << cantidadAlumnos << endl;

        cout << "Promedio del curso: "
             << promedioCurso << endl;

        cout << "======================\n";
    }
}

int main(){

    Evaluacion vec[10] = {
        {1,111,8},
        {1,111,6},
        {1,222,7},
        {1,222,9},
        {2,333,4},
        {2,333,6},
        {2,444,10},
        {2,444,8},
        {2,555,7},
        {2,555,9}
    };

    informar(vec, 10);

    return 0;
}