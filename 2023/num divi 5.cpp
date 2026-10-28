/*Programa numeros divisibles entre 5 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#define fil 3
#define col 4
main()
{
	srand(time(NULL));
	int matIng[fil][col],matAle[fil][col],suma[fil][col];
	int i,j,acumDiv=0,prom;
	int contD=0;
	
	printf("\n Ingresando Datos a la matriz\n");
	for (i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			do
			{
				printf("\n Ingrese un numero en la posicion [%d][%d]: ",i,j);
				scanf("%d",&matIng[i][j]);
				if(matIng[i][j]<10 ||matIng[i][j]>50)
					printf("\n Error, Ingrese un numero entre 10 y 50");
			}
			while (matIng[i][j]<10 || matIng[i][j]>50);
			matAle[i][j]=15+rand()%46;
			suma[i][j] = matIng[i][j] + matAle[i][j];
		}	
	}
	system("cls");
	printf("\n Matriz con datos ingresados\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%5d",matIng[i][j]);
		}
		printf("\n");
	}
	printf("\n Matriz con datos Aleatorios\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%5d",matAle[i][j]);
		}
		printf("\n");
	}
	printf("\n Matriz con datos sumados\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%5d",suma[i][j]);
		}
		printf("\n");
	}
	printf("\n Numeros divisibles entre 5: \n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			if(suma[i][j]%5 == 0)
			{
				
				printf("%5d",suma[i][j]);
				acumDiv += suma[i][j];
				contD++;
			}
		}
	}
	prom=(double)acumDiv/contD;
	printf("\n La suma de los divisibles es: %d",acumDiv);
	printf("\n El promedio es: %d",prom);
	return 0;		
}
