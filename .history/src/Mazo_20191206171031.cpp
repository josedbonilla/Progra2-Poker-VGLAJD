#include "stdafx.h"
#include "Mazo.h"

/*
 *  En ella, hay 52 cartas.
 */

Mazo::Mazo()
{
    for (int i = 0; i < 10; i++)
		listOfInts.push_back(Carta);
}


Mazo::~Mazo()
{
}


void Mazo::revolver() {
    mazo.sort()
};



/*

Carta Mazo:: repartir(){

return Carta
};



*/


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

 /////////////////////////////////////////////////////////////////
 // Inicia la funcion repartir
 ////////////////////////////////////////////////////////////////

 void Repartir( int barajadas[][14] )

 { // Abre Repartir
 const char *Numero[14] = { "error", "As", "Dos", "Tres", "Cuatro", "Cinco",
 "seis", "siete", "ocho", "Nueve", "Diez",
 "Sota", "Reina", "Rey"};

 const char *Palos[5] = { "error", "Corazones", "Treboles", "Espadas",
 "Diamantes"};

 //cout << "\nSu mano es la siguiente:\n " << endl;


 for ( int r = 1; r <= 5; r++ )
 // Se repartiran 5 cartas

 { //Abre for
 for ( int y = 1; y <= 4; y++ )
 {
 for ( int z = 1; z <= 13; z++ )
 { //Abre for doble anidado
 if ( r == barajadas[y][z])
 cout << Numero[z] << " de " << Palos[y] << endl;

 } // Cierra for doble anidado
 } //Cierra for anidado
 } //Cierra for
 } // Cierra Repartir


 */
