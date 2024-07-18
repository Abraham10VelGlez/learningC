#include<conio.h>
#include<stdio.h>

main()
{
      int t,act;
      float calorias;
      printf("actividades que realizaste:\n en caso de dormir oprime 1 en caso de sentado oprime 2:");
      printf("\n1_dormir 1.08 cal en 1 minuto\n");
      printf("\n2_sentado 1.66 cal en 1 minuto\n");
      scanf("%d",&act);
      printf(" Ingresa tu tiempo:");
      scanf("%d",&t);
      
      if(act==1)
      {
                       calorias=1.08*t;
                       printf("\n calorias que el cuerpo consume dormido es: %.2f",calorias);     
                       }
                       else
                       if(act==2)
                       {
                       calorias=1.66*t;
                       printf("\n calorias que el cuerpo consume sentado es:  %.2f",calorias);
                       }    
                       
                       getch();
                   
                       }
                       
                       
