#include <stdio.h>
#include<conio.h>
int main(){
int n;
double precio, total=0;

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

printf("Total vendido = %.2f", total);
getch();
}
