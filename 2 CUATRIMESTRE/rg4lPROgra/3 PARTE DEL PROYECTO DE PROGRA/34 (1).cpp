#include<stdio.h>
#include<conio.h>


int diag();
int diag()
{ 
printf("\n\nDADA UNA MATRIZ CUADRADA INVETIR SU DIAGONAL PRINCIPAL");
int m[4][4];

int i=0, j=0; 


for(i=0;i<j;i++)
{
	for(j=0;j<i;j++)
	{
		printf("\n\nIngresa tu matriz");
	}
	printf("\n\n");
} 


for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		printf("\n\ntus posiciones de tu matriz son [%d][%d]\n",i,j);
		scanf("%d",&m[i][j]);
	}
	printf("\n");
} 
printf("\n");
printf("\ntu matriz es: \n");
printf("\n");
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		printf("\t%d",m[i][j]);
	}
	printf("\n\n");
} 

printf("\n\n");
printf("\ntu diagonal inversa es: \n");
printf("\n");
for (i=4;i>=0;i--) 
{ 
for (j=4;j>=0;j--) 
{ 
if (j+i==4-1) 

{ 
 printf ("\t%d",m[i][j]);
 printf("\n");
} 
} 
} 
}

main()
{ 
    diag();
      getch();
      }
