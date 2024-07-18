#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, p8=0, p9=0, p10=0, incorrectas;
      printf("JUEGO DE PREGUNTAS: \n");
      printf("QUIEN DESCUBRIO AMERICA?: \n");
      scanf("%d", &p1);
      if(p1==0){
                printf("LA RESPUESTA ES CORRECTA \n");
                incorrectas=incorrectas;
                }
                else
                if(p1!=0)
                incorrectas=incorrectas+1;
                printf("LA RESPUESTA ES INCORRECTA \n");
                     
     system ("PAUSE");
     return 0;
     getch();
     }
    
