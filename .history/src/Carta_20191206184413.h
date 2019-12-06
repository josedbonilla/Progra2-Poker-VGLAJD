#pragma once

#ifndef CARTA_H
#define CARTA_H
class Carta {

private:

	char palo;
	int numero;

public:
	/*
	* Constructor de la Clase.
	*/
	Carta();

	/*
	* Destructor de la Clase.
	*/
	~Carta();

	/*
	 * Metodo para establecer el valor de la variable miembro Palo.
	 */
	void setPalo();

	/*
	 * Metodo para establecer el valor de la variable miembro Numero.
	 */
	void setNumero();
	
	/*
	* Metodo para retornar el valor de la variable miembro Palo.
	*/
	char getPalo();

	/*
	* Metodo para retornar el valor de la variable miembro Numero.
	*/
	int getNumero();

};

#endif CARTA_H