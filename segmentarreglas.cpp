#include <iostream>
#include <cstdlib>
#include "rlutil.h"
#include <stdlib.h>
#include <time.h>
#include "reglas.h"



void segmentar_reglas(const char* reglas) {
  const int CARACTERES_POR_RENGLON = 34;
    const int RENGLONES_POR_PAGINA = 10;
    int contadorCaracteres = 0;
    int contadorRenglones = 0;

    for (int i = 0; reglas[i] != '\0'; i++) {
        std::cout << reglas[i];
        contadorCaracteres++;

        if (contadorCaracteres == CARACTERES_POR_RENGLON) {
            std::cout << std::endl;
            contadorCaracteres = 0;
            contadorRenglones++;

            if (contadorRenglones == RENGLONES_POR_PAGINA) {
                std::cout << "-- Presiona cualquier tecla para continuar --" << std::endl;
                std::system("pause");
                std::system("cls");
                std::cout << std::endl;
                contadorRenglones = 0;
            }
        }
    }

    std::cout << std::endl;
    std::cout << "-- Fin de las reglas --" << std::endl;
}
