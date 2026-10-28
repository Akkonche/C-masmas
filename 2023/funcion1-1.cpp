#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<locale.h>

void captura(); //prototipo de la funcion		//no retornara con void
void suma(int,int);
main()
{
	system("title Funciones");	
	setlocale(LC_ALL,"");
	
	captura();
	
	printf("\n La Ejecucion de la Funcion a finalizado");
	return 0;
}

void captura()
{
	int num1,num2;
	
	printf("Ingrese el primer numero: ");
	scanf("%d",&num1);	
	printf("Ingrese el segundo numero: ");
	scanf("%d",&num2);	
	
	suma(num1,num2);
	
}
void suma(int n1,int n2)
{
	int suma;
	
	suma=n1+n2;
	
	printf("La suma de los numeros es: %d",suma);	
}
