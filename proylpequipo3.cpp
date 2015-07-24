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
   ofstream archivolun("C:/BC5/Archivos/horariolun.txt");
	archivolun<<"\n";
	archivolun.close();
   ofstream archivomar("C:/BC5/Archivos/horariomar.txt");
	archivomar<<"\n";
	archivomar.close();
   ofstream archivomie("C:/BC5/Archivos/horariomie.txt");
	archivomie<<"\n";
	archivomie.close();
   ofstream archivojue("C:/BC5/Archivos/horariojue.txt");
	archivojue<<"\n";
	archivojue.close();
   ofstream archivovie("C:/BC5/Archivos/horariovie.txt");
	archivovie<<"\n";
	archivovie.close();


  	time_t t;
  	struct tm *tm;
  	char fecha[100], hora[100], horah[100],fechah[100];


   int m, horario, opc;

   do
   {
   t=time(NULL);
   tm=localtime(&t);
   strftime(fechah, 100,"%A", tm);
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


   char mat[10], sem[10],  dia[10], ini[10], fin[10],caracter;
   ofstream archivo1("C:/BC5/Archivos/horariolun.txt",ios::app);
   ofstream archivo2("C:/BC5/Archivos/horariomar.txt",ios::app);
   ofstream archivo3("C:/BC5/Archivos/horariomie.txt",ios::app);
   ofstream archivo4("C:/BC5/Archivos/horariojue.txt",ios::app);
   ofstream archivo5("C:/BC5/Archivos/horariovie.txt",ios::app);
   ifstream archivolun("C:/BC5/Archivos/horariolun.txt", ios::in);
   ifstream archivomar("C:/BC5/Archivos/horariomar.txt", ios::in);
   ifstream archivomie("C:/BC5/Archivos/horariomie.txt", ios::in);
   ifstream archivojue("C:/BC5/Archivos/horariojue.txt", ios::in);
   ifstream archivovie("C:/BC5/Archivos/horariovie.txt", ios::in);


   switch(opc)
   {
    	case 1:
        	printf("\nIngrese los siguientes Datos: \n\n");
      	printf("NOMBRE DE LA MATERIA: \n");
      	scanf("%s",&mat);

      	printf("NOMBRE DEL SEMESTRE: \n");
      	scanf("%s",&sem);

      	printf("DIA DE LA SEMANA: \n");
         scanf("%s",&dia);

         while(strcmp(dia,"LUN")!=0 && strcmp(dia,"MAR")!=0 && strcmp(dia,"MIE")!=0 && strcmp(dia,"JUE")!=0 && strcmp(dia,"VIE")!=0)
         {
          printf("Ingresos permitidos: LUN, MAR, MIE, JUE, VIE\nDIA DE LA SEMANA: \n");
          scanf("%s",&dia);
         }

      	printf("HORA DE INICIO: \n");
      	scanf("%s",&ini);
         while(strcmp(ini,"07h00")!=0 && strcmp(ini,"08h00")!=0 && strcmp(ini,"09h00")!=0 && strcmp(ini,"10h00")!=0 && strcmp(ini,"11h00")!=0 && strcmp(ini,"12h00")!=0 && strcmp(ini,"13h00")!=0 && strcmp(ini,"14h00")!=0 && strcmp(ini,"15h00")!=0 && strcmp(ini,"16h00")!=0 && strcmp(ini,"17h00")!=0 && strcmp(ini,"18h00")!=0 && strcmp(ini,"19h00")!=0 && strcmp(ini,"20h00")!=0 && strcmp(ini,"21h00")!=0)
         {
          printf("Formato permitido: EJ. 07h00 \nHORA DE INICIO: \n");
          scanf("%s",&ini);
         }

         printf("HORA DE FIN: \n");
      	scanf("%s",&fin);
         while(strcmp(fin,"07h00")!=0 && strcmp(fin,"08h00")!=0 && strcmp(fin,"09h00")!=0 && strcmp(fin,"10h00")!=0 && strcmp(fin,"11h00")!=0 && strcmp(fin,"12h00")!=0 && strcmp(fin,"13h00")!=0 && strcmp(fin,"14h00")!=0 && strcmp(fin,"15h00")!=0 && strcmp(fin,"16h00")!=0 && strcmp(fin,"17h00")!=0 && strcmp(fin,"18h00")!=0 && strcmp(fin,"19h00")!=0 && strcmp(fin,"20h00")!=0 && strcmp(fin,"21h00")!=0)
         {
          printf("Formato permitido: EJ. 07h00 \nHORA DE FIN: \n");
          scanf("%s",&fin);
         }
         printf("Presione una tecla para regresar al menu principal\n\n");


         if (strcmp(dia,"LUN")==0)
         {
         archivo1<<"MATERIA: "<<mat<<"\n";
         archivo1<<"SEMESTRE: "<<sem<<"\n";
         archivo1<<"DIA: Lunes\n";
         archivo1<<"HORA DE INICIO: "<<ini<<"\n";
         archivo1<<"HORA FIN: "<<fin<<"\n\n";}
         if (strcmp(dia,"MAR")==0)
         {
         archivo2<<"MATERIA: "<<mat<<"\n";
         archivo2<<"SEMESTRE: "<<sem<<"\n";
         archivo2<<"DIA: Martes\n";
         archivo2<<"HORA DE INICIO: "<<ini<<"\n";
         archivo2<<"HORA FIN: "<<fin<<"\n\n";}
         if (strcmp(dia,"MIE")==0)
         {
         archivo3<<"MATERIA: "<<mat<<"\n";
         archivo3<<"SEMESTRE: "<<sem<<"\n";
         archivo3<<"DIA: Miercoles\n";
         archivo3<<"HORA DE INICIO: "<<ini<<"\n";
         archivo3<<"HORA FIN: "<<fin<<"\n\n";}
         if (strcmp(dia,"JUE")==0)
         {
         archivo4<<"MATERIA: "<<mat<<"\n";
         archivo4<<"SEMESTRE: "<<sem<<"\n";
         archivo4<<"DIA: Jueves\n";
         archivo4<<"HORA DE INICIO: "<<ini<<"\n";
         archivo4<<"HORA FIN: "<<fin<<"\n\n";}
         if (strcmp(dia,"VIE")==0)
         {
         archivo5<<"MATERIA: "<<mat<<"\n";
         archivo5<<"SEMESTRE: "<<sem<<"\n";
         archivo5<<"DIA: Viernes\n";
         archivo5<<"HORA DE INICIO: "<<ini<<"\n";
         archivo5<<"HORA FIN: "<<fin<<"\n\n";}


         archivo1.close();
         archivo2.close();
         archivo3.close();
         archivo4.close();
         archivo5.close();

         getch();
      break;

      case 2:


         if(strcmp(fechah,"Monday")==0)
         {
         printf("\n\t HORARIO DE HOY \n");
         while(!archivolun.eof())
			{
			archivolun.get(caracter);
			cout<<caracter;
			}
         }
			archivolun.close();         if(strcmp(fechah,"Tuesday")==0)         {         printf("\n\t HORARIO DE HOY \n");         while(!archivomar.eof())			{
			archivomar.get(caracter);
			cout<<caracter;
			}
         }
			archivomar.close();         if(strcmp(fechah,"Wednesday")==0)         {         printf("\n\t HORARIO DE HOY \n");         while(!archivomie.eof())			{
			archivomie.get(caracter);
			cout<<caracter;
			}
         }
			archivomie.close();         if(strcmp(fechah,"Thursday")==0)         {         printf("\n\t HORARIO DE HOY \n");         while(!archivojue.eof())			{
			archivojue.get(caracter);
			cout<<caracter;
			}
         }
			archivojue.close();         if(strcmp(fechah,"Friday")==0)         {         printf("\n\t HORARIO DE HOY \n");         while(!archivovie.eof())			{
			archivovie.get(caracter);
			cout<<caracter;
			}
         }
			archivovie.close();

         printf("Presione una tecla para regresar al menu principal\n\n");
         getch();

      break;

      case 3:
      	printf("\n\t HORARIO DE LA SEMANA \n");

         while(!archivolun.eof())
			{
			archivolun.get(caracter);
			cout<<caracter;
			}
			archivolun.close();         while(!archivomar.eof())			{
			archivomar.get(caracter);
			cout<<caracter;
			}
			archivomar.close();         while(!archivomie.eof())			{
			archivomie.get(caracter);
			cout<<caracter;
			}
			archivomie.close();         while(!archivojue.eof())			{
			archivojue.get(caracter);
			cout<<caracter;
			}
			archivojue.close();         while(!archivovie.eof())			{
			archivovie.get(caracter);
			cout<<caracter;
			}
			archivovie.close();
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
