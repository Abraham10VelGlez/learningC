#include<stdio.h>
#include<conio.h>

using namespace std; 

int main(int argc, char *argv[])
{ 

int m[3][3];

int i=0, j=0; 
int suma=0;

for(i=0;i<j;i++)
{
	for(j=0;j<i;j++)
	{
		printf("ingresa tu matriz");
	}
	printf("\n\n");
} 


for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("tus posiciones de tu matriz son [%d][%d]\n",i,j);
		scanf("%d",&m[i][j]);
	}
	printf("\n\n");
} 
printf("\n\n");
printf("tu matriz es: \n");
printf("\n\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\t%d",m[i][j]);
	}
	printf("\n\n");
} 

printf("\n\n");
printf("tu diagonal inversa es: \n");
printf("\n\n");
for (i=3;i>=0;i--) 
{ 
for (j=3;j>=0;j--) 
{ 
if (j+i==3-1) 

{ 
 printf ("\t%d",m[i][j]);
 printf("\n\n");
} 
} 
} 
return 0;
}

