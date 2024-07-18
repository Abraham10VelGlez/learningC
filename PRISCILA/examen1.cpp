#include<conio.h>
#include<stdio.h>
#include<windows.h>
int vector()
{
	int vector[30],i,cuadrado=1,vectresultante[30];
	printf("\n\t***El vector***\n");
	for(i=0;i<30;i++)
	{
		printf("Posicion %d:",i);
		scanf("%d",&vector[i]);
	}
	printf("\n\t***Vectro rezultante***\n");
	for(i=0;i<30;i++)
	{
		cuadrado=vector[i]*vector[i];
		vectresultante[i]=cuadrado;
	}
	for(i=0;i<30;i++)
	{
		printf(" %d \n",vectresultante[i]);
	}
}
main()
{
	system("color 3a");
    vector();
	getch();
	return 0;
}
