#include <iostream>
using namespace std;
int adicion;

int suma(int num1, int num2, bool bandera){
    adicion = num1 + num2;
    if(adicion<100) bandera = true;
    return adicion;
    
}

int resta (int n1, int n2){
    
}

int main() {
    int numero1=5, numero2=6, resultado;
    resultado=suma(5,6, false);
    cout<<resultado<<adicion;
   
    return 0;
}