/**/

#include<stdio.h>
#include<windows.h>

main()
{
	int num,i;
	
	printf("\n Mostrando numero hasta llegar a 0");
	printf("\n *********************************");
	
	printf("\n Ingrese un numero entero: ");
	scanf("%d",&num);
	printf("\n Numeros del %d al 0\n ",num);
	for(i=num;i>=0;i--)
		printf("%7d",i);
		
		return 0;
	
}
