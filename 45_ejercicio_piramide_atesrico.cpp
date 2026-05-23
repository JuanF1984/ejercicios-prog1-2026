#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese un numero: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {  

        // Espacios
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }

        // Asteriscos
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}