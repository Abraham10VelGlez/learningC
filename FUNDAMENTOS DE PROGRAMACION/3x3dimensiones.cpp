#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()
{
    int matriz[3][3]={{0,0,0}}, i, j;
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
            {
                printf("\n INTRODUCE LOS NUMEROS [%d][%d] DE LA MATRIZ \n\t", i+1,j+1);                    
                scanf("%d", &matriz[i][j]);
                }
                }         
printf("\n\t");
printf("estos son los valores de la matriz\n\n");
printf("\t\t MATRIZ ORDENADA");
for(i=0;i<3;i++)
    {
        printf("\n\t");        
        printf("\n");
for(j=0;j<3;j++) 
{
   printf("%dt", matriz[i][j]);                  
}
}
printf("\n");
system("PAUSE");
getch();
}    
