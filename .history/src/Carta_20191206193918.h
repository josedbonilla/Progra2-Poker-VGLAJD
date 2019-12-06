#pragma once

#ifndef CARTA_H
#define CARTA_H

/**
 * Clase Carta, definicion de la clase, miembros variables y funciones miembro.
 */
class Carta {

private:

	char palo;
	int numero;

public:
	/*
	* Constructor de la Clase.
	*/
	Carta(char, char);

	/*
	* Destructor de la Clase.
	*/
	~Carta();

	/*
	 * Metodo para establecer el valor de la variable miembro Palo.
	 */
	void setPalo(char);

	/*
	 * Metodo para establecer el valor de la variable miembro Numero.
	 */
	void setNumero(char);
	
	/*
	* Metodo para retornar el valor de la variable miembro Palo.
	* @return Palo.
	*/
	char getPalo();

	/*
	* Metodo para retornar el valor de la variable miembro Numero.
	* return numero.
	*/
	int getNumero();
	void print();

};

#endif