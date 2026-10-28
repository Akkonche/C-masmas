#include<stdio.h>
#include<string.h>
main()
{
	int num;
	int *pnum;
	char obs[7];
	
	printf("\n Ingrese un Numero: ");
	scanf("%d",&num);
	if(num>0)
	{
		strcpy(obs,"positivo");
	}
	else if(num<0)
	{
		strcpy(obs,"Negativo");
	}
	else
	return 0;
}
