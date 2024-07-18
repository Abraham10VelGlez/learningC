#include<conio.h>
#include<stdio.h>

main()
{
      int numpul,edad;
      float ope1;
      
      printf("ingresa tu edad: ");
      
      scanf("%d",&edad);
      
      numpul=220-edad;
      ope1=numpul/10;
      
      printf("El numero de pulsaciones es:%.2f",ope1);
      getch();
      }
