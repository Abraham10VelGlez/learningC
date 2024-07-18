#include<conio.h>
#include<stdio.h>

main()
{
      int a,b,c,p;
      
      printf("Introduce calificacion:\n");
      scanf("%d",&a);
      printf("Introduce calificacion:\n");
      scanf("%d",&b);
      printf("Introduce calificacion:\n");
      scanf("%d",&c);
      
      p=(a+b+c)/3;
      if(p>=8)
      {
              printf("alumno aprobo");
              }
              else
              if (p<7)
              {
                      printf("alumno ira a final global");
                      }
                      getch();
                      }
                      
