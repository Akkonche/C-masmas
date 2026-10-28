//Calculo del promedio D
#include<stdio.h>
#include<windows.h>
#include<locale.h>

main()
	{
		system("title Calculo del promedio de un estudiante");
		setlocale(LC_ALL, "");
		const int NOTS=3;
		char nombre [30];
		char * obs;
		char * msj;
		int not1, not2, not3;
		double promedio;
		
		printf("\n\t Promedio de un estudiante");
		printf("\n\t ******** ** ** **********");
		printf("\n\n\t Ingrese su nombre: ");
		//scanf("%s", &nombre);
		//gets(nombre);
		scanf("% [^\n]", &nombre);
		printf("\n\t Ingrese la primera nota: ");
		scanf("%d", &not1);
		printf("\n\t Ingrese la segunda nota: ");
		scanf("%d", &not2);
		printf("\n\t Ingrese la tercera nota: ");
		scanf("%d", &not3);
		
		promedio = (double)(not1+not2+not3)/NOTS;
		printf("\t______________________________");
		printf("\n\n Su promedio es: %.2lf", promedio );
		
		
		if (promedio>= 70)
			obs ="Aprobado";
		else 
			obs ="Reproado";
			
			
		if (promedio >= 91 or promedio <=100)
			msj= "Excelente";	
		else 
			if (promedio >=80 or promedio <=91)
				msj = "Muy Bueno";
			
				else
					if (promedio >= 70 or promedio <=80)
						msj = "Bueno";
					else 
					msj = "Necesita mejorar";	
					
			
			
			
		system ("cls");
		printf("\n\t Promedio de un estudiante");
		printf("\n\t ******** ** ** **********");
		printf("\n\tEstudiente: %s", nombre);
		printf("\n\tEl promedio del estudiante es : %.2lf ", promedio);
		printf("\n\tEl estudiante esta: %s", obs);
		printf("\n\tEL estudiante es: %s", msj);
		
		
		return 0;
		
		
		
		
	}
		
		
	
