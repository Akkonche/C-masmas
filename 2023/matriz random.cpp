#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


#define fil 5
#define col 5

main()
{
	
	system("title Numeros aleatorios");
	
	srand(time(NULL));
	
	int mat[fil][col],i,j,valormin=100,valormax=0;
	
	printf("\n Matriz Aleatoria [10-85]\n");
	for (i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			mat[i][j]=10+rand()%76;
			printf("%6d",mat[i][j]);
		
				if(mat[i][j]>valormax)
					valormax=mat[i][j];
					
				if(mat[i][j]<valormin)
					valormin=mat[i][j];
		}
			printf("\n");	
	}
	printf("\n Numero mayor de la matriz %d",valormax);
	printf("\n Numero menor de la matriz %d",valormin);
	
	printf("\n Fila media de la matriz\n");
	for(i=fil/2; i<=fil/2;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%5d",mat[i][j]);
		}
	}
	
	printf("\n Columna media de la matriz\n");
	for(i=0; i<fil;i++)
	{
		for(j=col/2;j<=col/2;j++)
		{
			printf("%5d",mat[i][j]);
		}
	}
	printf("\n Diagonal de la matriz\n");
	for(i=0; i<fil;i++)
	{
		for(j=i;j<=i;j++)
		{
			printf("%5d",mat[i][j]);
		}
	}
	printf("\n Diagonal Inversa\n");
	for(i=0;i<fil;i++)
	{
		for(j=(col-1)-i;j<=(col-1)-i;j++)
		{
			printf("%5d",mat[i][j]);
		} 
	}
	
	return 0;
}
	
