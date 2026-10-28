/*Programa usando recursividad*/

#include<stdio.h>

void numero(int num)
	{
		if(num<0)	//Caso de terminacion
			printf("\n Fin de la funcion\n ");
		else
			{
				printf("%6d",num);
				numero(num-1);
			}
	}
	

main()
{
	int num,i;
	
	printf("\n Mostrando numero hasta llegar a 0");
	printf("\n *********************************");
	
	printf("\n Ingrese un numero entero: ");
	scanf("%d",&num);
	
	numero(num);
	
	return 0;
	
}
