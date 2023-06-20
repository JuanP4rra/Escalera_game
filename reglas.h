#ifndef REGLAS_H_INCLUDED
#define REGLAS_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include "rlutil.h"
using namespace std;

void reglas() {

//================================================================ BORDE TURNO =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::BLUE);
    rlutil::locate(48,7);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<14;costado++){
        rlutil::locate(48,8+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(48,22);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<36; partearriba++){
        rlutil::locate(49+partearriba,7);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,7);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<14;costadoder++){
        rlutil::locate(85,8+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,22);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<36; parteabajo++){
        rlutil::locate(49+parteabajo,22);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================
    rlutil::setColor(rlutil::COLOR::WHITE);
       rlutil::locate(50,8);
       cout<<"El objetivo del juego es obtener"<<endl;
       rlutil::locate(50,9);
       cout<<"al menos 500 puntos en la menor"<<endl;
       rlutil::locate(50,10);
       cout<<"cantidad posible de rondas o sacar"<<endl;
       rlutil::locate(50,11);
       cout<<"una escalera en un lanzamiento."<<endl;

       rlutil::locate(50,13);
       cout<<"Para DOS jugadores el ganador"<<endl;
       rlutil::locate(50,14);
       cout<<"sera el que obtenga escalera o 500"<<endl;
       rlutil::locate(50,15);
       cout<<"puntos antes. Si ambos obtienen"<<endl;
       rlutil::locate(50,16);
       cout<<"500 puntos o mas en la misma ronda"<<endl;
       rlutil::locate(50,17);
       cout<<"se lo considerara un empate."<<endl;

       rlutil::locate(50,19);
       cout<<"Una ronda esta compuesta por 3"<<endl;
       rlutil::locate(50,20);
       cout<<"lanzamientos. Un lanzamiento"<<endl;
       rlutil::locate(50,21);
       cout<<"consiste en tirar seis dados."<<endl;

       rlutil::locate(50,24);
       system("pause");
       rlutil::cls();

//================================================================ BORDE TURNO =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::BLUE);
    rlutil::locate(48,7);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<16;costado++){
        rlutil::locate(48,8+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(48,24);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<36; partearriba++){
        rlutil::locate(49+partearriba,7);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,7);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<16;costadoder++){
        rlutil::locate(85,8+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,24);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<36; parteabajo++){
        rlutil::locate(49+parteabajo,24);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================
        rlutil::setColor(rlutil::COLOR::WHITE);
       rlutil::locate(50,8);
       cout<<"El puntaje final de la ronda"<<endl;
       rlutil::locate(50,9);
       cout<<"sera el valor maximo obtenido"<<endl;
       rlutil::locate(50,10);
       cout<<"entre los 3 lanzamientos, con las"<<endl;
       rlutil::locate(50,11);
       cout<<"siguientes excepciones:"<<endl;

       rlutil::locate(50,13);
       cout<<"- Si se obtiene escalera el"<<endl;
       rlutil::locate(50,14);
       cout<<"jugador GANA EL PARTIDO"<<endl;

       rlutil::locate(50,16);
       cout<<"- Si se obtiene una combinacion"<<endl;
       rlutil::locate(50,17);
       cout<<"de 6 dados con valor 6, el puntaje"<<endl;
       rlutil::locate(50,18);
       cout<<"de la ronda entera sera 0."<<endl;
       cout<<endl;

       rlutil::locate(50,20);
       cout<<"Para el caso de la opcion para 2"<<endl;
       rlutil::locate(50,21);
       cout<<"jugadores, los jugadores deben"<<endl;
       rlutil::locate(50,22);
       cout<<"completar una ronda de 3"<<endl;
       rlutil::locate(50,23);
       cout<<"lanzamientos alternativamente."<<endl;
       cout<<endl;
       rlutil::locate(50,26);
       system("pause");
       rlutil::cls();

//================================================================ BORDE TURNO =====================================================================================================================

rlutil::setColor(rlutil::COLOR::BLUE);
    rlutil::locate(48,7);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<11;costado++){
        rlutil::locate(48,8+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(48,19);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<36; partearriba++){
        rlutil::locate(49+partearriba,7);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,7);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<11;costadoder++){
        rlutil::locate(85,8+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,19);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<36; parteabajo++){
        rlutil::locate(49+parteabajo,19);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================
        rlutil::setColor(rlutil::COLOR::WHITE);
       rlutil::locate(50,8);
       cout<<"El puntaje de un lanzamiento esta"<<endl;
       rlutil::locate(50,9);
       cout<<"determinado por las siguientes"<<endl;
       rlutil::locate(50,10);
       cout<<"combinaciones, se sumara el"<<endl;
       rlutil::locate(50,11);
       cout<<"lanzamiento con mayor puntaje"<<endl;

       rlutil::locate(50,13);
       cout<<"- Suma de dados: Menos de 3 dados"<<endl;
       rlutil::locate(50,14);
       cout<<"con el mismo valor. Puntaje: Suma"<<endl;
       rlutil::locate(50,15);
       cout<<"de los valores de todos los dados."<<endl;
       rlutil::locate(50,16);
       cout<<" Trio X++(x es el numero del dado):"<<endl;
       rlutil::locate(50,17);
       cout<<"De 3 a 5 dados con el mismo valor"<<endl;
       rlutil::locate(50,18);
       cout<<"Puntaje: X*10 puntos"<<endl;

       rlutil::locate(50,21);
       system("pause");
       rlutil::cls();

       //================================================================ BORDE TURNO =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::BLUE);
    rlutil::locate(48,7);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<11;costado++){
        rlutil::locate(48,8+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(48,18);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<36; partearriba++){
        rlutil::locate(49+partearriba,7);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,7);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<11;costadoder++){
        rlutil::locate(85,8+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,18);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<36; parteabajo++){
        rlutil::locate(49+parteabajo,18);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================

        rlutil::setColor(rlutil::COLOR::WHITE);
       rlutil::locate(50,8);
       cout<<"- Sexteto X: 6 dados iguales"<<endl;
       rlutil::locate(50,9);
       cout<<"(menos para el 6). Puntaje:"<<endl;
       rlutil::locate(50,10);
       cout<<"X* 50 puntos"<<endl;

       rlutil::locate(50,12);
       cout<<"- Escalera: 1,2,3,4,5,6. GANA EN"<<endl;
       rlutil::locate(50,13);
       cout<<"ESA RONDA"<<endl;

       rlutil::locate(50,15);
       cout<<"- Sexteto 6: Seis 6."<<endl;
       rlutil::locate(50,16);
       cout<<"PIERDE TODOS LOS PUNTOS"<<endl;
       rlutil::locate(50,17);
       cout<<"-- Fin de las reglas --"<<endl;

       rlutil::locate(50,20);
       system("pause");
       rlutil::cls();

}

#endif // REGLAS_H_INCLUDED
