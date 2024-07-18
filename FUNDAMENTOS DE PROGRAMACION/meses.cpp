#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
            int i, j;
            printf("QUE OPCION DESEA: \n");
            printf("MESES DEL ANIO: \n");
            printf("DIAS DE LA SEMANA: \n");
            printf("Introduzca número del 1 al 12:");
            scanf("%d",&i);

    switch(i){
              case 1:
                   printf ("Enero\n");
                   break;
              case 2:
                   printf ("Febrero\n");
                   break;
              case 3:
                   printf ("Marzo\n");
                   break;
              case 4:
                   printf ("Abril\n");
                   break;
              case 5:
                   printf ("Mayo\n");
                   break;
              case 6:
                   printf ("Junio\n");
                   break;
              case 7:
                   printf ("Julio\n");
                   break;
              case 8:
                   printf ("Agosto\n");
                   break;
              case 9:
                   printf ("Septiembre\n");
                   break;
              case 10:
                   printf ("Octubre\n");
                   break;
              case 11:
                   printf ("Noviembre\n");
                   break;
              case 12:
                   printf ("Diciembre\n");
                   break;
              default:
                   printf ("Opción no válida\n");
                   break;
    }
    printf("Introduzca número del 1 al 7:");
            scanf("%d",&j);
    switch(j){
              case 1:
                   printf ("Domingo\n");
                   break;
              case 2:
                   printf ("Lunes\n");
                   break;
              case 3:
                   printf ("Martes\n");
                   break;
              case 4:
                   printf ("Miercoles\n");
                   break;
              case 5:
                   printf ("Jueves\n");
                   break;
              case 6:
                   printf ("Viernes\n");
                   break;
              case 7:
                   printf ("Sabado\n");
                   break;
}
    system("PAUSE");     
    return 0;
    getch();
}
