#include<iostream>
#include<conio>
#include<stdio>
#include<fstream>
#include<stdlib>
#include<time>

int MenudeDatos(int menu)
{
int m;
 do
 {
   cout<<"\tIngrese la Opcion que desea Ejecutar ";
   cin>>menu;
   if(menu>4)
   {
    cout<<"\tOPCION INGRESADA INCORRECTA\n";
   }
 }while(m<0 && m>=4);
 return menu;
}


main()
{
   ofstream archivo("C:/BC5/Archivos/horario.txt");
	archivo<<"\n";
	archivo.close();

  	time_t t;
  	struct tm *tm;
  	char fecha[100], hora[100], horah[100];


   int m, horario, opc;

   do
   {
   t=time(NULL);
   tm=localtime(&t);
   strftime(fecha, 100,"FECHA: %d/%m/%Y", tm);
   strftime(hora,100,"HORA: %H:%M:%S", tm);
   strftime(horah,100,"%Hh%M", tm);
   printf ("%s\n", fecha);
   printf ("%s\n",hora);

   printf("\n\tMENU PRINCIPAL\n");
   printf("1- Ingresar una nueva hora de clases: \n");
   printf("2- Ver el horario de hoy: \n");
   printf("3- Ver el horario de la Semana: \n");
   printf("4- Salir. \n");
   opc = MenudeDatos(m);

   switch(opc)
   {

   printf("El dato Ingresado es incorrecto");
   char mat[10], sem[10],  dia[10], ini[10], fin[10], caracter;
    	case 1:

      	printf("\nIngrese los siguientes Datos: \n\n");
      	printf("NOMBRE DE LA MATERIA: \n");
      	scanf("%s",&mat);
      	printf("NOMBRE DEL SEMESTRE: \n");
      	scanf("%s",&sem);
      	printf("DIA DE LA SEMANA: \n");
      	scanf("%s",&dia);
      	printf("HORA DE INICIO: \n");
      	scanf("%s",&ini);
         printf("Presione una tecla para regresar al menu principal\n\n");
         getch();
      break;

      case 2:
      	printf("\n\t HORARIO DE HOY \n");
         printf("Presione una tecla para regresar al menu principal\n\n");
         getch();

      break;

      case 3:
      	printf("\n\t HORARIO DE LA SEMANA \n");


         printf("Presione una tecla para regresar al menu principal\n\n");
         getch();
      break;

      case 4:
      	return 0;
      break;

   }

   }while(m=4);

getch();
}
