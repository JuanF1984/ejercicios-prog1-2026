#include <iostream>
using namespace std;

int main() {
    int segundos, minutos, restoSegundos;

    segundos=133;

    minutos = segundos/60;
    restoSegundos = segundos%60;
    cout<<"minutos "<<minutos<<"segundos "<<restoSegundos;

    return 0;
}