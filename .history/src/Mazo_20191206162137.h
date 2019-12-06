using namespace std;
#pragma once
#include <list>
#include "Carta.h"
class Mazo {

private:
	const int Numero_Palos = 4;  //cantidad de Palos dentro de la baraja
 	const int Cartas_de_Palo = 13;
	list <Carta> mazo;


public:
	Mazo();
	~Mazo();



	void revolver();

	void repartir();
	void barajar();
	void Analizar();
	//Carta repartir();




};