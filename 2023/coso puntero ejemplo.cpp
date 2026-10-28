#include<stdio.h>
#include<windows.h>

main()
 {
 	system("title Punteros");
 	int dia=14;
 	int *pdia;
 	pdia = &dia;
	*pdia=7;
	
 	printf("\n\tValores de Variables");
 	printf("\n\t======= == =========\n");
 	printf("\nEl valor de dia es: %d ", dia);
 	printf("\nLa direccion de memoria de la variable dia es %p: ",&dia);
 	printf("\n\n\tValores de Variables Apuntador");
 	printf("\n\t======= == ========= =========\n");
 	printf("\nEl valor de Apuntador es: %d ", *pdia);
 	printf("\nLa direccion de memoria del apuntador pdia es %p: \n",&*pdia);
 	return 0;
 }
