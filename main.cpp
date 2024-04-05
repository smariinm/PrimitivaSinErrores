#include "Primitiva.h"
#include <iostream>
using namespace std;

int main() {
    int* numerosPrimitiva = Primitiva::generarNumerosPrimitiva();

    cout << "     _              _                   _   _        \n";
    cout << "    | |    ___   __| |_   _ _ __   __ _| |_(_) __ _  \n";
    cout << "    | |   / _ \\ / _` | | | | '_ \\ / _` | __| |/ _` | \n";
    cout << "    | |__| (_) | (_| | |_| | |_) | (_| | |_| | (_| | \n";
    cout << "    |_____\\___/ \\__,_|\\__,_| .__/ \\__,_|\\__|_|\\__,_| \n";
    cout << "    |  \\/  | ___  _ __ | | |_|_ _   _                \n";
    cout << "    | |\\/| |/ _ \\| '_ \\| |/ _` | | | |               \n";
    cout << "    | |  | | (_) | | | | | (_| | |_| |               \n";
    cout << "    |_|  |_|\\___/|_| |_|_|\\__,_|\\__,_|               \n";
    cout << endl;

    cout << "Numeros de la primitiva:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << numerosPrimitiva[i] << " ";
    }
    cout << endl;

    cout << "Reintegro: " << numerosPrimitiva[6] << endl;

    return 0;
}
