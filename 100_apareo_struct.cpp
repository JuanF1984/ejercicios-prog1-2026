#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    int dni;
    string nombre;
};

void apareo(Persona vecA[], int n, Persona vecB[], int m, Persona vecC[], int &k)
{
    int i = 0;
    int j = 0;
    k = 0;

    while (i < n && j < m)
    {
        if (vecA[i].dni < vecB[j].dni)
        {
            vecC[k] = vecA[i];
            i++;
        }
        else if (vecA[i].dni == vecB[j].dni)
        {
            vecC[k] = vecA[i];
            i++;
            j++;
        }
        else
        {
            vecC[k] = vecB[j];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        vecC[k] = vecA[i];
        i++;
        k++;
    }

    while (j < m)
    {
        vecC[k] = vecB[j];
        j++;
        k++;
    }
}

int main()
{
    int n = 4, m = 5;
    int c = n + m;
    Persona vecA[n] = {
        {100, "Ana"},
        {300, "Carlos"},
        {500, "Pedro"},
        {600, "Laura"}};

    Persona vecB[m] = {
        {200, "Maria"},
        {400, "Juan"},
        {600, "Laura"},
        {700, "Roberto"},
        {800, "Marta"}};

    Persona vecC[c];
    int cantidad;

    apareo(vecA, n, vecB, m, vecC, cantidad);

    cout << "Vector resultante:" << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << vecC[i].dni << " - "
             << vecC[i].nombre << endl;
    }

    return 0;
}