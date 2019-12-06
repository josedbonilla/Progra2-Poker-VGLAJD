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

	repartir();
	barajar();
	Analizar();
	//Carta repartir();




};
