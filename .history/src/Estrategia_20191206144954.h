using namespace std;
#pragma once
#include "Carta.h"
#include  <list>


/**
 * 
 * https://www.reydepoker.com/jugadas-de-poker/
 * 
 */

class Estrategia
{
public:
	Estrategia();
	~Estrategia();

	void generarJugadas();

	void BuscarBuenaJugada();

	void OrdenarCartas(list<Carta>);








};

