#include <iostream>
using namespace std;

// Intercambio de Valores: Crea el procedimiento intercambiar. 
// En el main, declará dos variables (ej: a = 5 y b = 10), 
// llamá al procedimiento y luego imprimí los valores en el main 
// para comprobar que ahora a vale 10 y b vale 5.

void intercambiar (int &n1, int &n2);

int main() {
    int a=5;
    int b=10;
    intercambiar(a,b);
    cout<<"El valor de a es: "<<a<<endl;
    cout<<"El valor de b es: "<<b<<endl;
    return 0;
}

void intercambiar (int &n1, int &n2){
    int temp=n1;
    n1=n2;
    n2=temp;
}