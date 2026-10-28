/**/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define tam 3


struct empleado
	{
		char nombre[50];
		char genero;
		int peso;
		double sueldo;	
	};

main()
{
		system("title Programa 2");
		int i,cant,tam;
		double rap,sueldoN;
		printf("Ingrese la cantidad de empleados: ");
		scanf("%d",&tam);
		struct empleado emp[tam]
		
		for(i=0;i<tam;i++)
		{
			printf("\n Datos del empleado #%d",i+1);
			printf("\n **********************");
			printf("\n Ingrese Nombre del empleado: ");
			scanf("%s",&emp[i].nombre);
			do
				{	
					printf("\n Ingrese Genero del empleado: ");
					scanf("%s",&emp[i].genero);
					emp[i].genero=toupper(emp[i].genero);
					
					if(emp[i].genero != 'F'|| emp[i].genero != 'M')
						printf("ERROR... Ingrese F o M");
			
				}	
				while(emp[i].genero != 'F'|| emp[i].genero != 'M');
				
				do
				{
					printf("\n Ingrese su peso: ");
					scanf("%d", &emp[i].peso);
					
					if (emp[i].peso<20 || emp[i].peso >270)
						printf("ERROR... Ingrese un peso valido");
				}
				while(emp[i].peso<20 || emp[i].peso>270);
				
				do
				{
					printf("\n Ingrese su sueldo : ");
					scanf("%lf",&emp[i].sueldo);
					
					if(emp[i].sueldo<0)
						printf("\n\a ERROR... Ingrese un sueldo positivo");
						
				}
				while(emp[i].sueldo<0);
				
				rap=emp[i].sueldo *0.015;
				sueldoN=emp[i].sueldo-rap;
				
				printf("\n Su rap es de : %.2lf",rap);
				printf("\n El sueldo neto es de: %.2lf",sueldoN);	
		}
		system("cls");
		
		for(i=0; i<tam; i++)
		{
			printf("\n Datos del empleado #%d",i+1);
			printf("\n **********************");
			
			printf("\n Empleado: %s", emp[i].nombre);
			printf("\n Genero: %c", emp[i].genero);
			printf("\n Peso: %d", emp[i].peso);
			printf("\n Sueldo %d", emp[i].sueldo);
			
			rap=emp[i].sueldo *0.015;
			sueldoN=emp[i].sueldo-rap;
				
			printf("\n Su rap es de : %.2lf",rap);
			printf("\n El sueldo neto es de: %.2lf",sueldoN);
		}
		return 0;		
}	
