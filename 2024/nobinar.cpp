/**/

#include<stdio.h>
#include<windows.h>

FILE*archivo;

enum genero 
{
	mas,fem,otr	
};

struct persona
{
	int codigo;
	char nombre[50];
	double estat,peso,pesoI;
	enum genero gen;
	
}per;

double validar (double valor,double lin,double lis)
{
	while(valor<lin||valor>lis)
	{
		printf("\n\a Error... Ingrese digito valido");
		scanf("%lf",&valor);
	}
	return 0;
	
}

void ingresar ()
{
	int genr;
	char resp;
	
	system("cls");
	
	archivo=fopen("personas.bin","rb");
	
	if(archivo==NULL)
		printf("El archivo no existe");
	else
	{
		printf("\n Datos Personales");
		printf("\n ****************");
		archivo=fopen("personas.bin","ab");
	
		do
		{
			printf("\n Ingrese el codigo de la persona: ");
			scanf("%d",&per.codigo);
			per.codigo=validar(per.codigo,1,500);
			printf("\n ingrese el nombre de la persona: ");
			scanf("%s",&per.nombre);
			printf("\n ingrese la estatura de la persona: ");
			scanf("%lf",&per.estat);
			per.estat=validar(per.estat,0,8,2,5);
			printf("\n ingrese el peso de la persona: ");
			scanf("%lf",&per.peso);
			per.peso=validar(per.peso,50,350);
			per.pesoI=validar(per.peso-1)*220;
			printf("\n Ingrese el genero de la persona: [0]..Masculino , [1]...Femenino");
			scanf("%d",&per.gen);
			per.gen=validar(per.gen,0,2);
			fprintf(archivo,"\n%3d",per.codigo);	
			fprintf(archivo,"\n%7s",per.nombre);
			fprintf(archivo,"\n%10.2lf",per.estatura);
			fprintf(archivo,"\n%10.2lf",per.peso);
			fprintf(archivo,"\n%10.2lf",per.pesoI);
			fprintf(archivo,"\n%5d",per.gen);
			printf("\n Desea ingresar otra persona? :");
			scanf("%s",)
			
		
		}
		while();
		
	}
	
}


void crear ()
{
	archivo=fopen("personas.bin","rb");
	
	if(archivo!=NULL)
		printf("\n El archivo ya existe");
	else
	{
		archivo=fopen("personas.bin","wb");
		printf("\n El archivo ha sido creado exitosamente");
	}
	system("pause");
	fclose(archivo);
}

main()
{
	int op;
	do
	{
		system("cls");
		printf("\n\t MENU");
		printf("\n\t ****");
		printf("\n [1]...Crear archivo");
		printf("\n [2]...Ingresar datos");
		printf("\n [3]...Mostrar todos los datos");
		printf("\n [4]...Consultar un dato");
		printf("\n [5]...Salir");
		
		do
		{
			printf("\n Ingrese una opcion de 1-5");
			scanf("%d",&op);
			
			if(op<1||op>5)
			{
				printf("\n ERROR... Ingrese un numero de 1-5");
				
			}
			
		}
		while(op<1||op>5);
		switch(op)
		{
			case 1:
				crear();
				break;
			case 2:
				ingresar();
				break;
			case 3:
				//mostrar();
				break;
			case 4:
				//consultar();
				break;
			default:
				printf("\n Gracias por usar nuestro programa");
				exit 0;
				break;
			
		}
		
	}
	while(op!=5);
	
}
