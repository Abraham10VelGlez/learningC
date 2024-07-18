#include <stdio.h>
#include <conio.h>
#include <windows.h>

int matriz[3][3],d,k;


int mat(int matriz[3][3],int d,int k);
int mat(int matriz[3][3],int d,int k)

{
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
                 }
main()
{
    system("color e2");
    int mat();
           
           getch();                  
 
}




