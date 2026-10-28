// Programa que Calcula el area de N triangulos  D

#include<stdio.h>
#include<windows.h>
#include<locale.h>
main()
  {
  	setlocale(LC_ALL,"");
    system("title Area de triángulo");
	
	float b,a,at;
   	int contador = 0,numtri;
   	do
	   {
   		printf("\n Ingrese la cantidad de triangulos a calcular");
   		scanf("%d",&numtri);
   		if(numtri<=0)
   			printf("\n\t\a Error...Ingrese un numero positivo");
   	   }
   	while(numtri<=0);	
	do
	{
    printf("\n\t Área de un Triángulo " );
    printf("\n\t **** ** ** ********* \n " );  
     	do
	 	{
      
     		printf("\n Introduzca la base del triángulo: " ); 
        	scanf("%f", &b);
        	if(b<=0)
     		printf("\n\t\a Error... Introduzca un numero positivo");
     	}
		while(b<=0);
		   do
		   {
		    
    		printf("\n Introduzca la altura del triángulo: " ); 
    		scanf("%f", &a);
			if(a<=0)
     		printf("\n\t\a Error... Introduzca un numero positivo");
		   }
		   while(a<=0);	     
    at = (b*a)/2;
    printf("\n El area del Triángulo es: %.2f \n\n",at  );
    contador = contador+1;
    system("pause");//cuyo
    system("cls");
    
    }
    while(contador<numtri);
      return 0;
  }
