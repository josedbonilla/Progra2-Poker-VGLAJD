/*! \mainpage Juego de Poker (2016)
 *
 * \section intro_sec Introduction
 *
 * Este programa trata de recrear un juego de Poker.
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Opening the box
 *
 * etc...
 */

//Controlador.

#include "stdafx.h"
#include "Mazo.cpp"
#include "Jugador.cpp"
#include "Estrategia.cpp"


int main() {
    char usuario = " " ;
    char num = " "
    while (scanf("%c %c", usuario, num) != '\0') {
        Carta cartaparaMazo = new Carta(usuario, num);
    }
    return 0;
}

