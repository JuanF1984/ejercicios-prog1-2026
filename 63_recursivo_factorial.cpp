#include <iostream>
using namespace std;

int factorial (int n){
    int resultado;
    //caso base
    if (n==0 || n==1){
        resultado = 1;
    }
    // caso recursivo
    else{
        resultado=n*factorial(n-1);
    }
    return resultado;
}

int main() {
    int numero = 3; 
    cout<<factorial (3);
    return 0;
}