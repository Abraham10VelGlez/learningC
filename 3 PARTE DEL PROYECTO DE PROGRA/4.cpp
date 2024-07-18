#include<conio.h>
#include<stdio.h>

main()
{
      int num,i,s,suma=0;
      float prom;
      
      printf("digita numero de estudiantes:");
      scanf("%d",&num);
      
      for(i=1;i<=num;i++)
      {
                                    printf("calificacion del estudiante %d es: \n",i);
                                    scanf("%d",&s);
                                    
                                      suma=suma+s;
                                      prom=suma/num;
                                    }
                                    printf("\n");
                                    
                                  
       printf("la suma es:%d\n",suma);
       printf("el promedio es:%.2f",prom);
       
       
                                    getch();
                                    }
