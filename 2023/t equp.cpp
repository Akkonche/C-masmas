#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


#define fil 4
#define col 3

main()
{
	system("title T Equipo");
	
	srand(time(NULL));
	
	int mat[fil][col],i,j;

	
	printf("\n Matriz Aleatoria [1000-20000]\n");
	for (i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			mat[i][j]=1000+rand()%19000;
			printf("%7d",mat[i][j]);
		}
			printf("\n");	
	}
	
		printf("\n IHSS\n");
		for (i=0;i<fil;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%7d");
			}
			printf("\n");
		}
}
