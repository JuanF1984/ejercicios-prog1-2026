#include <iostream>
using namespace std;

int main() {
    int opcion;
    do{
        cout<<"Ingrese opcion:"<<endl;
        cout<<"Ingrese opcion 1"<<endl;
        cout<<"Ingrese opcion 2"<<endl;
        cout<<"Ingrese opcion 3"<<endl;
        cout<<"Ingrese opcion 4 para salir"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            /* Ejecuta 1 */
            break;
        case 2: 
            /* Ejecuta 2 */
            break;
        default:
            //Ingrese numero valido 
            break;
        }
        
    }while(opcion!=4);
    return 0;
}