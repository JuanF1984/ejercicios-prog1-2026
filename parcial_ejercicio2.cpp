#include <iostream>
#include <string>

using namespace std;

int main() {

    int cupoMaximo, diaCorte, mesCorte;
    int participantes = 0;
    int diaInscripcion, mesInscripcion;

    string categoriaRequerida;
    string nombre, categoria;

    cout << "Ingrese cupo maximo del torneo: ";
    cin >> cupoMaximo;

    cout << "Ingrese categoria requerida: ";
    cin >> categoriaRequerida;

    cout << "Ingrese dia de corte: ";
    cin >> diaCorte;

    cout << "Ingrese mes de corte: ";
    cin >> mesCorte;

    cout << "Ingrese nombre del jugador: ";
    cin >> nombre;

    while (nombre != "FIN") {

        cout << "Ingrese categoria: ";
        cin >> categoria;

        cout << "Ingrese dia de inscripcion: ";
        cin >> diaInscripcion;

        cout << "Ingrese mes de inscripcion: ";
        cin >> mesInscripcion;

        if (categoria == categoriaRequerida) {

            if ((mesInscripcion < mesCorte) ||
               ((mesInscripcion == mesCorte) && (diaInscripcion < diaCorte))) {

                if (participantes < cupoMaximo) {

                    participantes++;

                    cout << "Jugador aceptado." << endl;

                } else {

                    cout << "No hay cupo disponible." << endl;

                }

            } else {

                cout << "Inscripcion fuera de fecha." << endl;

            }

        } else {

            cout << "Categoria no permitida." << endl;

        }

        cout << "Ingrese nombre del jugador: ";
        cin >> nombre;
    }

    cout << "Cantidad total de participantes aceptados: "
         << participantes << endl;

    return 0;
}