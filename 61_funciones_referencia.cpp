#include <iostream>
using namespace std;

int incrementar (int num1){
   return num1++;
    
}

int main() {
    int numero1= 5;
    int num1; 
    num1=incrementar(numero1);
    cout<<num1;
    return 0;
}