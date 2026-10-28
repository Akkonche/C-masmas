#include <stdio.h>

main()
{
	int a=10;
	int b=20;
	int *pnum;
	
	pnum=&a;
	pnum=&b;
	
	printf("\n El valor de A es: %d",a);
	printf("\n El valor de B es: %d",b);
	printf("\n El valor del puntero es : %d",*pnum);
	
	*pnum=50;
	printf("\n El valor de A es: %d",a);
	printf("\n El valor de B es: %d",b);
	printf("\n Direccion de Memoria de A: %p",&a);
	printf("\n Direccion de Memoria de B: %p",&b);
	printf("\n Direccion de donde apunta el puntero: %p",pnum);
	
	return 0;
	
}
