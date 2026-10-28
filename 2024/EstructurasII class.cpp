#include <stdio.h>
#include <windows.h>
#include <locale.h>
#define cant 2

struct direccion
{
	char colonia[50];
	int bloque,numcasa;	
};

struct empleado
{
	char nomb[50];
	char estado;
	int nacimiento;
	double sueldo,ihss,sueldon;
	struct direccion dir; 
		
}emp[cant];

double validar(double valor)
{
	while(valor <= 0)
	{
		printf("\nError....Ingrese un Numero positivo : ");
		scanf("%lf",&valor);
	}
	
	return valor;
}

main()	
{
	int i;
	int contaS=0,yearmax=0;
	double acumulaS=0,promedio,ihssmin=321;
	setlocale(LC_ALL,"");
	
	/*printf("\nIngrese la cantidad de empleado: ");
	scanf("%d",&cant);
	cant= validar(cant);
	
	struct empleado emp[cant];
	struct direccion dir[cant];*/
	
	for(i=0;i<cant;i++)
	{
		printf("\t\nDatos del Empleado %d",i+1);
		printf("\n\nNombre del Empleado: ");
		scanf("%s",&emp[i].nomb);
		
		do
		{
		printf("\nEstado civil del Empleado S/C: ");
		scanf("%s",&emp[i].estado);
		emp[i].estado=toupper(emp[i].estado);
		
		if(emp[i].estado != 'S' && emp[i].estado != 'C')
			printf("\nError....Ingrese C/S");
		}while(emp[i].estado != 'S' && emp[i].estado != 'C');
		
		if(emp[i].estado == 'S')
			contaS++;
		
		printf("\nA%co de Nacimiento: ",164);
		scanf("%d",&emp[i].nacimiento);
		emp[i].nacimiento = (int) validar(emp[i].nacimiento);
		
		if(emp[i].nacimiento > yearmax)
			yearmax = emp[i].nacimiento;
		
		printf("\nSueldo del empleado: ");
		scanf("%lf",&emp[i].sueldo);
		emp[i].sueldo = validar (emp[i].sueldo);
		
		printf("\nIngrese la colonia donde vive el empleado: ");
		scanf("%s",&emp[i].dir.colonia);
		printf("\nIngrese el numero de bloque del empleado: ");
		scanf("%d",&emp[i].dir.bloque);
		emp[i].dir.bloque = validar(emp[i].dir.bloque);
		
		printf("\nIngrese el numero de casas: ");
		scanf("%d",&emp[i].dir.numcasa);
		emp[i].dir.numcasa = validar(emp[i].dir.numcasa);
		
		if(emp[i].sueldo > 8000)
			emp[i].ihss = 320;
		else
			emp[i].ihss = emp[i].sueldo * 0.04;
			
		if (emp[i].ihss < ihssmin)
			ihssmin = emp[i].ihss;
			
		emp[i].sueldon = emp[i].sueldo - emp[i].ihss;
		
		acumulaS += emp[i].sueldon;
		
		printf("\n\n");
	}
	
	system("cls");
	for(i=0; i<cant; i++)
	{
		printf("\nDatos del Empleado %d",i+1);
		printf("\nEmpleado: %s",emp[i].nomb);
		printf("\nEstado Civil: %c",emp[i].estado);
		printf("\nA%co de Naccimiento: %d",164,emp[i].nacimiento);
		printf("\nDireccion colonia %s bloque %d casa %d ",emp[i].dir.colonia,emp[i].dir.bloque,emp[i].dir.numcasa);
		printf("\nSueldo: %.2lf",emp[i].sueldo);
		printf("\nIHSS del empleado: %.2lf",emp[i].ihss);
		printf("\nSueldo Neto: %.2lf",emp[i].sueldon);
		printf("\n\n");
	}
	promedio =(double) acumulaS/cant;
	printf("\nCantidad de empleados solteros: %d",contaS);
	printf("\nSueldo neto promedio: %.2lf",promedio);
	printf("\nEl a?o maximo de nacimiento: %d ",yearmax);
	printf("\nEl seguro minimo es de: %.2lf ",ihssmin);
	return 0;
}
