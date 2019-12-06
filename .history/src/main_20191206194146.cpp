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
#include "Carta.cpp"
/*
#include "Mazo.cpp"
#include "Jugador.cpp"
#include "Estrategia.cpp"
*/

int main() {
    char usuario;
    char num;
    int contador = 1;
    while (scanf("%c %c", usuario, num) != '\0') {
        Carta cartaparaMazo = new Carta(usuario, num);
        cartaparaMazo.print(contador);
        contador++;
    }
    
    return 0;
}

