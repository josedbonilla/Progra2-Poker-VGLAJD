#include "stdafx.h"
#include "Carta.h"
#include <stdlib.h>
#include<time.h>


Carta::Carta() {
	palo = " ";
	numero = 0;
}


Carta::~Carta(){

}


char Carta::getPalo() {
	return palo;
};

int Carta::getNumero() {
	return numero;
};