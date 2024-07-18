#include<conio.h>
#include<stdio.h>

main()
{
      int pre,vol,tem,ope2,ope1,ope3;
      printf("Escribe presion");
      scanf("%i",pre);
      printf("Escribe volumen");
      scanf("%i",vol);
      printf("Escribe temperatura");
      scanf("%i",tem);
      
      ope1=pre*vol;
      
      ope2=ope1/0.37;
      
      ope3=ope2*tem+460;
      
      printf("Masa total es: %i",ope3);
      
      getch();
      }
