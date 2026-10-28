#include<stdio.h>
#include<windows.h>
#include<locale.h>

struct direccion
{
	char colonia[50];
	int bloque,numcasa;
};

struct empleado
{
	char nom[50];
	int code,year;
	
}emp;

void ingresar()
{
	int i;
	printf("\n\t Datos");
	printf("\n Ingrese nombre del empleado: ");
	scanf("%s",&emp.nom);
	
}

main()
{
	int nume,cant;
	
	system("cls");
	
	do
	{
		printf("\n\t Menu ");
		printf("\n [1] Ingresar datos");
		printf("\n [2] Mostrar datos");
		printf("\n [3] Consultar datos");
		printf("\n [4] Modificar datos");
		printf("\n [5] Salir");
	
	do
	{
		printf("\n Ingrese un numero del 1 al 5: ");
		scanf("%d",&nume);
		
		if(nume<1 || nume>5)
			printf("\n Error....Ingrese un numero dentro del rango");
	}
	while(nume<1 || nume>5);
	
	switch(nume)
	{
		case 1:
			ingresar();
			printf("\n Ingrese la cantidad de empleados ");
			scanf("%d",&cant);
			break;
		/*case 2:
			mostrar();
			break;
		case 3:
			consultar();
			break;
		case 4:
			modificar();
			break;*/
		
		case 5:
			printf("\n Gracias por usar nuestro programa");	
		
	}
	
	}while(nume!=5);
	
	return 0;
}

