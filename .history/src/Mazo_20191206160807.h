using namespace std;
#pragma once
#include <list>
#include "Carta.h"
class Mazo {

private:
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