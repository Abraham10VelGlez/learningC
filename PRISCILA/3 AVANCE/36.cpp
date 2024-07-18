#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

int igua();
int igua()
{
	/*36.	Dada la matriz de m*n y el vector de tamaño n, determinar que columna de la matriz es igual al vector.*/
	
	int FIL,COL,f,c,cc=0,pc;
	printf("Cuantas filas para la matriz= ");
	scanf("%d",&FIL);
	printf("Cuantas columnas para la matriz= ");
	scanf("%d",&COL);
	int matriz[FIL][COL];
	int vector[COL];
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
		
			printf("INGRESE NUMERO %d , %d PARA MATRIZ: ",f,c);
			scanf("%d",&matriz[f][c]);
		}
	}
	
	for(c=0;c<COL;c++)
	{
		printf("Ingrese los datos para su vector: ");
		scanf("%d",&vector[c]);
	}
	
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			if(matriz[f][c]==vector[c])
			{
				pc=c;
				cc++;
			}
		}
	}
	system("cls");
	printf("\n\nMatriz\n\n");
	
	for(f=0;f<FIL;f++)
	{
		for(c=0;c<COL;c++)
		{
			printf(" %d",matriz[f][c]);
			
		}
		printf("\n\n");
	}
	printf("\n\nVector\n\n");
	for(c=0;c<COL;c++)
	{
		printf("\n\t %d",vector[c]);
	}
	
	if(cc==COL)
	{
		printf("\n\nLa columna %d de matriz es igual al vector.",pc);
	}
	else
	{
		printf("\n\nNinguna columna es igual al vector.");
	}
}

main()
{
      igua();
      getch();
      }
