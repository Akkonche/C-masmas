// Programa que Calcula el area de N triangulos  D

#include <stdio.h>
#include<windows.h>
#include<locale.h>

main()
  {
  	setlocale(LC_ALL,"");
    system("title Area de triángulo");
	
	float b,a,at;
	char respuesta;
	int contador = 0, cantidad;
   	
  
  do{
    
		printf("\n Introduzca la cantidad de triangulos que quiera calcular: " ); 
    	scanf("%d", &cantidad);
    	if (cantidad <=0)
    		printf("\a\nERROR..... ingrese el un numero positivo");
    		
		}
	while(cantidad <= 0 );
    
    do{
    	
	   
    printf("\n\tÁrea de un Triángulo " );
    printf("\n\t **** ** ** ********* \n " );  
    
   		do
   		{
   
	    printf("\n Introduzca la base del triángulo: " ); 
	    scanf("%f", &b);
	    if (b <=0)
	    		printf("\a\nERROR..... ingrese el un numero positivo");
	    
	    }while (b <=0);
    
		    do
		    {
		    
		    printf("\n Introduzca la altura del triángulo: " ); 
		    scanf("%f", &a);
		    if (a <=0)
		    		printf("\a\nERROR..... ingrese el un numero positivo");
		   	}while (a <=0);
   	
   	
   	
   	
	    at = (b*a)/2;
	    printf("\n El area del Triángulo es: %.2f \n\n",at  );
	    //printf("Desea continuar [S/N]: ");
	    //scanf("%s", &respuesta);
	    contador = contador + 1;//CUYO
	    
	    system("pause");
		system("cls");
    }while (contador < cantidad);

	
    return 0;
    }
    
    
    
    
    
    
    
