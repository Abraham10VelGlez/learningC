#include<conio.h>
#include<stdio.h>
#include<windows.h>
int matriz()
{
	int matriz[5][3],j,i,vectfila[5],vectcolumna[3],suma=0;
	printf("\n\t***MATRIZ***\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d,%d:",i,j);
			scanf(" %d",&matriz[i][j]);
		}
		printf("\n");
	}
	system("cls");
	printf("\n\n\t***VECTOR DE FILAS***\n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			suma=suma+matriz[i][j];
			vectfila[i]=suma;
		}
		suma=0;
	}
	for(i=0;i<5;i++)
	{
		printf(" \n%d\n ",vectfila[i]);
	}
	printf("\n\n\t***VECTOR DE COLUMNAS***\n\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<5;i++)
		{
			suma=suma+matriz[i][j];
			vectcolumna[j]=suma;
		}
		suma=0;
	}
	for(i=0;i<3;i++)
	{
		printf(" %d\t",vectcolumna[i]);
	}
	printf("\n\n\t***Matriz***\n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matriz[i][j]);
		}
	}
}
main()
{
	system("color 3a");
	matriz();
	getch();
	return 0;
}
