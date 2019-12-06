#include "stdafx.h"
#include "Carta.h"
#include <stdlib.h>
#include<time.h>

Carta::Carta() {
	numero = srand(time(NULL));
}


Carta::~Carta(){

}


char Carta::getPalo() {
	return palo;
};

int Carta::getNumero() {
	return numero;
};