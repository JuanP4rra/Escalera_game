#ifndef MODODOSJUGADORES_H_INCLUDED
#define MODODOSJUGADORES_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include "rlutil.h"
#include <stdlib.h>
#include <time.h>
#include "dados.h"

//funcion para modo 2 jugadores
void modojugador2 ()
{
    int puntaje=0, puntaje2 = 0;
    int puntajeTotal = 0, puntajeTotal2 = 0;
    int puntajeRonda = 0, puntajeRonda2 = 0;
    int ronda = 0;
    int combinacion;

    rlutil::cls();

    //================================================================ BORDE NOMBRE =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::BLUE);
    rlutil::locate(43,9);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<2;costado++){
        rlutil::locate(43,10+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(43,11);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<33; partearriba++){
        rlutil::locate(44+partearriba,9);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(77,9);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<2;costadoder++){
        rlutil::locate(77,10+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(77,11);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<33; parteabajo++){
        rlutil::locate(44+parteabajo,11);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE NOMBRE ======================================================================================

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(45,10);
    std::cout << "Ingrese el nombre del jugador 1";
    char nombre[50];
    rlutil::locate(50,13);
    rlutil::showcursor();
    std::cin >> nombre;
    rlutil::cls();

//================================================================ BORDE NOMBRE =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::BLUE);
    rlutil::locate(43,9);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<2;costado++){
        rlutil::locate(43,10+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(43,11);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<33; partearriba++){
        rlutil::locate(44+partearriba,9);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(77,9);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<2;costadoder++){
        rlutil::locate(77,10+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(77,11);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<33; parteabajo++){
        rlutil::locate(44+parteabajo,11);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE NOMBRE ======================================================================================

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(45,10);
    std::cout << "Ingrese el nombre del jugador 2";
    rlutil::locate(50,13);
    rlutil::showcursor();
    char nombre2[50];
    std::cin >> nombre2;

    rlutil::setBackgroundColor(rlutil::COLOR::LIGHTBLUE);
    rlutil::cls();
    rlutil::hidecursor();
    rlutil::locate(50,10);
    std::cout << "Bienvenidos, " << nombre << " y " << nombre2 << "!" << std::endl;
    rlutil::locate(30,11);
    std::cout << "Lancen los dados y obtengan escalera o 500 puntos lo antes posible!!" << std::endl;
    rlutil::locate(30,12);
    rlutil::anykey("Presione cualquier tecla para lanzar los dados...");

    while (puntajeTotal<500&&puntajeTotal2<500&&puntaje!=500)
    {
        ronda++;
       //cartel entre turno
        rlutil::cls();
//================================================================ BORDE TURNO =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(36,9);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<5;costado++){
        rlutil::locate(36,10+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(36,14);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<48; partearriba++){
        rlutil::locate(37+partearriba,9);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,9);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<5;costadoder++){
        rlutil::locate(85,10+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,14);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<48; parteabajo++){
        rlutil::locate(37+parteabajo,14);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================

        rlutil::locate(55,10);
        std::cout << "    RONDA N°" << ronda << "    " << std::endl;
        rlutil::locate(55,11);
        std::cout << "PROXIMO TURNO: " << nombre << std::endl;
        std::cout << std::endl;
        rlutil::locate(50,11);
        std::cout << "PUNTAJE " << nombre << ": " << puntajeTotal << " PUNTOS  " << std::endl;
        rlutil::locate(50,12);
        std::cout << "PUNTAJE " << nombre2 << ": " << puntajeTotal2 << " PUNTOS" << std::endl;
        std::cout << std::endl;
        rlutil::locate(40,13);
        rlutil::anykey("Presione cualquier tecla para continuar...");

        puntajeRonda=0;
        puntajeRonda2=0;
        for (int lanzamiento = 1; lanzamiento <= 3; lanzamiento++)
        {
            rlutil::cls();
            rlutil::setColor(rlutil::COLOR::WHITE);

            srand(time(NULL));
            int Numdado[6];

            for (int i=0; i<6; i++)
            {
                Numdado[i]=rand() % 6 +1;
            }
            for (int z1=0; z1<6; z1++)
            {
                Dibujardado(Numdado[z1],10*z1+2,7);
            }

            puntaje = calcularPuntaje(Numdado);

            //calcular puntaje de la ronda
            if (puntaje==500)
            {
                lanzamiento=4; //si es escalera sale de la ronda y del juego
            }
            else if (puntaje==0)
            {
                puntajeRonda=0;
                lanzamiento=4; //Si es sexteto 6 sale de la ronda con puntaje 0
            }
            else
            {
                puntajeRonda+=puntaje;
            }

            std::cout << std::endl;

            //mostrar combinacion
            combinacion = calcularCombinacion(Numdado);
            rlutil::locate(1,12);
            switch (combinacion)
            {
            case 1:
                rlutil::locate(1,13);
                std::cout << " ¡ESCALERA! ¡GANASTE LA PARTIDA!" << std::endl;
                break;
            case 2:
                std::cout << " SEXTETO 6: Se pierden los puntos de esta ronda." << std::endl;
                break;
            case 3:
                std::cout << " SUMA DE DADOS: Se suman los valores de todos los dados." << std::endl;
                break;
            case 4:
                std::cout << " TRIO X++: X(numero del dado) * 10 puntos." << std::endl;
                break;
            case 5:
                std::cout << " SEXTETO X: X(numero del dado) * 50 puntos." << std::endl;
                break;
            default:
                break;
            }

            rlutil::locate(1,14);
            if (puntaje!=500)
            {
                rlutil::locate(1,3);
                std::cout << " Puntaje del lanzamiento: " << puntaje << std::endl;
            }

            rlutil::locate(1,15);
            if (lanzamiento==3)
            {
                puntajeTotal+=puntajeRonda;
            }
            rlutil::locate(1,4);
            std::cout << " Puntaje de la ronda: " << puntajeRonda << std::endl;
            for (int linea=0; linea<90; linea++){
                rlutil::locate(1+linea,5);
                std::cout << (char)205 << std::endl;
            }

            rlutil::locate(1,1);
            std::cout << " Turno de " << nombre << " | " << " Ronda " << ronda << " | " " Lanzamiento " << lanzamiento << " | " << " Puntaje total: " << puntajeTotal << " | " <<std::endl;
            for (int linea=0; linea<90; linea++){
                rlutil::locate(1+linea,2);
                std::cout << (char)205 << std::endl;
            }

            rlutil::locate(1,15);
            std::cout << std::endl;
            rlutil::anykey(" Presione cualquier tecla para continuar...");
        }
        if (puntaje==500)
        {
            break;
        }
               //cartel entre turno
        rlutil::cls();

//================================================================ BORDE TURNO =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(36,9);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<5;costado++){
        rlutil::locate(36,10+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(36,14);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<48; partearriba++){
        rlutil::locate(37+partearriba,9);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,9);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<5;costadoder++){
        rlutil::locate(85,10+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,14);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<48; parteabajo++){
        rlutil::locate(37+parteabajo,14);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================

        rlutil::locate(55,10);
        std::cout << "=== RONDA N°" << ronda << " ===" << std::endl;
        rlutil::locate(55,11);
        std::cout << "PROXIMO TURNO: " << nombre2 << std::endl;
        std::cout << std::endl;
        rlutil::locate(50,11);
        std::cout << "PUNTAJE " << nombre << ": " << puntajeTotal << " PUNTOS" << std::endl;
        rlutil::locate(50,12);
        std::cout << "PUNTAJE " << nombre2 << ": " << puntajeTotal2 << " PUNTOS" << std::endl;
        std::cout << std::endl;
        rlutil::locate(40,13);
        rlutil::anykey(" Presione cualquier tecla para continuar...");

        for (int lanzamiento2 = 1; lanzamiento2 <= 3; lanzamiento2++)
        {
            rlutil::cls();

         srand(time(NULL));
            int Numdado[6];

            for (int i=0; i<6; i++)
            {
                Numdado[i]=rand() % 6 +1;
            }
            for (int y1=0; y1<6; y1++)
            {
                Dibujardado(Numdado[y1],10*y1+2,7);
            }

            puntaje2 = calcularPuntaje(Numdado);

            //calcular puntaje de la ronda
            if (puntaje2==500)
            {
                lanzamiento2=4; //si es escalera sale de la ronda y del juego
            }
            else if (puntaje2==0)
            {
                puntajeRonda2=0;
                lanzamiento2=4; //Si es sexteto 6 sale de la ronda con puntaje 0
            }
            else
            {
                puntajeRonda2+=puntaje2;
            }

            std::cout << std::endl;

            //mostrar combinacion
            combinacion = calcularCombinacion(Numdado);
            rlutil::locate(1,12);
            switch (combinacion)
            {
            case 1:
                rlutil::locate(1,13);
                std::cout << " ¡ESCALERA! ¡GANASTE LA PARTIDA!" << std::endl;
                break;
            case 2:
                std::cout << " SEXTETO 6: Se pierden los puntos de esta ronda." << std::endl;
                break;
            case 3:
                std::cout << " SUMA DE DADOS: Se suman los valores de todos los dados." << std::endl;
                break;
            case 4:
                std::cout << " TRIO X++: X(numero del dado) * 10 puntos." << std::endl;
                break;
            case 5:
                std::cout << " SEXTETO X: X(numero del dado) * 50 puntos." << std::endl;
                break;
            default:
                break;
            }

            rlutil::locate(1,14);
            if (puntaje2!=500)
            {
                rlutil::locate(1,3);
                std::cout << " Puntaje del lanzamiento: " << puntaje << std::endl;
            }

            rlutil::locate(1,15);
            if (lanzamiento2==3)
            {
                puntajeTotal2+=puntajeRonda2;
            }
            rlutil::locate(1,4);
            std::cout << " Puntaje de la ronda: " << puntajeRonda2 << std::endl;
            for (int linea=0; linea<90; linea++){
                rlutil::locate(1+linea,5);
                std::cout << (char)205 << std::endl;
            }

            rlutil::locate(1,1);
            std::cout << " Turno de " << nombre2 << " | " << " Ronda " << ronda << " | " " Lanzamiento " << lanzamiento2 << " | " << " Puntaje total: " << puntajeTotal2 << " | " <<std::endl;
            for (int linea=0; linea<90; linea++){
                rlutil::locate(1+linea,2);
                std::cout << (char)205 << std::endl;
            }

            rlutil::locate(1,15);
            std::cout << std::endl;
            rlutil::anykey(" Presione cualquier tecla para continuar...");
        }
    }

    if (puntajeTotal>=500&&puntajeTotal2>=500) {
       rlutil::setBackgroundColor(rlutil::COLOR::LIGHTBLUE);
       rlutil::cls();

//================================================================ BORDE TURNO =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(36,9);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<5;costado++){
        rlutil::locate(36,10+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(36,15);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<48; partearriba++){
        rlutil::locate(37+partearriba,9);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,9);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<5;costadoder++){
        rlutil::locate(85,10+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,15);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<48; parteabajo++){
        rlutil::locate(37+parteabajo,15);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================

        rlutil::locate(50,10);
        std::cout << "=== Juego finalizado ===" << std::endl;
        rlutil::locate(50,11);
        std::cout << "EMPATE" << std::endl;
        rlutil::locate(50,12);
        std::cout << "Puntaje total de " << nombre << ": " << puntajeTotal << std::endl;
        rlutil::locate(50,13);
        std::cout << "Puntaje total de " << nombre2 << ": " << puntajeTotal2 << std::endl;
        rlutil::locate(50,14);
        std::cout << "Rondas: " << ronda << std::endl;
        rlutil::locate(35,16);
        rlutil::anykey("Presione cualquier tecla para volver al menu principal...");
    }
    if(puntajeTotal>=500||puntaje==500)
    {
        rlutil::setBackgroundColor(rlutil::COLOR::LIGHTBLUE);
        rlutil::cls();

//================================================================ BORDE TURNO =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(36,9);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<5;costado++){
        rlutil::locate(36,10+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(36,14);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<48; partearriba++){
        rlutil::locate(37+partearriba,9);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,9);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<5;costadoder++){
        rlutil::locate(85,10+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,14);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<48; parteabajo++){
        rlutil::locate(37+parteabajo,14);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================

        rlutil::locate(50,10);
        std::cout << "=== Juego finalizado ===" << std::endl;
        rlutil::locate(50,11);
        std::cout << "Jugador ganador: "<< nombre << std::endl;
        rlutil::locate(50,12);
        std::cout << "Puntaje total: " << puntajeTotal << std::endl;
        rlutil::locate(50,13);
        std::cout << "Rondas: " << ronda << std::endl;
        rlutil::locate(35,16);
        rlutil::anykey("Presione cualquier tecla para volver al menu principal...");
    }
    else
    {
        rlutil::setBackgroundColor(rlutil::COLOR::LIGHTBLUE);
        rlutil::cls();

//================================================================ BORDE TURNO =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(36,9);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<5;costado++){
        rlutil::locate(36,10+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(36,14);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<48; partearriba++){
        rlutil::locate(37+partearriba,9);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(85,9);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<5;costadoder++){
        rlutil::locate(85,10+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(85,14);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<48; parteabajo++){
        rlutil::locate(37+parteabajo,14);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE TURNO ======================================================================================

        rlutil::locate(50,10);
        std::cout << "=== Juego finalizado ===" << std::endl;
        rlutil::locate(50,11);
        std::cout << "Jugador ganador: "<< nombre2 << std::endl;
        rlutil::locate(50,12);
        std::cout << "Puntaje total: " << puntajeTotal2 << std::endl;
        rlutil::locate(50,13);
        std::cout << "Rondas: " << ronda << std::endl;
        rlutil::locate(35,16);
        rlutil::anykey("Presione cualquier tecla para volver al menu principal...");
    }
}


#endif // MODODOSJUGADORES_H_INCLUDED
