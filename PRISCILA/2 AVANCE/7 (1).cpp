#include<conio.h>
#include<stdio.h>

float ganan, prec,venta,artc;
float tiendita();
float tiendita()
{
       printf("INGRESA PRECIO DE ARTICULO");
      printf("\n");
scanf("%f",&artc);

ganan=artc*0.30;

printf("\nLA GANCIA ES:%.1f\n",ganan);

venta=ganan+artc;

 printf("\nEL PRECIO DE LA VENTA ES:%.1f\n",venta);
   printf("\n");
   printf("\n");
              printf("¡¡¡¡GRACIAS X SU COMPRA!!!!");
              }
main()
{
tiendita();           
getch();
}             
