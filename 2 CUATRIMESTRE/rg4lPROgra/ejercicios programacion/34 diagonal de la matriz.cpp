/*pedir los datos d una matriz de 4*4 y que almacene los datos de la diagonal proncipal en un vector, imprimir la matriz y el vector resultante */
#include<stdio.h>
#include<conio.h>
void matriz()
{
      int i,j,suma=0;
      int mat[4][4];
      int vecr[4];
      for(j=0;j<=3;j++)
      {
         for(i=0;i<=3;i++)  
         {
                            printf ("ingresa la posicion %d,%d de la matriz \n",j,i);
                            scanf("%d",&mat[j][i]);
                            }
                            printf("\n");
                            }
                                     
                                                                   printf("\n\n\n************matriz****\n\n");
                                                                  
                                                                       for(j=0;j<=0;j++)
                                                              {
                                                                   printf("\t%d",mat[j][i]);
                                                                   
                                                                   printf("\n");
                                                                   for(j=0;j<=0;j++)
                                                              {
                                                                   printf("\t%d",mat[j][i+1]);

                                                                   }
                                                                   for(j=0;j<=0;j++)
                                                              {
                                                                   printf("\t%d",mat[j+1][i+2]);

                                                                   }
                                                                   for(j=0;j<=0;j++)
                                                              {
                                                                   printf("\t%d",mat[j+2][i+3]);
                                                                  

                                                                   }
                                                               

                                                                   }
                                                                   
                                                                   printf("\n");
                                                                   getch();
                                                                   }

      
      
      
      
          int main()
           { 
     matriz();
     getch();
     }
