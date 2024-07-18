#include<conio.h>
#include<stdio.h>

void tiendita()
{

 float ganan, prec,venta,artc; 
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
int main()
{
tiendita();           
getch();
}             
      

