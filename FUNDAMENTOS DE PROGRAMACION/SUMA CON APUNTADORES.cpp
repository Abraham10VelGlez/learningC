#include <stdio.h> 
#include <stdlib.h>
#include <conio.h> 

int main() { 

int opc;
int *a, *suma; 
int *b, *resta;

a = (int *)malloc(2 * sizeof(int) ); 
printf("1.- SUMA DE APUNTADORES\n");
printf("2.- RESTA DE APUNTADORES\n");
printf("3.- MULTIPLICACION DE APUNTADORES\n");
printf("4.- DIVISION DE APUNTADORES\n");
scanf("%d",&opc);
if(opc==1)
{
a[0] = 1; 
a[1] = 2;
a[2] = 3;  

suma = (int *)malloc(sizeof(int) ); 
*suma = a[0] + a[1] + a[2]; 
printf("La suma es: %d",*suma); 
}
getch();
}



if(opc==2)
{
a[0] = 1; 
a[1] = 2; 
a[2] = 3; 

resta = (int *)malloc(* sizeof(int) ); 
*resta = b[0] - b[1] - b[2]; 
printf("La resta es: %d",*resta); 
}
getch();
}
