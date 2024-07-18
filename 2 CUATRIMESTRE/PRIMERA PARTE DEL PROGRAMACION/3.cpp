#include<conio.h>
#include<stdio.h>

main()
{
      int num,suma,a;
      float prom;
      
      for(num=1;num<=3;num++)
      {
                          printf("introduce numero %d que es: ",num);
                          scanf("%d",&a);
                          }
                          printf("\n");
                          suma=a+a+a;
                          
                          printf("la suma es:%d\n",suma);
                          
                          prom=suma/3;
                          
                          printf("el promedio es:%.2f",prom);
                         
                         getch();
                          
                          }
                          
                          
