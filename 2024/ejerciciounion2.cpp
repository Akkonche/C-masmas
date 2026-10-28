/*Programa uniones 2*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

union ejemplo
{
	char nombre[8];
	char estadoc;
	int edad;
	double estatura;
	float peso;
}datos;

main ()
{
	system("title Uniones");
	setlocale(LC_ALL,"");
		
	printf("\n Espacios que ocupa cada tipo de dato");
	printf("\n Char[8]: %d byte",sizeof(datos.nombre));
	printf("\n Char %d byte",sizeof(char));
	printf("\n Int %d byte",sizeof(datos.edad));
	printf("\n Float %d byte",sizeof(float));
	printf("\n Double %d byte",sizeof(datos.estatura));
	printf("\n Tamaño de la union: %d byte",sizeof(ejemplo));
	
	do
	{
		printf("\n Ingrese la edad: ");
		scanf("%d",&datos.edad);
		
		if(datos.edad<10 || datos.edad>70)
			printf("\n\a\a Error... Ingrese un dato dentro de 10-70\n");
		
	}
	while(datos.edad<10 || datos.edad>70);
	
	printf("\n Edad: %d",datos.edad);
	printf("\n Direccion de memoria de edad: %p",&datos.edad);
	strcpy(datos.nombre,"Andrea");
	printf("\n Nombre: %s",datos.nombre);
	printf("\n Direccion de memoria de nombre: %p",&datos.nombre);
	
	
	return 0;
}
