//Crear procedimiento de carga de vector
//se desconoce la cantidad de elementos que 
//se cargaran

#include <iostream>
using namespace std;
const int MAX = 1000;

void cargaArray (string arr[MAX], int &cantArr);
void cargarArrayPrecios (float arr[MAX], int &cantPrecios, const float IVA);

int main() {
    string nombres[MAX];
    int cantNombres=0;
    string productos [MAX];
    int cantProd =0;
    cout<<"A continuacion podra cargar nombres de clientes"<<endl;
    cargaArray(nombres, cantNombres);
    cout<<cantNombres;
    cout<<"A continuacion podra cargar productos de stock"<<endl;
    cargaArray(productos, cantProd);
    cout << cantProd;

    return 0;
}

void cargaArray(string arr[MAX], int &cantArr){
    int i=0;
    string auxNomb;
    cout<<"Ingrese dato solicitado. En caso de finalizar ingresar como nombre FIN ";
    cin>>auxNomb;
    while (auxNomb!="FIN"&& i < MAX){
        arr[i]=auxNomb;
        i++;
        cout<<"Ingrese dato solicitado. En caso de finalizar ingresar como nombre FIN ";
        cin>>auxNomb;       
    }
    cantArr = i;
}