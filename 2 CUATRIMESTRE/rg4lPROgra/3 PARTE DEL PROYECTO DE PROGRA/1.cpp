
#include<conio.h>
#include<stdio.h>

//1.	Dada una fecha con números, muestra la fecha poniendo el mes con letras.
int d,mes,anio;



int fecha();
int fecha()
{
    printf("teclea el dia:\n");
    scanf("%d",&d);
printf("teclea el mes:\n");
scanf("%d",&mes);
printf("teclea el anio:\n");
scanf("%d",&anio);

printf("Dia %d de ",d);

switch(mes)
{
           case 1: 
                printf("    Enero"); 
              break;

              case 2: 
                   printf("  Febrero"); 
              break;

              case 3: 
                   printf("  Marzo");
               break;

              case 4:
                    printf("  Abril");
               break;

              case 5:
                    printf("  Mayo");
               break;

              case 6:
                   printf("  Junio");
               break;

              case 7: 
                   printf("  Julio");
               break;

              case 8:
                   printf("  Agosto"); 
              break;

              case 9:
                   printf("  Septiembre"); 
              break;

              case 10:
                   printf("  Octubre"); 
              break;

              case 11:
                   printf("  Noviembre"); 
              break;

              case 12: 
                   printf("  Diciembre");
               break;    
               
                default: 
                         printf("  NO VALIDO");
                         

       }
       printf("  del anio  %d",anio);

}  

main()
{
fecha();
getch();

}
