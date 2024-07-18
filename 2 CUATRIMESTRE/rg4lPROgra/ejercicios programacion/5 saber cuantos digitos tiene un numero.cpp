#include<stdio.h>
#include<conio.h>

main()
{
int num,contador=1;
printf(" este es un programa para saber cuantos digitos tiene ");
printf("un numero entero ingresado por el usuario\t ingrese uno");
scanf("%d",&num);
while(num/10>0)
{
               num=num/10;
               contador++;
               }
               printf("el numero es de  %d :",contador);
               printf("digitos");
               getch();
               }
