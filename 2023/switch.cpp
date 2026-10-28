// Programa usando sentencia switch D
# include <stdio.h>
main ()
 {
 int op;
 char*obs;
 printf("\n\t DIA DE LA SEMANA");
 printf("\n\t *** ** ** *******\n\n");

 printf("\tIngrese un numero del dia de [1 al 7]: ");
 scanf("%d",&op);
 switch(op)
{
 case 1:
 obs = "Domingo";
 break;
 case 2:
 obs = "Lunes";
 break;
 case 3:
 obs = "Martes";
 break;
 case 4:
 obs = "Miercoles";
 break;
 case 5:
 obs = "Jueves";
 break;
 case 6:
 obs = "Viernes";
 break;
 default:
 obs = "Sabado";
 
 }
  //Fin del swich
  
 printf("\n\n El dia es: %s \n\n",obs);
 return 0;
 }
