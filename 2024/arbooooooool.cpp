/*arbol Binario DER */

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct nodo 
{
	int dato;
	nodo*der;
	nodo*izq;
	
};

nodo*arbol=NULL;

bool buscar(nodo*arbol,int num)
{
	if(arbol==NULL)
	{
		return false;
	}
	else
	{
		if(arbol->dato==num)
		{
			return true;
		}
		else
		{
			if(num<arbol->dato)
			{
				return buscar(arbol->izq,num);
			}
			else
			{
				return buscar(arbol->der,num);
			}
		}
	}
}

void mostrar(nodo*arbol,int cont)
{
	int i;
	if(arbol==NULL)
	{
		return;
	}
	else
	{
		mostrar(arbol->der,cont++);
		for(i=0;i<cont;i++)
		{
			printf("   ");
		}
		printf(" %d\n",arbol->dato);
		mostrar(arbol->izq,cont++);
		
	}
	
}

nodo*crear(int num)
{
	nodo*nuevonodo=new nodo();
	nuevonodo->dato=num;
	nuevonodo->izq=NULL;
	nuevonodo->der=NULL;
	return nuevonodo;
}

void insertar(nodo*&arbol,int num)
{
	if(arbol==NULL)
	{
		nodo*nuevonodo=crear(num);
		
		arbol=nuevonodo;
	}
	else
	{
		int raiz=arbol -> dato;
		if(num<raiz)
		{
			insertar(arbol->izq,num);
		}
		else
		{
			insertar(arbol->der,num);
		}
	}
}

void menu()
{
	char resp;
	int opc,num,cont=0;
	
	do
	{
		system("cls");
		printf("\n Menu Principal Arboles Binarios");
		printf("\n[1]... Agregar datos al arbol");
		printf("\n[2]... Consultar datos del arbol");
		printf("\n[3]... Buscar datos en el arbol");
		printf("\n[1]... Salir");
		do
		{
			printf("\n Ingrese su opcion[1-4]: ");
			scanf("%d",&opc);
			if(opc<1 || opc>4)
			{
				printf("\n Ingrese una opcion valida [1-4]");
			}
		}
		while (opc<1 || opc>4);
		
		switch(opc)
		{
			case 1:
				system("cls");
				printf("\n Ingresando datos al arbol");
				do
				{
					printf("\n Ingrese un numero al arbol: ");
					scanf("%d",num);
					insertar(arbol,num);
					do
					{
						printf("\n Ingresar otro numero [S/N]: ");
						scanf("%s",resp);
						resp=toupper(resp);
						
						if(resp!='S' && resp!='N')
							printf("\n\a Error... Ingrese una respuesta valida [S/N]");
					}
					while(resp!='S' && resp!='N');
				}
				while(resp=='S');
			break;
			
			case 2:
				system("cls");
				printf("\n Mostrar datos del arbol\n\n");
				mostrar(arbol,cont);
				system("pause");
				break;
			case 3:
				system("cls");
				printf("\n Buscar un numero en el arbol\n");
				printf("\n Ingrese el numero a buscar: ");
				scanf("%d",&num);
				
				if(buscar(arbol,num)==num)
				{
					printf("\n El numero")
				}
		}
		
	}
	while(opc!=4);
		
}


main ()
{
	menu();
	
	return 0;
}























