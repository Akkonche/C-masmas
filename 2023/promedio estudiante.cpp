//Programa de promedio D
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main() 
{	
    setlocale(LC_ALL,"");
    char * obs;
    char * msj;
	char nombre[50];
    int nota1, nota2, nota3;
    char resp;
    int cont=0;
  do
    {
    
    printf("\n\t Calculo de promedio");
	printf("\n\t ******* ** ********");
    printf("\n Ingrese su nombre: ");
    //scanf("%s",&nombre);
    //gets(nombre);
    scanf("%[^\n]",&nombre);
     do
     {
   		printf("\n Ingrese la primera nota: ");
    	scanf("%d", &nota1);
     	if(nota1<=0|nota1>=100);
     		printf("\n\t\a Error... Ingrese una nota entre 0 y 100" );
     }
     while(nota1<=0|nota1>=100);
     
    printf("\n Ingrese la segunda nota: ");
    scanf("%d", &nota2);
    printf("\n Ingrese la tercera nota: ");
    scanf("%d", &nota3);

    double prom = (nota1 + nota2 + nota3)/3;
    
	printf("El promedio de las tres notas es: %.2lf\n", prom);
     
    if(prom>=70)
    {
    	obs="Aprobado";
    	cont=cont+1;
    }
    else
		obs="Reprobado";	
	printf("\n El estudiante esta: %s",obs);	
	if(prom>=91 && prom<=100)
		msj="Excelente";
	else
		if(prom>=80 && prom<=91)
			msj="Muy bueno";
		else
			if(prom>=70 && prom<=80)
				msj="Bueno";
			else
				msj="Necesita mejorar";
			
				
	printf("\n Estudiante %s",msj);
	printf("\n Desea continuar [S/N]: ");
	scanf("%s",resp);
	}
	while(resp=='S' || resp=='s');
    return 0;
}
