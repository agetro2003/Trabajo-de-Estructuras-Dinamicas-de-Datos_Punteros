// Nombre: Jesús Ortega
// C.I.: 29.891.702

// Ejercicio de punteros: operadores new y delete.

/* Este programa utiliza los operadores new y delete en la creacion
 de arreglos dinamicos.
 De forma que el usuario introducira la cantidad de memoria que se reserva 
 para el arreglo */

#include <iostream>
#include <conio.h>
#include <stdlib.h>

int *array, cantidad_numeros;

int main() {
	
	//Creacion del arreglo dinamico
	printf ("Escriba la cantidad de numeros que desea introducir: \n ");
	scanf ("%d", &cantidad_numeros);
	array = new int[cantidad_numeros] ;
	
	//Ciclo para recibir valores
	printf ("Introduzca los valores del arreglo: \n");
	for(int i=0;i<cantidad_numeros;i++)	{
		printf ("\n array[%d] = ", i);
		scanf ("%d", &array[i]);
	}
	
	//Ciclo para mostrar valores
	printf ("\n El arreglo se muestra a continuacion: \n");
	for(int i=0; i<cantidad_numeros;i++)	{
		printf ("\n array[%d] = %d ", i,array[i]);
	}
	//liberar memoria del arreglo
	delete[] array;
	//Fun del codigo
	return 0;
}
 
