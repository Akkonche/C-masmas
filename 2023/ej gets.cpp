/**/
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<ctype.h>

#define tam 20 /*Definir constante*/
main()
{
	char vect[tam]={' '};
	int i;
	int cont;
	cont=0;
	char letra;
	
	do
		{
			printf("\nIngrese una frase de 20 caracteres:	");
			gets(vect);
			if(strien(vect)>tam))
			   print("\n\t ERROR INGRESE UNA FRASE DE 20 CARACTERES");
		}
		while(strien(vect<20));
		
		printf("\n Ingrese una letra:	");
		scanf("%c",&letra);
		for(i=0;vect[i]!='\0' ;i++)
			{
				if(letra==vect[i])
				cont++;
			}
			
				printf("La Letra %c se repite %d Veces",letra,cont);
	return 0;		
}
