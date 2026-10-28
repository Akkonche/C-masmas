/*Programa que permite agregar y eliminar datos de una pila*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

struct nodo
	{
		int datos;
		nodo*siguiente;	
	};

void eliminar(nodo*&pila,int &num)
{
	nodo*auxi=pila;
	num=auxi->datos;
	
	pila = auxi -> siguiente;
	
	delete auxi;
}	
	
void agregar(nodo * &pila,int num)
{
	nodo*nuevo_nodo = new nodo();
	nuevo_nodo -> datos = num;
	
	nuevo_nodo -> siguiente = pila;
	pila=nuevo_nodo;
	
	printf("\n El elemento [%d] se ha agregado a la pila",num);
	
}	
	
int main ()
{
	nodo*pila=NULL;
	
	int num;
	char resp;
	
	printf("\n\t Ingrese datos a la pila");
	
	do
	{
		printf("\n Introduzca un valor entero a la pila: ");
		scanf("%d",&num);
	
		agregar(pila,num);
		
		do
		{
			printf("\n Agregar otro dato a la pila: ");
			scanf("%s",&resp);
			resp=toupper(resp);
			if(resp!='S'&& resp!='N')
			{
				printf("\n Error.... Ingrese S o N");
			}
		}
		while(resp!='S'&& resp!='N');
	}
	while(resp=='S');
	
	printf("\n Eliminando datos de la pila");
	while(pila!=NULL)
	{
		eliminar(pila,num);
		if(pila!=NULL)
		{
			printf("\n [%d] se ha eliminado",num);
		}
		else
		{
			printf("\n [%d] eliminado\n pila vacia",num);
		}	
	}

	
	return 0;
}
