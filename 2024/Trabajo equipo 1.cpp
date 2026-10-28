/*Derek Lagos||Melissa Ramirez|| Stefanny Flores || Fernando Avila*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

struct nodo
{
	char letra;
	nodo*siguiente;
	
};

int validar(int valor,int i,int s)
{
	while(valor<i || valor>s)
	{
		printf("\n Ingrese un valor valido");
		scanf("%d",&valor);
	}
}

void eliminar( nodo*&pila, char *carac)
{
	nodo *auxi = pila;
	carac = auxi->letra;
	pila = auxi->siguiente;
	delete auxi;
}


void listar(struct nodo *pila)
{
	struct nodo *auxi = pila;
	while (auxi != NULL)
	{
		printf("%c -> ", auxi->letra);
		auxi = auxi->siguiente;
	}
		printf("NULL\n");
}

void agregar (nodo *&pila, char carac)
{
	char resp;
	
	nodo * nuevo_nodo=new nodo();
	nuevo_nodo -> letra = carac;

	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;

	printf("\n\t El elementos [%c] se a agregado a la pila ", carac);
	
	do
	{
		printf("\n\t Introduzca un caracter a la pila: ");
		scanf("%c", &carac);

		agregar (pila, carac);

		do
		{
			printf("\n\t Agregar otro dato a la pila: ");
			scanf("%s", &resp);

			resp = toupper(resp);
			if (resp != 'S' && resp != 'N')
			{
				printf("\n\t Error... ingrese [S][N]");
			}
		}
		while (resp != 'S' && resp != 'N');

	}
	while (resp == 'S');
}

main ()
{
	nodo*pila=NULL;
	int opc;
	
	printf("\n\t Menu Principal");
	printf("\n\t **************");
	
	printf("\n [1]…Agregar datos a la pila");
	printf("\n [2]…Consultar un dato de la pila");
	printf("\n [3]…Listar todos los datos de la pila");
	printf("\n [4]…Eliminar un dato de la pila");
	printf("\n [5]…Eliminar todos los datos de la pila");
	printf("\n [6]…Salir");
	
	printf ("\n Seleccione una opcion: ");
	scanf ("%d", &opc);
	opc=validar(opc,1,6);
	
	switch(opc)
	{
		case 1:
			agregar();
			break;
		case 2:
			consultar();
			break;
		case 3:
			listar();
			break;
		case 4:
			eliminarun();
			break;
		case 5:
			eliminartod();
			break;
		default:
			printf ("\n Gracias por usar el programa");
			break;
			
	}
	return 0;
}
