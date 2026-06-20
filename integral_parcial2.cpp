#include <iostream>
#include <string>
using namespace std;
const int MAX = 1000;

struct Socio {
    int numSocio;
    string apellidoNombre;
    string dni;
    char cat;
}

bool busquedaBinaria (int dato, Socio socios[]){
    int inicio = 0;
    int fin = n-1;

    while (inicio <= fin)
    {
        int medio = inicio + (fin - inicio)/2;
        if (socios[medio].numeroSocio == dato)
        {
            return true;
        }

        if (socios[medio].numeroSocio > dato)
        {
            inicio = medio + 1;
        }else
        {
            fin = medio - 1;
        }
    }

    return false;
}

void insertar(Socio nuevo, Socio socios[], int &cant){
     int pos = cant;

    while (pos > 0 && vec[pos - 1].nroSocio > nuevo.nroSocio) {
        socios[pos] = socios[pos - 1];
        pos--;
    }

    socios[pos] = nuevo;
    cant++;
}

int main() {
    int numSocio, cantidad; //cantidad indica los socios cargados
    Socio datoIngresar;
    Socio sociosCargados[MAX];
    bool encontrado;
    cout<<"Ingrese numero de socio a ingresar: "<<endl;
    cin>>numSocio;
    encontrado = busquedaBinaria(numSocio, sociosCargados);
    if(!encontrado){
        datoIngresar.numSocio = numSocio;
        cout<<"Ingrese apellido y nombre"<<endl;
        getline (cin, datoIngresar.apellidoNombre);
        cout<<"Ingrese dni"<<endl;
        cin>>datoIngresar.dni;
        cout<<"Ingrese categoria"<<endl;
        cin>>datoIngresar.cat;
        insertar(datoIngresar, sociosCargados, cantidad);
    }else{
        cout<<"Ese numero de socio ya esta registrado"<<endl;
    }
    return 0;
}