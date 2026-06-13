#include <iostream>
using namespace std;
//----FUNCIONES Y PROCEDIMIENTOS-----------------
void apareo(int arr1[], int arr2[], int arr3[], int &k);
void mostrarApareo(int arr3[], int k);
//----MAIN---------------------------------------
int main(){
    int k=0;
    int arr1[]={101, 105, 106, 200, 222};
    int arr2[]={60, 85, 90, 106, 205};
    int arr3[15];
    apareo(arr1,arr2,arr3,k);
    mostrarApareo(arr3, k);
    return 0;
}
//----FUNCIONES Y PROCEDIMIENTOS-----------------
void apareo(int arr1[], int arr2[], int arr3[], int &k){
    int i=0, j=0;
    k=0;
    while (i<5&&j<5)//5 tamaño de los arreglos 1 y 2. hardcoding
    {
        if (arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }else if (arr1[i]==arr2[j]){
            arr3[k]=arr1[i];
            i++;
            j++;
        }else {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    //Pasar elementos restantes de arr1
    while(i<5){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    //Pasar elementos restantes de arr2
    while (j<5)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
void mostrarApareo(int arr3[], int k){
    for (int i=0; i<k; i++)
    {
        cout<<"Posicion: "<<i+1<<" | Codigo: "<<arr3[i]<<endl;
    }
}