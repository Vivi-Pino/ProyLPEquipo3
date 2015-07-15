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
 }while(m<0 && m>=4);
 return menu;
}
char horariohora1(int hora)
{
 do
 {
   char materia[15],semestre[15];
   if (hora==7)
   {
    strcpy(materia,"Matematica I");
    strcpy(semestre, "Primero");
   }
   else if(hora==9)
   {
    strcpy(materia,"Fisica III");
    strcpy(semestre,"Tercero");
   }
 }while(hora<7 && hora>=20);
}

main()
{
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
    	case 1:
      	char mat[10], sem[10],  dia[10], ini[10], fin[10];

      	printf("\nIngrese los siguientes datos: \n\n");
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

      break;

      case 2:
      	printf("\n\t HORARIO DE HOY \n");
      break;

      case 3:
      	printf("\n\t HORARIO DE LA SEMANA \n");
      break;

      case 4:
      	return 0;
      break;
   }
   }while(m=4);

getch();
}
