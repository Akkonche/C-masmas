/*Ejercicio enum 5 feb*/

#include<stdio.h>
#include<windows.h>

enum dias
{
	dom,lun,mar,mier,jue,vie,sab
};

main ()
{
	enum dias dia;
	const char*nomdia[]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
	
	for(dia=dom; dia<=sab;dia++)
	{
		printf("\n %2d %s",dia,nomdia[dia]);
		
	}
	
	printf("\n El dia miercoles es el numero de dia: %d",mier);
	
	return 0;
}
