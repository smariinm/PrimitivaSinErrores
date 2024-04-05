#include "Primitiva.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

namespace Primitiva {
    int* generarNumerosPrimitiva() {
        int* numerosPrimitiva = new int[7];
        srand(time(0));

        for (int i = 0; i < 6; ++i) {
            bool repetido;
            int numero;
            do {
                repetido = false;
                numero = rand() % 49 + 1;
                for (int j = 0; j < i; ++j) {
                    if (numerosPrimitiva[j] == numero) {
                        repetido = true;
                        break;
                    }
                }
            } while (repetido);
            numerosPrimitiva[i] = numero;
        }

        sort(numerosPrimitiva, numerosPrimitiva + 6);

        numerosPrimitiva[6] = rand() % 10;
        return numerosPrimitiva;
    }
}
