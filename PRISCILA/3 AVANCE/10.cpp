#include <stdio.h>
#include <conio.h>

int r;
double precio, total=0;

int factura();
int factura()

{
    do{
do{
printf("\nIntroduzca la cantidad vendida en piesas: ");
scanf("%d",&r);
if(r<0) printf("Cantidad no valida");
}
while(r<0); 
if (r>0){
printf("Introduzca el precio: ");
do{
scanf("%lf",&precio);
if(precio<0) printf("Precio no valido");
else total+=r*precio;
}while(precio<0);
}
}while(r!=0); 

printf("Total de la factura vendida = %.2f", total);

}

main()
{
      factura();
      getch();
}
