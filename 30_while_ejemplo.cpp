#include <iostream>
using namespace std;

int main() {
    int i= 1;
    int acumulador=0;
    while (i<=5) //i = 1
    {
        cout<<"Ciclo numero: "<<i<<endl;
        acumulador += i;
        i++;
        
    }
    cout<<"La suma del numero de ciclos es igual a :" << acumulador << endl;
    
    return 0;
}