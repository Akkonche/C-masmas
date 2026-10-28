#include <stdio.h>
#include <windows.h>
#include <locale.h>
main()
	{
		system("title Ciclo For");
		setlocale(LC_ALL,"");
		int i;
		printf("\n\t Numero Cuadrado Cubo\n");
		for(i=1;i<=10;i++)
			{
				printf(" \n %4d %6d %6d",i, i*i,i*i*i ); 
				
			}
		return 0;
	}
