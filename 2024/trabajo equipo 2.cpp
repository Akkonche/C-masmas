/*Fernando Avila || Derek Lagos||Stefanny Flores ||Melissa Ramirez*/

#include<stdio.h>
#include<stdlib.h>

struct nodo
{
	int dato;
	nodo*siguiente;
};

int validar(int valor,int i,int s)
{
	while(valor<i || valor>s)
	{
		printf("\n Ingrese un valor valido: ");
		scanf("%d",&valor);
	}
	return valor;
}

bool colaVacia(nodo *frente)
	{
		if(frente == NULL)
			return true;
		else
			return false;
	}

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
		{
			frente=frente -> siguiente;
		}
		
	delete auxi;
	
}	
	
void agregar(nodo*&frente,nodo*&fin,int num)
{
	nodo* nuevo_nodo = new nodo();
	nuevo_nodo->dato = num;
	nuevo_nodo->siguiente = NULL;
	
	if(colaVacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
	printf("\n Elemento %d agregado a la cola correctamente", num);
}

int main ()
{
	nodo * frente = NULL;
	nodo * fin = NULL;
	int num;
	char resp;
	int opc;
	
	do 
	{
		printf("\n\t Menu Principal");
		printf("\n\t **************");
		
		printf("\n[1]...Agregar datos a la cola");
		printf("\n[2]...Consultar un dato de la cola");
		printf("\n[3]...Listar todos los datos de la cola");
		printf("\n[4]...Eliminar un dato de la cola");
		printf("\n[5]...Eliminar todos los datos de la cola");
		printf("\n[6]...Salir");
		
		printf ("\n Seleccione una opcion: ");
		scanf ("%d", &opc);
		opc=validar(opc,1,6);
		
		switch(opc)
		{
			case 1:
				printf("\n Ingrese un numero entero a la cola: ");
				scanf("%d",&num);
				agregar(frente,fin,num);
				break;
			case 2:
				if (colaVacia(frente)) 
					{
						printf("\n\t La cola está vacía");
					} 
				else 
					{
						printf("\n\t El primer elemento en la cola es: %d", frente->dato);
					}
				break;
			case 3:
				nodo*cfrente=frente;
				while(cfrente!=NULL)
				{
					printf("%d <--",cfrente->dato);
					cfrente=cfrente->siguiente;	
				}
				printf("NULL\n\n");
				break;
			case 4:
				if (colaVacia(frente)) 
					{
						printf("\n\t La cola está vacía");
					} 
				else 
					{
						eliminar(frente,fin,num);
						printf("\n\t [%d] ha sido eliminado de la cola", num);
					}
				break;
			case 5:
				while (!colaVacia(frente)) 
					{
						eliminar(frente,fin,num);
						printf("\n\t [%d] ha sido eliminado de la cola", num);
					}
				printf("\n\t Todos los datos han sido eliminados de la cola");
				break;
			case 6:
				printf ("\n Gracias por usar el programa");
				break;
			default:
				printf ("\n Opción inválida");
				break;
		}
	} 
	while (opc != 6);
	
	return 0;
}
