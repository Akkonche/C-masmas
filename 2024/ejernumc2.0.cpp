/*Ejercicio enum 5 feb*/

#include<stdio.h>
#include<windows.h>

int np,i;

enum estadoC
{
	sol,cas,viu
};

struct datosPers
{
	char nombre[50];
	double pesoK,estaturaM,imc;
	enum estadoC est;
};

void mostrar(struct datosPers*datos)
{
	char*estad;
	system("cls");
	for(i=0;i<np;i++)
	{
		printf("\n Datos de la persona");
	
		printf("\n Nombre de la persona: %s",datos[i].nombre);
		printf("\n Peso de la persona: %.2lf",datos[i].pesoK);
		printf("\n Estatura de la persona: %.2lf",datos[i].estaturaM);
		printf("\n Indice de masa corporal: %.2lf",datos[i].imc);
		printf("\n Estado civil de la persona(Numerico): %d",datos[i].est);
	
		switch(datos[i].est)
		{
			case sol:
				estad="Solter@";
				break;
			case cas:
				estad="Casad@";
				break;
			case viu:
				estad="Viud@";
				break;
		
		}
			printf("\n Estado civil de la persona(Letras): %s",estad);
	}

	
}

void ingresar(struct datosPers*datos) 
{
	for(i=0;i<np;i++)
		{
			printf("\n Datos de la persona %d",i+1);
			
			printf("\n Ingrese el nombre de la persona: ");
			scanf("%s",&datos[i].nombre);
			printf("\n Ingrese el peso de la persona: ");
			scanf("%lf",&datos[i].pesoK);
			printf("\n Ingrese la estatura de la persona: ");
			scanf("%lf",&datos[i].estaturaM);
			
			datos[i].imc=(datos[i].pesoK / datos[i].estaturaM*datos[i].estaturaM);
			
			printf("\n El indice de masa corporal es: %.2lf",datos[i].imc);
			
			do
			{
				printf("\n Ingrese el estado civil [0]Solter@,[1]Casad@,[2]Viud@: ");
				scanf("%d",&datos[i].est);
				
				if(datos[i].est<0 || datos[i].est>3)
				{
					printf("\n Error... Ingrese un numero entre el 1-3");
				}
				
			}
			while(datos[i].est<0 || datos[i].est>3);
			
		}
	
		
}


main ()
{
	printf("\n CALCULO DE INDICE DE MASA CORPORAL");
	printf("\n Ingrese el numero de personas: ");
	scanf("%d",&np);
	struct datosPers datos[np];
	ingresar(datos);
	mostrar(datos);	
	
	return 0;
	
}
