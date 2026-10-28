/**/
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int binario(int num)
{
	
	if(num < 1)
		return 1;
	
	else
		binario(num/2);
		
	printf("%d",num%2);
	
}


main()
{
	int num;
	
	printf("\n Conversion decimal a binario");
	
	do
	{
		printf("\n Ingrese un numero decimal entero: ");
		scanf("%d",&num);
		if(num<1)
			printf("\n\a Error... Ingrese un numero positivo: ");
		
	}while(num<1);
	
	printf("\n El numero binario es: ");	
	
	binario(num);
	
	return 0;
}
