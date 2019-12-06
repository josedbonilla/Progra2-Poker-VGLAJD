using namespace std;
#pragma once
#include "Carta.h"
#include <list>


/**
 * 
 * https://www.reydepoker.com/jugadas-de-poker/
 * Escalera Real, escalera de color, poker, full, 
 * color, escalera, trío, doble pareja, pareja y carta mayor.
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

