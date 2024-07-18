#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

int comu();
int comu()
{
	/*35.	Dada dos matrices de diferentes tamaños R y S mostrar los elementos comunes de R en S.*/
	
	int FILA,COLA,FILB,COLB,f,c,cc=0,pc;
	printf("Cuantas filas para la matriz A  ");
	scanf("%d",&FILA);
		printf("Cuantas columnas para la matriz A  ");
	scanf("%d",&COLA);
	printf("Cuantas filas para la matriz B  ");
	scanf("%d",&FILB);

	printf("Cuantas columnas para la matriz B  ");
	scanf("%d",&COLB);
	int matrizA[FILA][COLA];
	int matrizB[FILB][COLB];
	int vector[FILA*COLA];
	
	for(f=0;f<FILA;f++)
	{
		for(c=0;c<COLA;c++)
		{
		
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ A: ",f,c);
			scanf("%d",&matrizA[f][c]);
		}
	}
	for(f=0;f<FILB;f++)
	{
		for(c=0;c<COLB;c++)
		{
		
			printf("INGRESE EL DATO %d , %d PARA LA MATRIZ B: ",f,c);
			scanf("%d",&matrizB[f][c]);
		}
	}
	int n=0;
	for(f=0;f<FILB;f++)
	{
		for(c=0;c<COLB;c++)
		{
			if(matrizA[f][c]==matrizB[f][c])
			{
				vector[n]=matrizA[f][c];
				n++;
			}
		}
	}
	
	printf("\n\n\tMATRIZ A.\n\n");
	for(f=0;f<FILA;f++)
	{
		for(c=0;c<COLA;c++)
		{
			printf(" \t%d ",matrizA[f][c]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\tMATRIZ B.\n\n");
	for(f=0;f<FILB;f++)
	{
		for(c=0;c<COLB;c++)
		{
			printf("\t%d ",matrizB[f][c]);
		}
		printf("\n\n");
	}
	printf("\n\nLos elementos comunes entre ambas matrices son: \n\n");
	for(f=0;f<n;f++)
	{
		printf(" %d",vector[f]);
	}
}
main()
{
      comu();
      getch();
      }

