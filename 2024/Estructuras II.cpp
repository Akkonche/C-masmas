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
	char estadoc;
	int year;
	double sueldo,ihss,sueldon;
	
};

double validar(double valor)
{
	while(valor < 0)
	{
		printf("\n Error... Ingrese un numero positivo");
		scanf("%lf",&valor);
	}
	
	return valor;
	
}


main()
{
	setlocale(LC_ALL,"");
	int i;
	int cant,contaS=0,yearmax=0;
	double acumlaS=0,ihssmin=0,promedio;
	
	printf("\n Ingrese la cantidad de empleados ");
	scanf("%d",&cant);
	cant=validar(cant);
	
	struct empleado e[cant];
	struct direccion dir[cant];
	
	for (i=0;i<cant; i++)
	{
		printf("\n\t Datos del empleado %d",i+1);
		printf("\n Ingrese el nombre del empleado: ");
		scanf("%s",&e[i].nom);
		
		do
		{
			printf("\n Ingrese el estado civil del empleado S/C: ");
			scanf("%s",&e[i].estadoc);
			e[i].estadoc=toupper(e[i].estadoc);
			
			if(e[i].estadoc != 'S' && e[i].estadoc !='C')
				printf("\n Error... Ingrese S o C");
		}
		while(e[i].estadoc != 'S' && e[i].estadoc !='C');
		
		if(e[i].estadoc =='S')
			contaS++;
		
		printf("\n Ingrese el año de nacimiento del empleado: ");
		scanf("%d",&e[i].year);
		e[i].year = (int) validar(e[i].year);
		
		if(e[i].year>yearmax)
			yearmax=e[i].year;
		
		printf("\n Ingrese el sueldo del empleado: ");
		scanf("%lf",&e[i].sueldo);
		e[i].sueldo = validar(e[i].sueldo);
		
		printf("\n Ingrese la colonia donde vive el empleado: ");
		scanf("%s",&dir[i].colonia);
		printf("\n Ingrese el numero de bloque: ");
		scanf("%s",&dir[i].bloque);
		
		dir[i].bloque=validar(dir[i].bloque);
		printf("\n Ingrese el numero de casas: ");
		scanf("%d",&dir[i].numcasa);
		dir[i].numcasa=validar(dir[i].bloque);
		
		
		if(e[i].sueldo>8000)
			e[i].ihss=320;
		else
			e[i].ihss = e[i].sueldo*0.04;
			
		if(e[i].ihss<ihssmin)
			ihssmin = e[i].ihss;
			
		e[i].sueldon= e[i].sueldo - e[i].ihss;
		
		acumlaS+= e[i].sueldon;	
	}
	
	system("cls");
	
	for(i=0; i<cant;i++)
	{
		printf("\n\t Datos del empleado %d",i+1);
		printf("\n Empleado: %s",e[i].nom);
		printf("\n Estado Civil: %c",e[i].estadoc);
		printf("\n A%co de nacimiento: %d",164,e[i].year);
		printf("\n Direccion colonia: %s bloque: %d casa: %d",dir[i].colonia,dir[i].bloque,dir[i].numcasa);
		printf("\n Sueldo: %.2lf",e[i].sueldo);
		printf("\n IHSS del empleado: %.2lf",e[i].ihss);
		printf("\n Sueldo Neto: %.2lf",e[i].sueldon);
		printf("\n");
		
	}
	
	promedio= (double) acumlaS/cant;
	printf("\n Cantidad de empleados solteros: %d",contaS);
	printf("\n Sueldo neto promedio: %.2lf",promedio);
	printf("\n Año maximo de nacimiento: %d",yearmax);
	printf("\n El seguro minimo es de: %.2lf",ihssmin);
	return 0;
}
