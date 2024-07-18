#include <stdio.h>
#include <conio.h>

int n;
double precio, total=0;

int factura();
int factura()

{
    do{
do{
printf("\nIntroduzca la cantidad vendida: ");
scanf("%d",&n);
if(n<0) printf("Cantidad no valida");
}while(n<0); 
if (n>0){
printf("Introduzca el precio: ");
do{
scanf("%lf",&precio);
if(precio<0) printf("Precio no valido");
else total+=n*precio;
}while(precio<0);
}
}while(n!=0); 

printf("Total de la factura vendida = %.2f", total);

}

main()
{
      factura();
      getch();
}
