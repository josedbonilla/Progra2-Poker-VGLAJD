#include "stdafx.h"
#include "Carta.h"
#include <stdlib.h>
#include <time.h>

/*
 * del más pequeño hacia el mayor: 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K y A.
 * Espadas = e, Diamantes = d, Corazones = c & Treboles = t
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
 */
Carta::Carta() {
	palo = " ";
	numero = 0;
}

Carta::~Carta(){
	
}

void Carta::setPalo(char tipoPalo) {
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