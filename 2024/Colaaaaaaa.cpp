/*Programa usando colas|| D*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

struct nodo
{
	int dato;
	nodo*siguiente;
};

void eliminar(nodo*&frente,nodo*&fin,int &num)
{
	num=frente -> dato;
	nodo*auxi=frente;
	if(frente==fin)
		{
			frente=NULL;
			fin=NULL;
		}
	else

		frente=frente -> siguiente;
		
	delete auxi;
	
}

bool colaVacia(nodo *frente)
	{
		if(frente == NULL)
			return true;
		else
			return false;
			
	//	return (frente==NULL)?true:false;
	}
void agregar(nodo*&frente,nodo*&fin,int num)
{
	nodo*nuevoNodo=new nodo();
	(*nuevoNodo).dato=num;
	nuevoNodo -> siguiente=NULL;
	
	if(colaVacia(frente))
		frente=nuevoNodo;
	else
		fin -> siguiente=nuevoNodo;
		
	fin=nuevoNodo;
	
	printf("\n El numero %d se agrego a la cola correctamente",num);
	
	
}

main ()
{
	nodo * frente = NULL;
	nodo * fin = NULL;
	int num;
	char resp;
	
	printf("\n Ingresando datos a la cola");
	do
	{
		printf("\n Ingrese un numero entero a la cola: ");
		scanf("%d",&num);
		agregar(frente,fin,num);
		do
		{
			printf("\n Desea agregar otro dato a la cola:");
			scanf("%s",&resp);
			resp=toupper(resp);
			
			if(resp!='S' && resp!='N')
			{
				printf("\n Error... Ingrese un S o N");
			}
				
		}
		while(resp!='S' && resp!='N');
		
	}
	while(resp=='S');	
	
	nodo*cfrente=frente;
	while(cfrente!=NULL)
	{
		printf("%d <--",cfrente->dato);
		cfrente=cfrente->siguiente;	
	}
	printf("NULL\n\n");
	
	printf("\n\n Eliminando datos de la cola\n");
	
	while(frente!=NULL)
	{
		eliminar(frente,fin,num);
		if(frente!= NULL)
			{
				printf("\n\t[%d] se ha eliminado de la cola",num);
			}
		else
			{
				printf("\n\t[%d] se ha eliminado de la cola\n NULL cola vacia\n",num);
			}
		
		system("pause");
		
	}
	
	return 0;
}
