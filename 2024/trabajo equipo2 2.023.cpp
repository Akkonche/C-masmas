#include<stdio.h>
#include<stdlib.h>

struct nodo
{
	float dato;
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

void eliminar(nodo*&frente,nodo*&fin,float &num)
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
	
void agregar(nodo*&frente,nodo*&fin,float num)
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
	printf("\n Elemento %.1f agregado a la cola correctamente", num);
}

bool buscar(nodo* frente, float num)
{
	nodo* actual = frente;
	while(actual != NULL)
	{
		if(actual->dato == num)
			return true;
		actual = actual->siguiente;
	}
	return false;
}
	
int main ()
{
	nodo * frente = NULL;
	nodo * fin = NULL;
	double num;
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
				printf("\n Ingrese un numero real a la cola: ");
				scanf("%lf",&num);
				agregar(frente,fin,num);
				break;
			case 2:
				printf("\n Ingrese un numero para buscar en la cola: ");
				scanf("%lf",&num);
				if(buscar(frente, num))
				{
					printf("\n %.2lf se encontró en la cola", num);
				}
				else
				{
					printf("\n %.2lf NO está guardado en la cola", num);
				}
				break;
			case 3:
				nodo*cfrente=frente;
				while(cfrente!=NULL)
				{
					printf("%.2lf <--",cfrente->dato);
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
					printf("\n\t [%.2lf] ha sido eliminado de la cola", num);
				}
				break;
			case 5:
				while (!colaVacia(frente)) 
				{
					eliminar(frente,fin,num);
					printf("\n\t [%.2lf] ha sido eliminado de la cola", num);
				}
				printf("\n\t Todos los datos han sido eliminados de la cola");
				break;
			case 6:
				printf ("\n Gracias por usar el programa");
				break;
		}
	} 
	while (opc != 6);
	
	return 0;
}

