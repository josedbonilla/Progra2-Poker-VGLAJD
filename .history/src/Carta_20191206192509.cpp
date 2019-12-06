#include "stdafx.h"
#include "Carta.h"
#include <stdlib.h>
#include <time.h>

/*
 * 2
 * 3
 * 4
 * 5
 * 6 
 * 7
 * 8
 * 9     TAB
 * 10    LF
 * 74    J
 * 81    Q
 * 75    K
 * 65    A
 * 
 * 67    C
 * 68    D
 * 69    E
 * 84    T
 */
Carta::Carta() {
	palo = " ";
	numero = 0;
}

Carta::~Carta(){
	
}

void Carta::setPalo( char tipoPalo ) {
	palo = tipoPalo;
}

void Carta::setNumero( char numeroCarta ) {

}

char Carta::getPalo() {
	return palo;
};

int Carta::getNumero() {
	return numero;
};