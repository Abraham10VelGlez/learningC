#include<conio.h>
#include<stdio.h>
int nume,q,s,suman=0;
      float prome;
      
      int estudiantes();
     int  estudiantes()
      {
              printf("digita numero de estudiantes:");
      scanf("%d",&nume);
      
      for(q=1;q<=nume;q++)
      {
                                    printf("calificacion del estudiante %d es: \n",q);
                                    scanf("%d",&s);
                                    
                                      suman=suman+s;
                                      prome=suman/nume;
                                    }
                                    printf("\n");
                                    
                                    }   
main()
{
          estudiantes();                       
       printf("la suma es:%d\n",suman);
       printf("el promedio es:%.2f",prome);
       
                                    getch();
                                    }
