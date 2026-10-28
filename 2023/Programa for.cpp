//D
#include <stdio.h>
#include <windows.h>
#include <locale.h>
main()
	{
		system("title Ciclo For");
		setlocale(LC_ALL,"");
		int i;
		printf("\n\t Numeros del 2 al 12\n");
		for(i=2;i<=12;i=i+2)
			{
				printf(" %5d", i); 
				
			}
		return 0;
	}
