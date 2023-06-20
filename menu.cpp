#include <iostream>
#include "rlutil.h"
using namespace std;
#include "menu.h"
#include "modounjugador.h"
#include "mododosjugadores.h"
#include "reglas.h"
#include "mayorPuntuacion.h"

void showitem (const char* text, int posx, int posy, bool selected)
{
    if (selected)
    {
        rlutil::setBackgroundColor(rlutil::COLOR::BLUE);
    }
    else
    {
        rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
    }
    rlutil::locate(posx,posy);
    std::cout << text << std::endl;
}

void menujuego (int op, int y){

    rlutil::setColor(rlutil::COLOR::WHITE);
    rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
    rlutil::hidecursor();

    do{
    rlutil::cls();


    showitem("Modo un Jugador",50,10,y==0);
    showitem("Modo dos Jugadores",50,11,y==1);
    showitem("REGLAS",50,12,y==2);
    showitem("SALIR",50,13,y==3);

    rlutil::setBackgroundColor(rlutil::COLOR::BLACK);
    rlutil::locate(48,10 + y);
    std::cout << (char)175 << std::endl;

    rlutil::locate(1,25);
    cout<<" Participantes: Arias Natalia, Laborde Tomas y Parra Juan"<<endl;
    // COMIENZO DE BORDE
    rlutil::setColor(rlutil::COLOR::BLUE);
    rlutil::locate(46,8);
    std::cout << (char)201 << std::endl;
    for (int costado=0; costado<6;costado++){
        rlutil::locate(46,9+costado);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(46,15);
    std::cout << (char)200 << std::endl;
    for (int partearriba=0; partearriba<24; partearriba++){
        rlutil::locate(47+partearriba,8);
        std::cout << (char)205 << std::endl;
    }
    rlutil::locate(71,8);
    std::cout << (char)187 << std::endl;
    for (int costadoder=0; costadoder<6;costadoder++){
        rlutil::locate(71,9+costadoder);
        std::cout << (char)186 << std::endl;
    }
    rlutil::locate(71,15);
    std::cout << (char)188 << std::endl;
    for (int parteabajo=0; parteabajo<24; parteabajo++){
        rlutil::locate(47+parteabajo,15);
        std::cout << (char)205 << std::endl;
    }

    //fin borde

    int key = rlutil::getkey();


    switch(key){
    case 14: //UP
        y--;
        rlutil::setColor(rlutil::COLOR::WHITE);
        if (y<0){
            y=0;
        }
        break;
    case 15: //DOWN
        y++;
        rlutil::setColor(rlutil::COLOR::WHITE);
        if (y>3){
            y=3;
        }
    break;
    case 1: //ENTER
        switch(y){
    case 0:
        rlutil::setColor(rlutil::COLOR::WHITE);
        modojugador1();
        break;
    case 1:
        rlutil::setColor(rlutil::COLOR::WHITE);
        modojugador2();
        break;
    case 2:
        rlutil::setColor(rlutil::COLOR::WHITE);
        rlutil::cls();
        reglas();

        break;
    case 3:
        op=0;
        rlutil::setColor(rlutil::COLOR::WHITE);
        break;
        }
    break;

    default:
        rlutil::setColor(rlutil::COLOR::WHITE);
    break;
    }

    } while (op != 0);

}
