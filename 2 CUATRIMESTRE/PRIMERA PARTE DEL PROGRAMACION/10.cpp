#include<conio.h>
#include<stdio.h>

main()
{
      int t,activid;
      float calorias1,calorias2;
      
      printf("dormir_1 1.08 cal en 1 minuto\n");
      printf("sentado_2 1.66 cal en 1 minuto\n");
      
      printf(" Ingresa tu tiempo:");
      scanf("%d",&t);
      
      if(calorias1=1.08)
      {
                       calorias1=1.08*t;
                       printf("\n calorias que el cuerpo consume dormido es: %d",calorias1);     
                       }
                       else
                       if(calorias2=1.66)
                       {
                       printf("sentado_2\n");
                       calorias2=1.66*t;
                       printf("\n calorias que el cuerpo consume sentado es:  %d",calorias2);
                       }    
                       
                       getch();
                   
                       }
                       
                       
