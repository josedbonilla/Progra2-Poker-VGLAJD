using namespace std;
#pragma once
#include <list>
#include "Carta.h"
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
