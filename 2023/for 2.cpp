//ejercicio
#include<stdio.h>
#include<windows.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
main()
	{
		system("title ejercicio");
		setlocale(LC_ALL,"");
		const int tam=7;
		int vector[tam], i;
		int suma=0;
		double promedio;
		srand(time(NULL));
		
		printf("\n\t Datos aleatorios del vector\n");
		for(i=0;i<tam;i++)
		{
			//vector[i]=rand()%36+15;
			vector[i]=15+rand()%36;
			printf("%5d",vector[i]);
			
			suma=suma+vector[i];
		}
		promedio=suma/tam;
		printf("\nLa suma del arreglo es: %d\n",suma);
		printf("\n El promedio del arreglo es: %.2lf",promedio);
		return 0;
	}
