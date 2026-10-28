//ejercicio
#include<stdlib.h>
#include<stdio.h> 
#include<time.h>
#include<locale.>
#include<windows.h>
main()
	{
		const int tam=5;
		int vecA[tam], vecI[tam], vecR[tam], i;
		double prom;
		srand(time(NULL));
		printf ("\n\tResta de dos vectores\n");
		printf ("\n\tIngresando datos al vector\n");
		for(i=0; i<tam,i++) 
		{
				do
	{
		printf ("\n\tIngrese un numero en la posicion %d: ", i);
		scanf ("%d", &vecI[i]);
		if (vecI[i]<10||vecI[i]>40)
		printf ("\nError... Ingrese un numero entre 10 y 40");
	}
		while(vecI[i]<10||vecI[i]>40);
		vecA[i]=rand()%41+40;
		vecR[i]=vecA[i]-vecI[i];
	}
		system("cls");
		printf("\n\tResta de vectores");
		printf ("\nVector aleatorio: ");
	for (i=0; i 
	{
		printf("%5d", vecA[i]);
	}
		printf ("\nVector ingresado: ");
	for (i=0; i 
		{
		printf("%5d", vecI[i]);
		}
	
			printf ("\nVector restado: ");
		for (i=0; i {
		printf("%5d", vecR[i]);
		}
		return 0;
	}	//Rip sangria
