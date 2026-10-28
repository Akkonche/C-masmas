/*Fernando Avila || Derek Lagos*/

#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define tam 3 

struct subpaci
{
	double estatura,peso, peso_ideal;
};

struct paciente
{
	char nombre[50];
	char genero;
	struct subpaci pac;
}paciq[tam];

int main ()
{
	int i;	
	
	for(i=0;i<tam;i++)
	{
		printf("\n\t Codigo del paciente: %d", i+1);
		
		printf("\n Ingrese nombre del paciente: ");
		scanf("%s", paciq[i].nombre);
		
		do
		{
			printf("\n Ingrese genero del paciente: ");
			scanf(" %c", &paciq[i].genero);
			paciq[i].genero=toupper(paciq[i].genero);
			
			if(paciq[i].genero != 'M' && paciq[i].genero != 'F')
				printf("\n Error... Ingrese F o M");
		}
		while(paciq[i].genero != 'M' && paciq[i].genero != 'F');
		
		do
		{
			printf("\n Ingrese la estatura del paciente: ");
			scanf("%lf", &paciq[i].pac.estatura);
			
			if(paciq[i].pac.estatura<0.50 || paciq[i].pac.estatura>2.10)
				printf("\n Error.... Ingrese un numero entre 0.50 a 2.10");
		}
		while(paciq[i].pac.estatura<0.50 || paciq[i].pac.estatura>2.10);
		
		do
		{
			printf("\n Ingrese el peso del paciente: ");
			scanf("%lf", &paciq[i].pac.peso);
			
			if(paciq[i].pac.peso < 50 || paciq[i].pac.peso > 300)
			{
				printf("\n ERROR..... Ingrese un peso entre 50 a 300 lbs");
			}
		}
		while(paciq[i].pac.peso < 50 || paciq[i].pac.peso > 300);
		
		paciq[i].pac.peso_ideal = (paciq[i].pac.estatura - 1) * 220;
		
		system("cls");
	}
	
	system("cls");
	
	for(i=0;i<tam;i++)
	{
		printf("\n\t Datos");
		printf("\n Codigo: %d",i+1);
		printf("\nNombre: %s", paciq[i].nombre);
		printf("\nGenero: %c", paciq[i].genero);
		printf("\nEstatura: %.2lf", paciq[i].pac.estatura);
		printf("\nPeso: %.2lf", paciq[i].pac.peso);
		printf("\nPeso Ideal: %.2lf", paciq[i].pac.peso_ideal);
		
		if(paciq[i].pac.peso < paciq[i].pac.peso_ideal)
			{
				printf("\nEl peso de la persona esta por debajo del peso ideal.\n");
			}
		else
			{
				if(paciq[i].pac.peso > paciq[i].pac.peso_ideal)
				{
					printf("\nEl peso de la persona esta por encima del peso ideal.\n");
				}
				else
				{
					printf("\nLa persona tiene el peso ideal.\n");	
				}			
			}

	}
	
	return 0;
}
