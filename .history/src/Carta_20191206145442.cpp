#include "stdafx.h"
#include "Carta.h"
#include <stdlib.h>
#include<time.h>


Carta::Carta() {
	palo = ;
	numero = rand();  // guardar el número aleatorio.
}


Carta::~Carta(){

}


char Carta::getPalo() {
	return palo;
};

int Carta::getNumero() {
	return numero;
};