/*Listas || D*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>

struct nodo
{
	int dato;
	nodo*siguiente;
};

nodo*lista=NULL;

void eliminar(int num)
{
	nodo*datoeliminar=lista;
	nodo*anterior=NULL;
	
	while(datoeliminar!=NULL)&&(datoeliminar->dato!= num))
	{
		anterior=datoeliminar;
		datoeliminar=datoeliminar->siguiente;
		
	}
	if(datoeliminar==NULL)
		printf("\n El numero [%d] no se encontro en la lista",num);
	else
		if(anterior==NULL)
		{
			lista=lista->siguiente;
			delete datoeliminar;
			printf("\n El dato [%d] se ha eliminado de la lista",num);
		}
	else
		{
			anterior->siguiente=datoeliminar->siguiente;
			delete datoeliminar;
			printf("\n\t El numero [%d] se ha eliminado",num);
		}	
}

void agregar(int num)
{
	nodo*nuevonodo=new nodo();
	nuevonodo -> dato=num;
	nodo*auxi1=lista;
	nodo*auxi2;
	
	
	while((auxi1!=NULL)&&(auxi1 -> dato < num))
	{
		auxi2=auxi1;
		auxi1=auxi1-> siguiente;
	} 
	
	if(lista==auxi1)
		lista=nuevonodo;
	else
		auxi2->siguiente=nuevonodo;
		
	nuevonodo->siguiente=auxi1;
	
	printf("\n El elemento [%d] se agrego a la lista correctamente",num);
	printf("\n Datos de la lista");
	nodo*clista=lista;
	
	while(clista!=NULL)
	{
		printf(" %d --> ",clista->dato);
		clista=clista->siguiente;
	}
	printf("NULL");
}

int main ()
{
	system("title Lista coso");
	setlocale(LC_ALL,"");
	
	char resp;
	int num;
	
	printf("\n Ingresando datos a la lista");
	do
	{
		printf("\n Ingrese un numero entero a la lista: ");
		scanf("%d",&num);
		
		agregar(num);
		
		do
		{
			printf("\n Desea agregar otro dato a la lista: ");
			scanf("%s",&resp);
			resp=toupper(resp);
			
			if(resp!='S' && resp!='N')
				printf("\n Error... Ingrese S o N");
			
		}
		while(resp!='S' && resp!='N');
		
	}
	while(resp=='S');
	
	printf("\n Eliminando datos de la lista");
	do
	{
		printf("\n Ingrese el numero a eliminar: ");
		scanf("%d",&num);
		eliminar(num);
		do
		{
			printf("\n Desea agregar otro dato a la lista: ");
			scanf("%s",&resp);
			resp=toupper(resp);
			
			if(resp!='S' && resp!='N')
				printf("\n Error... Ingrese S o N");	
		}
		while(resp!='S' && resp!='N');
	}
	while(resp=='S');
	
	return 0;
}
