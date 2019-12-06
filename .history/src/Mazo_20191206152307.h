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

/*

 // Esta funcion define las variables y llama a las funciones
 // barajar y repartir

 //////////////////////////////////////////////////////////////////
 // Inicia la funcion barajar
 /////////////////////////////////////////////////////////////////

 void Barajar(int Mazo[][14], int xFiguras[], int xNumeros[] )

 { // Abre barajar

 int contador;
 int tipo_carta;
 int numero_carta;

 for ( contador = 1; contador <= 52; contador++ )
 { //Abre for
 // El numero de cartas a llenar es 52, las entradas de la variable
 // mazo.
 do{ //Abre do
 tipo_carta = 1 + rand() % 4; //Se elige al azar la columna y la
 numero_carta = 1 + rand() % 13; //fila del arreglo mazo en donde
 // se pondra el numero siguiente
 } while( 0 != Mazo[tipo_carta][numero_carta] ); //Cierra do
 //Con la condicion del while se cuida que no se llene una casilla
 // ya llenada


 if ( 0 == Mazo[tipo_carta][numero_carta] )
 // Este if es porque es muy probable que la fila y columna elegida
 // ya este llena, sobre todo para los numeros finales
 { // Abre if
 Mazo[tipo_carta][numero_carta] = contador;
 xFiguras[contador] = tipo_carta;
 xNumeros[contador] = numero_carta;
 } //Cierra if
 } //Cierra for

 return;
 } // Cierra barajar

 */