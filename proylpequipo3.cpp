#include<iostream>
#include<conio>
#include<stdio>
#include<fstream>

main()
{
 int m;
   printf("***Menu Principal***\n");
   printf("1- Ingresar la nueva hora  de clases: \n");
   printf("2- Ver el horario de hoy: \n");
   printf("3- Ver el horario de la Semana: \n");
   printf("4-Salir: \n");
   scanf("%d",&m);
   if(m>=1 && m<=4)
   {
   printf("menu");

   }
   else
   {
   printf("el dato ingresado es incorrecto");
   }

getch();
}
