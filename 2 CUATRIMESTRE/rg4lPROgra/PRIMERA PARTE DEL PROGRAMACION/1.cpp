#include<conio.h>
#include<stdio.h>

main()
{
      float peso,dolar,valordolar;
      
      printf("cantidad de pesos");
      scanf("%f",&peso);
      printf("cantidad de dolares");
      scanf("%f",&dolar);
      
      valordolar=peso/dolar;
      printf("El valor en dolares es: %f",valordolar);
      
      getch();
      }
      
      
