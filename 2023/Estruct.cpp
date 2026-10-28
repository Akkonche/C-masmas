#include<stdio.h>
#include<windows.h>

struct empleado
	{
		char nom[50];
		char estadoC;
		int edad;
		double sueldo;
	} E1;
	
	main()
	{
		printf("\n Datos del empleado #1");
		printf("\n Ingrese el nombre del empleado: ");
		scanf("%s",&E1.nom);
		printf("\n Ingrese el estado civil del empleado: ");
		scanf("%s",&E1.estadoC);
		printf("\n Ingrese la edad del empleado: ");
		scanf("%d",&E1.edad);
		printf("\n Ingrese el sueldo del empleado: ");
		scanf("%lf",&E1.sueldo);
		system("cls");
		printf("\n Datos del empleado #1");
		printf("\n Empleado: %s",E1.nom);
		printf("\n Estado Civil: %s",E1.estadoC);
		printf("\n Edad: %d",E1.edad);
		printf("\n Sueldo: %lf",E1.sueldo);
		return 0;
	}

