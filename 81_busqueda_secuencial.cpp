#include <iostream>
using namespace std;

int busqueda (int array[], int a_buscar, const int MAX);

int main() {
    const int MAX = 5;
    int vector[MAX] = {26,99,15,22,1};
    int buscado, encontrado;
    
    cout<<"Número que desea buscar: ";
    cin>>buscado;
    
    encontrado = busqueda(vector,buscado, MAX);
    
    if (encontrado==-1){
        cout<<"Numero no encontrado";
    }
    else{
        cout<<"Numero encontrado";
    } 
    return 0;
}

int busqueda (int array[], int a_buscar, const int MAX){
    int encontrado = -1;
    // for (int i=0; i<MAX; i++){
    //     if (a_buscar == array [i]){
    //         encontrado=i;
    //         break; 
    //     }
    // }
    int i=0;
    while (i<MAX && encontrado==-1){
        if (a_buscar == array [i]){
            encontrado=i;
        }
        i++;
    }
    return encontrado;


}