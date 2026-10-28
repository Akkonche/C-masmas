/*Ejercicio 1 funciones */
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void captura();
int suma(int,int);
int multiplicacion(int,int);
int resta(int,int);
double division(int,int);

main()
{
	system("title Ejercicio 1 Funciones");
	printf("Calculo De Funcion");
	
	captura();
	
	printf("\n La ejecucion de la funcion ha finalizado");
	return 0;
}

void captura()
{
	int num1,num2,sum,mult,rest;
	double divi;
	
	printf("\nIngrese un numero: ");
	scanf("%d",&num1);
	printf("\nIngrese un segundo numero: ");
	scanf("%d",&num2);
	
	mult=multiplicacion(num1,num2);
	sum=suma(num1,num2);
	rest=resta(num1,num2);
	divi=division(num1,num2);
	
	printf("\n La suma de los numeros es: %d",sum);
	printf("\n La multiplicacion de los numeros es: %d",mult);
	printf("\n La resta de los numeros es: %d",rest);
	printf("\n La division de los numeros es: %2.lf",divi);
	
}

int suma(int n1,int n2)
{
	int sum;
	
	sum=n1+n2;
	
	return sum;
}
	int multiplicacion(int n1,int n2)
	{
		int mult;
	
		mult=n1*n2;
	
		return mult;
	}
	
	int resta(int n1,int n2)
	{
		int rest;
	
		rest=n1-n2;
	
		return rest;
	}
		double division(int n1,int n2)
		{
			double divi;
	
			divi=n1/n2;
	
			return divi;
		}
