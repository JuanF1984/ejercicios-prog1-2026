#include <iostream>
using namespace std;

//Ejemplo de prototipo. Se avisa al main que existe la función
//pero aún no se desarrolla, se hace luego del main, es para cuando 
//estamos seguro que vamos a usar la función, pero aún no la
//queremos desarrollar. Pero le tenemos que avisar a main que va 
//a existir

int sumar (int num1, int num2);
int restar (int num1, int num2);

int main() {
    int resultadoSuma, numero1, numero2;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese otro numero para sumar: "<<endl;
    cin>>numero2;
    //acá se invoca la función que previamente se declaro el prototipo
    resultadoSuma=sumar(numero1,numero2); 
    cout<<resultadoSuma;
    return 0;
}

//desarrollo de la función declarada

int sumar(int num1, int num2){
    return num1 + num2;
}