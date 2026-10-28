#include<stdio.h>
#include<windows.h>
#include<locale.h>

double sueldoNeto(double sb,double ihss)
{
	double sn;
	sn=sb-ihss;
	return sn;
	
}

double seguroMed(double sb)
{
	double ihss;
	if(sb<5000)
		ihss=sb*0.04;
	else
		ihss=200;
	return ihss;
}

double sueldoBruto(int ht,double ph)
{
	double sb;
	sb=(double)(ht*ph);
	return sb;
}

double validacion(double valor)
{
	while(valor<=0)
	{
		printf("Error... Elija un numero positivo: ");
		scanf("%lf",&valor);
	}
	return valor;
}

void ingresarDatos()
{
	char nombre[50];
	int horastrab;
	double pagohora;
	double sueldoB;
	double ihss;
	double sueldoN
	
	printf("\n Ingrese nombre del empleado: ");
	scanf("%s",&nombre);
	printf("\n Ingrese Horas trabajadas: ");
	scanf("%d",&horastrab);
	horastrab=validacion(horastrab);
	printf("\n Ingrese pago por hora: ");
	scanf("%lf",&pagohora);	
	pagohora=validacion(pagohora);
	sueldoB=sueldoBruto(horastrab,pagohora);
	ihss=seguroMed(sueldoB);
	sueldoN=sueldoNeto(sueldoB,ihss);
	
}

void repetir()
{
	char respuesta;
	do
	{
		ingresarDatos();
		do
		{
			printf("\n Desea ingresar otro dato [S/N]: ");
			scanf("%s",&respuesta);
			respuesta=toupper(respuesta);
			
			if(respuesta!='S' && respuesta!='N')
			printf("Error... Ingrese S o N");
			
		}
		while(respuesta!='S' && respuesta != 'N');
	}
	while(respuesta=='S');
}

main()
{
	repetir();
	return 0;
}
