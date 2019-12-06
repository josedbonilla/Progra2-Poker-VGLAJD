using namespace std;
#pragma once
#include "Carta.h"
#include <list>

#ifndef ESTRATEGIA_H
#define ESTRATEGIA_H

/**
 * Clase Estrategia, definicion de la clase, miembros variables y funciones miembro.
 */

/* 
 * https://www.reydepoker.com/jugadas-de-poker/
 * Escalera Real, escalera de color, poker, full, 
 * color, escalera, trío, doble pareja, pareja y carta mayor.
 */

class Estrategia
{
public:
	Estrategia();
	~Estrategia();

	void generarJugadas();

	void BuscarBuenaJugada();

	void OrdenarCartas(list<Carta>);








};

#endif ESTRATEGIA_H
/*
int Analizar( int xcartas[][14], int Fig[], int Num[] )

 { //Abre Analizar

 int temp = Fig[1];
 int iguales = 1;
 int corrida = 0;
 int valor = 1; //El valor de la mano es 1, siempre habra una carta
 // de mayor valor;

 //Aqui se analizan los numeros

 int temp2[14] = {0 };
 for ( int s = 1; s <= 5; s++ )
 { // Abre for
 temp2[Num[s]]++;

 } //Cierra for


 int contador_pares = 0;
 int contador_tercia = 0;
 int contador_poquer = 0;

 for ( int w = 1; w <= 14; w++ )
 { //Abre for
 if ( 2 == temp2[w] )
 contador_pares++;

 if ( 3 == temp2[w] )
 contador_tercia = 1;

 if ( 4 == temp2[w] )
 {
 contador_poquer = 1;
 }

 } //Cierra for

 if ( 0 != contador_pares )
 {
 cout <<"\nUsted tiene " << (1 == contador_pares? " 1 par " :
 " dos pares") << endl;
 if ( 1 == contador_pares)
 valor = 2;
 else
 valor = 3;
 }

 if ( 1 == contador_tercia )
 { // Abre if
 cout <<(0 != contador_pares? "y 1 tercia ( Un full). " :
 "\nUsted tiene una tercia. ");
 if ( 1 == contador_pares )
 valor = 7;
 else
 valor = 4;
 } // Cierra if

 if ( 1 == contador_poquer )
 {
 cout <<"\nUsted tiene un poquer. " << endl;
 valor = 8;
 }



 //En este ciclo for se analizan las figuras


 for ( int i = 2; i <= 5; i ++ )
 { // Abre for
 if ( Fig[ i ] != temp )
 { // Abre if
 iguales = -1;
 } // Cierra if
 } // Cierra for

 /////////////////////////////////////////////////////////////////////
 // Despues de haber analizado el color, se usa esa informacion

 if ( 1 == iguales )
 { //Abre if de iguales

 corrida = Corrida( Num );
 // La funcion corrida verifica que los numeros sean consecutivos
 int flor; // Se verifica que haya flor imperial
 if ( 0 == corrida )
 { // Abre if anidado
 flor = Flor_Imperial(Num);
 if ( 0 == flor )
 { //Abre if doble anidado
 cout <<"\n\nUsted tiene un flux!" << endl;
 valor = 6;
 } //Cierra if doble anidado
 else
 { // Abre else doble anidado
 cout <<"\n\nUSTED TIENE UNA FLOR IMPERIAL!" << endl << endl;
 valor = 10;
 } // Cierra else doble anidado
 } // Cierra if anidado

 else // Abre else anidado
 {
 cout << "\nUsted tiene una escalera de color!" << endl;
 valor = 9;
 } //Cierra else anidado


 } // Cierra if de colore iguales




 else
 { //Analiza escalera para el caso de colores distintos
 int escalera;
 escalera = Corrida( Num);

 if ( 1 == escalera )
 { // Abre if anidado
 cout << "\nUsted tiene una escalera. " << endl;
 valor = 5;
 } // cierra if anidado
 } // Cierra else

 cout << "\nEl valor de su mano es: " << valor << endl;
 return valor;
 } //Cierra Analizar
 */