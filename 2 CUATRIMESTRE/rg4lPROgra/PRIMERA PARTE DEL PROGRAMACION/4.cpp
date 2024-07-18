#include<conio.h>
#include<stdio.h>

main()
{
      int numpul,edad;
      float operacion1;
      
      printf("ingresa tu edad: ");
      
      scanf("%d",&edad);
      
      numpul=220-edad;
      operacion1=numpul/10;
      
      printf("El numero de pulsaciones es:%.2f",operacion1);
      getch();
      }
