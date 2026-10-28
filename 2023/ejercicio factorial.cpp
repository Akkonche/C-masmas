/*Ejercicio factorial*/

#include<stdio.h>

long int factorial(int n)
{
	long int f;
	
	if(n<=1) /*Caso Terminacion*/
		return 1;  	
	else
		{
			f=n*factorial(n-1);
			printf("\t%5ld",f);		
		}
	return f;
}

main()
{
	int num;
	long int fact;
	printf("\n\t Factorial de un numero");
	printf("\n\t **********************");
	
	printf("\n Ingrese un numero: ");
	scanf("%d",&num);
	
	fact=factorial(num); 
	printf("\n El factorial de %d es: %ld",num,fact);
		
	return 0;
}
