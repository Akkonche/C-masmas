/*D Funciones notas prom estudiante*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<locale.h>

void captura(); 
double promedio(int,int,int);
char * observacion(double);
void repetir();
void histograma();
int validar(int,int,int);
void mostrar(char[],int,double,char*);

double promax=-1,porep;
int contexce=0,contmuyb=0,contb=0,contrep=0;

main()
{
	system("title Funciones");	
	printf("\n\t Calculo de promedio");
	
	repetir();
	histograma();
	
	printf("\n La Ejecucion de la Funcion a finalizado");
	return 0;
}

void captura()
{
	system("cls");
	char nom[50];
	int n1,n2,n3,edad;
	double prom;
	char *obs;
	
	printf("\n Ingrese nombre del estudiante: ");
	scanf("%s",&nom);
	printf("\n Ingrese Edad del estudiante: ");
	scanf("%d",&edad);
	edad=validar(edad,15,33);
	printf("\n Ingrese primera nota del estudiante: ");
	scanf("%d",&n1);
	n1=validar(n1,0,100);	
	printf("\n Ingrese segunda nota del estudiante: ");
	scanf("%d",&n2);
	n2=validar(n2,0,100);
	printf("\n Ingrese tercera nota del estudiante: ");
	scanf("%d",&n3);
	n3=validar(n3,0,100);	
	

	prom=promedio(n1,n2,n3);
	if (prom>promax)
		promax=prom;
	
	obs=observacion(prom);

	mostrar(nom,edad,prom,obs);
}

double promedio(int n1,int n2,int n3)
{
	double prom;
	
	prom=(double)(n1+n2+n3)/3;
	
	return prom;
}
char * observacion (double prom)
{
	char*obs;
	
	if(prom>=91)
		{
		obs="Excelente";
		contexce++;
		}
	else
		if(prom>=81)
			{
			obs="Muy Bueno";
			contmuyb++;
			}
		else
			if(prom>=70)
				{
				obs="Bueno";
				contb++;
				}
			else
				{
				obs="Necesita Mejorar";
				contrep++;
				}
	return obs;
}
void repetir()
{
	char resp;
	do
	{
		captura();
		do
		{
			printf("\n Desea continuar? [S/N]: ");
			scanf("%s",&resp);
			resp=toupper(resp);
		
		}
		while(resp!= 'S'&& resp!= 'N');
	}
	while(resp=='S');
	
	porep=(double)contrep*100/(contexce+contmuyb+contb+contrep);
	printf("\n Porcentaje de reprobados: %.2lf ",porep);
	printf("\n La nota maxima es: %.2lf", promax);
}
int validar(int valor,int li,int ls)
{
	while(valor<li || valor>ls)
		{
			printf("\n Error... Ingrese un valor entre %d y %d ",li,ls);
			scanf("%d",&valor);
			
		}
	return valor;
}
void mostrar (char nom[50],int edad,double prom,char*obs)
{
	system("cls");
	printf("\n Estudiante: %s",nom);
	printf("\n Edad: %d",edad);
	printf("\n Promedio: %.2lf",prom);
	printf("\n %s",obs);
}	

	void histograma()
	{
		int i;
		printf("\n\t Histograma ");
		printf("\n Excelentes [%d]: ",contexce);
		for(i=0;i<contexce;i++)
			printf("*");
		printf("\n Muy bueno [%d]: ",contmuyb);
		for(i=0;i<contmuyb;i++)
			printf("*");
		printf("\n Bueno [%d]: ",contb);
		for(i=0;i<contb;i++)
			printf("*");
		printf("\n Reprobados [%d]: ",contrep);
		for(i=0;i<contrep;i++)
			printf("*");
		
	}	
