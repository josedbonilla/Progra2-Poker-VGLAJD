using namespace std;
#pragma once
#include <list>
#include "Carta.h"

#ifndef JUGADOR_H
#define JUGADOR_H

/**
 * Clase Jugador, definicion de la clase, miembros variables y funciones miembro.
 */
class Jugador {

private:
	int dinero;
	int apuesta;
	list<Carta> mano;

public:

	/*
	*
	*/
	Jugador();
	/*
	*
	*/
	~Jugador();
	/*
	*
	*/
	bool checkJugada();
	/*
	*
	*/
	void setApuesta();
	/*
	*
	*/
	list<Carta> getMano();
};

#endif 