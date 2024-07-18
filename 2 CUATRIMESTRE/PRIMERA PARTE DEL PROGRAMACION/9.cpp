#include<conio.h>
#include<stdio.h>

main()
{
      int num=0,b,b2;
      printf("Cuantos numeros");
      scanf("%i",&num);
      
      int vec[num];
      
      for(int a=0;a<num;a++)
      {
              printf("Teclea numero: %i de %i: ",(a+1),num);
              scanf("%i",&vec[a]);
              }
              
              int aux2;
              
              for(b2=0;b2<num;b2++)
              {
                      for(int b=0;b<num:b++)
                      {
                              if(vec[b]>vec[b+1]
                              {
                              int aux=vec[b];
                              vec[b]=vec[b+1];
                              vec[b+1]=aux;
                              }
                              }
                              for( b=0,b<num;b++)
                              {
                                      printf("%i",vec[b]);
                                      }
                                      getch();
                                      }
