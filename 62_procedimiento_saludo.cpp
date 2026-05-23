#include <iostream>
using namespace std;

// Saludo Personalizado: Crea el procedimiento saludarUsuario. 
// En el main, pedí al usuario su nombre y pasalo como argumento 
// para que el programa le dé la bienvenida.

void saludarUsuario(string nomb);

int main() {
    string nombre;
    cout<<"Ingrese nombre";
    cin>>nombre;
    saludarUsuario(nombre);
    return 0;   
}

void saludarUsuario(string nomb){
    cout<<"Bienvenido "<<nomb;
}

