
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("color e2");
    int matriz[3][3]={{0}},d,k;
    
     for(d=0;d<3;d++)
     {
                      for(k=0;k<3;k++)
                      {
    
    printf("\n INGRESA EL NUMERO DEL ACOMODO [%d][%d] DE LA MATRIZ \n",d+1,k+1);
    scanf("%d",&matriz[d][k]);
                           
             printf("\n");              
}
}

 
 printf("_________________valores de la matriz________________\n");
 
 printf("\t\tMATRIZ ACOMODADA DEACUERDO AL NUMERO ASIGNADO");
 
 for(d=0;d<3;d++)
 {
                 printf("\n");
                 
                 for(k=0;k<3;k++)
                 {
                 printf("%6d",matriz[d][k]);
                 }
                 }            
                 printf("\n"); 
                 printf("\n");  
              system("PAUSE");                   
 
}




