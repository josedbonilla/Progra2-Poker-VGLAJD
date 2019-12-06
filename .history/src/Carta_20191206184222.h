#pragma once

#ifndef CARTA_H
#define CARTA_H
class Carta {

private:

	char palo;
	int numero;

public:
	/*
	* Constructor de la Clase
	*/
	Carta();

	/*
	* Destructor de la Clase
	*/
	~Carta();

	/*
	 *
	 */
	void setPalo();
	/*
	 *
	 */
	void setNumero();
	/*
	*
	*/
	char getPalo();

	/*
	*
	*/
	int getNumero();

};

#endif CARTA_H