/*Programa Factorial*/

#include<stdio.h>

main()
{
	int num,i;
	long int fact=1;
	printf("\n Mostrando factorial de un numero");
	printf("\n *********************************");
	
	printf("\n Ingrese un numero entero: ");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
		fact*=i;
		printf("\n El factorial de %d es: %d",num,fact);
	
	return 0;
	
}
