#include<iostream>
#include<conio>
#include<stdio>
#include<fstream>
#include<stdlib>

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

   int m, horario, opc;

   do
   {

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
      	printf("HORA DE FIN: \n");
      	scanf("%s",&fin);
         printf("Presione una tecla para regresar al menu principal\n");
         getch();

      break;

      case 2:
      	printf("\n\t HORARIO DE HOY \n");


      break;

      case 3:
      	printf("\n\t HORARIO DE LA SEMANA \n");

      	ifstream archivo("C:/BC5/Archivos/horario.txt", ios::in);
			while(!archivo.eof())
			{
			archivo.get(caracter);
			cout<<caracter;
			}
			archivo.close();

         printf("Presione una tecla para regresar al menu principal\n");
         getch();
      break;

      case 4:
      	return 0;
      break;

   }

   }while(m=4);

getch();
}
