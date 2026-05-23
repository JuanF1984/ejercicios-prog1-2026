#include <iostream>
using namespace std;

int main(){
    int numero1, numero2, diferencia; 
    numero1=2;
    numero2=3;
    if (numero1<numero2){
        cout<<"El numero 2 es mayor"<<endl;
        diferencia = numero2 - numero1;
        cout<<"La diferencia entre numeros es de "<<diferencia <<endl;
    }
    return 0;
}