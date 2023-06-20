#ifndef MODOUNJUGADOR_H_INCLUDED
#define MODOUNJUGADOR_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include "rlutil.h"
#include <stdlib.h>
#include <time.h>
#include "dados.h"

//funcion para identificar combinacion
int calcularCombinacion(int dados[])
{
    int combinacion;
    //escalera
    if (dados[0] == 1 && dados[1] == 2 && dados[2] == 3 && dados[3] == 4 && dados[4] == 5 && dados[5] == 6)
    {
        combinacion=1;
    }

//sexteto 6
    else if (dados[0] == 6 && dados[1] == 6 && dados[2] == 6 && dados[3] == 6 && dados[4] == 6 && dados[5] == 6)
    {
        combinacion=2;
    }
    else
    {
        int contnumdado [6];

        for (int c=0; c<6; c++) //inicializa contadores en 0
        {
            contnumdado[c]=0;
        }
        for (int vuelt=0; vuelt<6; vuelt++) //Cuenta cantidad de cada nro
        {
            switch (dados[vuelt])
            {
            case 1:
                contnumdado[0]++;
                break;
            case 2:
                contnumdado[1]++;
                break;
            case 3:
                contnumdado[2]++;
                break;
            case 4:
                contnumdado[3]++;
                break;
            case 5:
                contnumdado[4]++;
                break;
            case 6:
                contnumdado[5]++;
                break;
            default:
                break;
            }
        }
        //suma de dados
        combinacion=3;

        //trio x++ y sexteto
        for (int s=0; s<6; s++)
        {
            if (contnumdado[s]>2 && contnumdado[s]<6)   //trio x++
            {
                combinacion=4;
            }
            else if (contnumdado[s]==6)
            {
                combinacion=5;
            }
        }
    }
    return combinacion;
}

//funcion para calcular el puntaje
int calcularPuntaje(int dados[])
{
    int puntaje=0; //en 0 por si hay suma de dados (acumula valores)
    //escalera
    if (dados[0] == 1 && dados[1] == 2 && dados[2] == 3 && dados[3] == 4 && dados[4] == 5 && dados[5] == 6)
    {
        puntaje = 500;
    }

//sexteto 6
    else if (dados[0] == 6 && dados[1] == 6 && dados[2] == 6 && dados[3] == 6 && dados[4] == 6 && dados[5] == 6)
    {
        puntaje = 0;
    }
    else
    {
        int contnumdado [6];

        for (int c=0; c<6; c++) //inicializa contadores en 0
        {
            contnumdado[c]=0;
        }
        for (int vuelt=0; vuelt<6; vuelt++) //Cuenta cantidad de cada nro
        {
            switch (dados[vuelt])
            {
            case 1:
                contnumdado[0]++;
                break;
            case 2:
                contnumdado[1]++;
                break;
            case 3:
                contnumdado[2]++;
                break;
            case 4:
                contnumdado[3]++;
                break;
            case 5:
                contnumdado[4]++;
                break;
            case 6:
                contnumdado[5]++;
                break;
            default:
                break;
            }
        }
        //suma de dados
        for (int q=0; q<6; q++)
        {
            puntaje+=dados[q];
        }

        //trio x++ y sexteto
        for (int s=0; s<6; s++)
        {
            if (contnumdado[s]>2 && contnumdado[s]<6)   //trio x++
            {
                puntaje=(s+1)*10;
            }
            else if (contnumdado[s]==6)
            {
                puntaje=(s+1)*50;
            }
        }
    }
    return puntaje;
}

//funcion para modo 1 jugador
void modojugador1 ()
{
    int puntaje=0;
    int puntajeTotal = 0;
    int puntajeRonda = 0;
    int ronda = 0;
    int combinacion;

    rlutil::cls();

//================================================================ BORDE NOMBRE =====================================================================================================================

    rlutil::setColor(rlutil::COLOR::BLUE);
    rlutil::locate(46,9);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<2;costado++){
        rlutil::locate(46,10+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(46,11);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<24; partearriba++){
        rlutil::locate(47+partearriba,9);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(71,9);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<2;costadoder++){
        rlutil::locate(71,10+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(71,11);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<24; parteabajo++){
        rlutil::locate(47+parteabajo,11);
        std::cout << (char)205 << std::endl;
    }

//============================================================ FIN BORDE NOMBRE ======================================================================================

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::locate(50,10);
    std::cout << "Ingrese su nombre";
    rlutil::locate(50,13);
    char nombre[50];
    rlutil::showcursor();
    std::cin.getline(nombre, 100);
    rlutil::setBackgroundColor(rlutil::COLOR::LIGHTBLUE);

    rlutil::cls();
    rlutil::hidecursor();
    rlutil::locate(50,10);
    std::cout << "Bienvenido, " << nombre << "!" << std::endl;
    rlutil::locate(30,11);
    std::cout << "Lance los dados y obtenga la mayor puntuacion posible!!" << std::endl;
    rlutil::locate(30,12);
    rlutil::anykey("Presione cualquier tecla para lanzar los dados...");
    rlutil::setBackgroundColor(rlutil::COLOR::LIGHTBLUE);

    while (puntajeTotal<500&&puntaje!=500)
    {
        ronda++;

//cartel entre turno

        rlutil::setColor(rlutil::COLOR::WHITE);
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
        std::cout << " RONDA N°" << ronda << std::endl;
        std::cout << std::endl;
        rlutil::locate(50,11);
        std::cout << "PUNTAJE " << nombre << ": " << puntajeTotal << " PUNTOS" << std::endl;
        std::cout << std::endl;
        rlutil::locate(40,13);
        rlutil::anykey("Presione cualquier tecla para continuar...");

        puntajeRonda=0;
        for (int lanzamiento = 1; lanzamiento <= 3; lanzamiento++)
        {
            rlutil::cls();
            rlutil::setBackgroundColor(rlutil::COLOR::LIGHTBLUE);

            srand(time(NULL));
            int Numdado[5];

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

            rlutil::setBackgroundColor(rlutil::COLOR::LIGHTBLUE);
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
}
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
std::cout << "    Juego Finalizado    " << std::endl;
rlutil::locate(50,11);
std::cout << "Jugador: " << nombre << std::endl;
rlutil::locate(50,12);
std::cout << "Puntaje Total: " << puntajeTotal << std::endl;
rlutil::locate(50,13);
std::cout << "Rondas: " << ronda << std::endl;

rlutil::locate(35,16);
rlutil::anykey("Presione cualquier tecla para volver al menu principal...");
}

#endif // MODOUNJUGADOR_H_INCLUDED
