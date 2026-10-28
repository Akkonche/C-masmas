/*Programa Uniones*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

union datosP
{
	char nombre[50];
	char genero;
	int edad;
	double estatura;
}datos;

main ()
{
	system("title Uniones");
	setlocale(LC_ALL,"");
	
	printf("\n\t Datos");
	strcpy(datos.nombre,"Karina");	
	printf("\n Nombre: %s",datos.nombre);
	datos.genero='f';
	printf("\n Genero: %c",datos.genero);
	datos.edad=20;
	printf("\n Edad: %d",datos.edad);
	datos.estatura=1.75;
	printf("\n Estatura: %.2lf",datos.estatura);
	
	return 0;
}
